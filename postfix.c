#include<stdio.h>
#include<ctype.h>


# define MAX 100        
# define POSTFIXSIZE 100     

 int stack[MAX];
 int top = -1 ;             
 //push
 void push(int item)
 {

	 if(top >= MAX -1)
	 {
		 printf("stack over flow");
		 return;
	 }
	 else
	 {
		 top = top + 1 ;
		 stack[top]= item;
	 }
 }

 //pop operation
 int pop()
 {
	 int item;
	 if(top == -1)
	 {
		printf("stack under flow");
	 }
	 else
	 {
		 item = stack[top];
		 top = top - 1;
		 return item;
	 }
 }

 void PostfixEvaluation(char postfix[])
 {

	int i ;
	char ch;
	int val;
	int A, B ;


	
	for (i = 0 ; postfix[i] != ')'; i++)
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			
			A = pop();
			B = pop();

			switch (ch) 
			{
				case '*':val = B * A;
				         break;

				case '/':val = B / A;
				         break;

				case '+':val = B + A;
				         break;

				case '-': val = B - A;
						  break;
			}

			
			push(val);
		}
	}
	printf("\nPostfix evaluation : %d \n", pop()) ;
 }

 int main()
 {

	int i ;

	char postfix[POSTFIXSIZE];
	printf("\nEnter postfix expression having four operators and end with ) \n");


	for (i = 0 ; i <= POSTFIXSIZE - 1 ; i++)
	{
		scanf("%c", &postfix[i]);

		if ( postfix[i] == ')' ) 
		break; 
	}

	PostfixEvaluation(postfix);
	
	return 0;
 }
