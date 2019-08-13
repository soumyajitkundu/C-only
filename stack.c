#include<stdio.h>
#include<stdlib.h>
//defining MACRO
#define MAX 5
//global variable
int top=-1;
int arrstack[30];
//overflow
int isfull()
{
	if(top==MAX-1)
		return 1;
	else
		return 0;
}
//underflow
int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
//push
void push(int data)
{
	if(isfull()==1)
	printf("Stack is Full\n");
	else
	{
		top=top+1;
		arrstack[top]=data;
	}
}
//pop
void POP()
{
	int data;
	if(isempty()==1)
	printf("Stack is empty\n");
	else
	{
		data=arrstack[top];
		top=top-1;
		printf("\n\nDELETED ELEMENT--->%d\n",data);
	}
	return(data);
}

//display
void display()
{
	int i;
	if(isempty()==1)
		printf("Stack is empty\n");
   		
	else
	{
	    printf("\nStack element---->");
		for(i=top; i>=0; i--)
		printf(" %d  ",arrstack[i]);
		printf("\n");
	}
}

//main
int main()
{
	int a[10],i,n,C;
	do{
	printf("\nEnter 1 for PUSH\nEnter 2 for POP\nEnter 3 for Display\nEnter 4 for Exit");
	  printf("\nEnter your choice ");
	  scanf("%d",&C);
	switch(C)
	{
		case 1: printf("PUSH operation\n\n");
		          int data;
		          printf("Enter the data to enter(push) ");
		          scanf("%d",&data);
		          push(data);
		          break;
		          
	    case 2: printf("POP operation\n\n");
	    		  POP();
	    		  break;
	    		  
	   case 3:  printf("Display operation\n\n");
	   			  display();
	   			  break;
	   			 
	   case 4:  printf("Exit from stack\n\n");
	             exit(0);//import stdlib package
	   			  break;
	   }   
	   	  
   }
		while(1); 
 		return 0; 
}  

		
