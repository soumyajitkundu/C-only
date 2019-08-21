#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct queue
{
	int front;
	int rear;
	int Queue[MAX];
}st;

int Qinsert(int data)
{
	if(st.rear==MAX-1)
		printf("Queue is full\n");
	else if(st.front==-1)
	{
		st.front=st.rear=0;
		st.Queue[st.rear]=data;
		
	}
	else
	{
		st.rear=st.rear+1;
		st.Queue[st.rear]=data;
	}
}

int Qdelete()
{
	if(st.front==-1)
	printf("Queue is empty\n\n");
	else if(st.front==st.rear)
	{
		printf("\nDeleted element--%d",st.Queue[st.front]);
		st.front=st.rear=-1;
	}
	else
	{
		printf("\nDeleted element--%d",st.Queue[st.front]);
		st.front++;
	}
}

void display()
{
	int i;
	if(st.rear==-1)
		printf("Queue is empty\n\n");
	else
	{	
		printf("Queue is ");
		for(i=st.front; i<=st.rear; i++)
		{
			if(st.rear!=-1)
			printf("%d ",st.Queue[i]);
		}
	}
}
//main function
int main()
{
	int Queue[10],i,c;
	int data;
	st.front=-1;
	st.rear=-1;
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
		          Qinsert(data);
		          break;
		          
	    case 2:   Qdelete();
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
