#include<stdio.h>
#include<stdlib.h>
//defining MACRO
#define MAX 5
struct Stack
{
	int top;
	int arrstack[10];
}st;

int isfull()
{
	if(st.top==MAX-1)
		return 1;
	else
		return 0;
}
//underflow
int isempty()
{
	if(st.top==-1)
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
		st.top=st.top+1;
		st.arrstack[st.top]=data;
		printf("%d",data);
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
		data=st.arrstack[st.top];
		st.top=st.top-1;
		printf("\nDELETE ELEMENT--->%d\n",data);
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
		for(i=st.top; i>=0; i--)
		printf(" %d  ",st.arrstack[i]);
		printf("\n");
	}
}

//main
int main()
{
	int a[10],i,n,C;
	st.top=-1;
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

		
