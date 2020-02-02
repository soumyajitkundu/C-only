#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *ptrnext;
};

void insert_beg(struct Node **ptrstart, int item)
{
	int data;
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data=item;
	temp->ptrnext = *ptrstart;
	*ptrstart = temp;
}

void insert_end(struct Node **ptrstart,int item)
{
	struct Node *temp,*temp1;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=item;
	temp->ptrnext=NULL;
	temp1=*ptrstart;
	while(temp1->ptrnext!=NULL)
		
		temp1=temp1->ptrnext;
		
	temp1->ptrnext=temp;
	}



int count(struct Node **ptrstart)
{
		struct Node *temp=*ptrstart;
		int count=0;
		if(temp==NULL)
		return 0;
	else
	{
		while(temp!='\0')
		{
			count++;
			temp=temp->ptrnext;
		}
	}
	return(count);
}



void insert_pos(struct Node **ptrstart,int pos,int item)
{
	int i;
	struct Node *temp, *temp1;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=item;
	temp->ptrnext=NULL;
	temp1=*ptrstart;
	if(pos<0 || pos>count(ptrstart))	
		printf("Not valid position\n\n");
	else
	{
		for(i=1;i<pos;i++)
			temp1=temp1->ptrnext;
	}
	temp->ptrnext=temp1->ptrnext;
	temp1->ptrnext=temp;
}

struct Node *delfirst(struct Node *ptrstart)
{
	int data;
	struct Node *delnode;
	if(ptrstart==NULL)
		printf("Nothing to delete\n\n");
	else
	{
		delnode=ptrstart;
		data=delnode->data;
		printf("Deleted data is %d",data);
		printf("\n\n");
		ptrstart=ptrstart->ptrnext;
		free(delnode);
	}
	return (ptrstart);
}

void dellast(struct Node **ptrstart)
{
	int data;
	struct Node *temp,*temp1;
	temp=*ptrstart;
	if(temp==NULL)
		printf("Nothing to delete\n\n");
	else if(temp->ptrnext==NULL)
	{
		data=temp->data;
		printf("Deleted data is %d",data);
		printf("\n\n");
		*ptrstart=NULL;
		free(temp);
	}
	else
	{
		while(temp->ptrnext!=NULL)
		{
			temp1=temp;
			temp=temp->ptrnext;
		}
		data = temp->data;
		printf("Deleted data is %d",data);
		printf("\n\n");
		temp1->ptrnext=NULL;
		free(temp);
	}
}



void display(struct Node **ptrstart)
{
	struct Node *temp=*ptrstart;
	printf("Linked List--> ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->ptrnext;
	}
	printf("\n\n");
}

struct Node *reverse(struct Node *ptrstart)
{
	struct Node *prev,*curr,*temp;
	prev=NULL;
	curr=ptrstart;
	temp=ptrstart;
	while(curr!=NULL)
	{
		temp=temp->ptrnext;
		curr->ptrnext=prev;
		prev=curr;
		curr=temp;
	}
	return(prev);
}

//main program
int main()
{
	struct Node *ptrstart=NULL;
	int item,c,pos,nodes;
	
	
	do
	{
		printf("1.Enter the data to insert at beginning\n");
		printf("2.Enter the data to insert at end\n");
		printf("3.Enter the data to insert at any position\n");
		printf("4.Display the Linked List\n");
		printf("5.Delete at beginning\n");
		printf("6.Delete at Last\n");
		printf("7.Reverse the Linked List\n");
		printf("8.Count the total Nodes of Linked List\n");
		printf("9.Exit from Linked List\n");
		printf("Enter your choice ");
		scanf("%d",&c);
	
	
		switch(c)
		{
			case 1:	printf("Enter the data to insert\n");
					scanf("%d",&item);
					insert_beg(&ptrstart,item);
					break;
				
			case 2: printf("Enter the data to insert\n");
					scanf("%d",&item);
					insert_end(&ptrstart,item);
					break;
				
			case 3: printf("Enter the data to insert\n");
					scanf("%d",&item);
					printf("Enter the position to insert\n");
					scanf("%d",&pos);
					printf("\n");
					insert_pos(&ptrstart,pos,item);
					break;
		
			case 4:	display(&ptrstart);
					break;
					
					
			case 5: ptrstart=delfirst(ptrstart);
				    break;
				   
			case 6: dellast(&ptrstart);
				    break;	   
			
			
			case 7: ptrstart=reverse(ptrstart);
					break;
		
			case 8: nodes=count(&ptrstart);
					printf("Total nodes in Linked List ---> %d",nodes);
					printf("\n\n\n");
					break;
			
			case 9: printf("Exit\n"); 
					exit(0);
				
		}
	}	
	while(1);
    return 0;
}
		 
