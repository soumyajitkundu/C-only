#include<stdio.h>
int main()
{
	int arr[10],i,j,temp,n,min;
	printf("Enter the total length of the array ");
	scanf("%d",&n);
	printf("Enter the values of the array ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	//sorting
	for(i=0; i<n-2; i++)
	{
		min=1;
		for(j=i+1; j<=n-1; j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		if(min!=1)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	printf("Array after sorting ");
	for(i=0; i<n; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;	
}
