#include <stdio.h>
int main()
{
	int a,b,i,m=0;
	printf("Enter two number");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a; i++)
	{
		m=m+b;
	}
	printf("%d",m);
}
