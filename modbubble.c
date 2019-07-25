#include<stdio.h>
int main()
{
	int arr[10],i,j,t,n,swapped;
	printf("Enter the total length of array ");
	scanf("%d",&n);
	printf("Enter the values of the array ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	//sorting
	for(i=0; i<n-1; i++)
	{
		swapped=0;
		for (j=0; j<n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
				swapped=1;
			}
		}
		if(swapped=0)
		break;
	}
	printf("Array after sorting ");
	for(i=0; i<n; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}

