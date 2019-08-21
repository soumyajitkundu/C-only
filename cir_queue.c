#include<stdio.h>
#include<stdlib.h>
#define MAX 5
//global variable
int CQueue[MAX], front=-1, rear=-1;
int CQinsert(int data)
{
	if(rear==MAX-1 && front==0)
		printf("Circular Queue is full\n");
	else if(front==rear+1)
		printf("Circular Queue is full\n");
	else if(front==-1)
	{
		front=rear=0;
		CQueue[rear]=data;
		
	}
	else if(rear==MAX-1)
	{
		rear=0;
		CQueue[rear]=data;
	}
	else 
	{
		rear=rear+1;
		CQueue[rear]=data;
	}
}

int CQdelete()
{
	if(front==-1)
	printf("Circular Queue is empty\n\n");
	else if(front==rear)
	{
		printf("\nDeleted element--%d",CQueue[front]);
		front=rear=-1;
	}
	else if(front==MAX-1)
	{
		printf("\nDeleted element--%d",CQueue[front]);
		front=0;
	}
	else
	{
		printf("\nDeleted element--%d",CQueue[front]);
		front=front+1;
	}
}

void display()
{
	int i;
	if(front>rear)
	{
		printf("Circular Queue is ");
		for(i=front; i<=MAX-1; i++)
		{
			printf("%d ",CQueue[i]);
		}
		for(i=0; i<=rear; i++)
		{
			printf("%d ",CQueue[i]);
		}
	}
	else
	{
		for(i=front; i<=rear; i++)
		{
			if(rear!=-1)
			printf("%d",CQueue[i]);
		}
	}
	
}
//main function
int main()
{
	int CQueue[10],i,c;
	int data;
	do
	{
	  printf("\nEnter 1 to Enter Element\nEnter 2 to Delete Element\nEnter 3 for Display\nEnter 4 for Exit");
	  printf("\nEnter your choice ");
	  scanf("%d",&c);
	switch(c)
	{
		case 1:   
		          printf("Enter the data to enter ");
		          scanf("%d",&data);
		          CQinsert(data);
		          break;
		          
	    case 2:   CQdelete();
	    		  break;
	    		  
	   case 3:    printf("Display operation\n\n");
	   			  display();
	   			  break;
	   			 
	   case 4:  printf("Exit from queue\n\n");
	             exit(0);//import stdlib package
	   			  break;
	   }   
	   	  
   }
		while(1); 
 		return 0; 
}  
