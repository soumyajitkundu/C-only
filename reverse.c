#include<stdio.h>
int main()
{
	int arr[10],n,i,c;
	printf("Enter the total length of array");
	scanf("%d",&n);
	printf("Enter the values of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++)
	{
		c=arr[i];
		arr[i]=arr[n-i];
		arr[n-i]=c;
	}
	printf("The new array after reversing is");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
