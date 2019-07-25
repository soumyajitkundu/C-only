#include<stdio.h>
int main()
{
	int arr[10],i,j,k,temp,n;
	printf("Enter the total number of elements in the array");
	scanf("%d",&n);
	printf("Enter the element of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The sorted array is");
	for(i=0;i<n;i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}
