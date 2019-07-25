#include<stdio.h>
int main()
{
	int arr[60],n,k,i;
	printf("Enter the total length of array");
	scanf("%d",&n);
	printf("Enter the values of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position where you want to delete");
	scanf("%d",&k);
	for(i=(k+1);i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	printf("The new array after deletion is");
	for(i=0;i<(n-1);i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
