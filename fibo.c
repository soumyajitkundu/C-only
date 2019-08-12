#include<stdio.h>
int fibo(int n)
{
	if((n==1)||(n==0))
	return n;
	else
	return (fibo(n-1)+fibo(n-2));
}
int main()
{
	int n,i,j=0;
	printf("Enter the term upto which you want to print the Fibonacci Series");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fibo(j));
		j++;
	}
}
