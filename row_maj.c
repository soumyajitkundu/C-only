#include<stdio.h>
int main()
{
	int a[50][50],i,j,r,c;
	printf("Enter the number of rows ");
	scanf("%d",&r);
	printf("Enter the number of columns ");
	scanf("%d",&c);
	printf("Enter the number ");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Row Major Order ");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d\t",a[i][j]);
		}
		//printf("\n");
	}
	return 0;
}
