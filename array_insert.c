#include<stdio.h>
int main()
{
	int arr[10],n,a,num,i;
	printf("Enter the total length of array");
	scanf("%d",&n);
	printf("Enter the values of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number in which you want to insert");
	scanf("%d",&num);
	printf("Enter the value to be inserted");
	scanf("%d",&a);
	for(i=n;i>=num;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[num]=a;
	printf("The new array after insertion is");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
