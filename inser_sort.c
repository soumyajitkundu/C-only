#include<stdio.h>
int main()
{
	int arr[10],i,j,temp,n;
	printf("Enter the total length of array ");
	scanf("%d",&n);
	printf("Enter the values of the array ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	//sorting
	for(i=1; i<n; i++)
	{
		temp=arr[i];
		for (j=i-1; (j>=0 && temp<arr[j]); j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
	printf("Array after sorting ");
	for(i=0; i<n; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}

