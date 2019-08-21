#include<stdio.h>
#include<stdlib.h>
#define MAX 5
//global variable
int Queue[MAX], front=-1, rear=-1;
int Qinsert(int data)
{
	if(rear==MAX-1)
		printf("Queue is full\n");
	else if(front==-1)
	{
		front=rear=0;
		Queue[rear]=data;
		
	}
	else
	{
		rear=rear+1;
		Queue[rear]=data;
	}
}

int Qdelete()
{
	if(front==-1)
	printf("Queue is empty\n\n");
	else if(front==rear)
	{
		printf("\nDeleted element--%d",Queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("\nDeleted element--%d",Queue[front]);
		front++;
	}
}

void display()
{
	int i;
	if(rear==-1)
		printf("Queue is empty\n\n");
	else
	{	
		printf("Queue is ");
		for(i=front; i<=rear; i++)
		{
			if(rear!=-1)
			printf("%d ",Queue[i]);
		}
	}
}
//main function
int main()
{
	int Queue[10],i,c;
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
