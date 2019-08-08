#include<stdio.h>
int linear_search(int a[100],int n,int item)
{
	int f=0,i;
	{
		for(i=0; i<n; i++)
		{
			if(a[i]==item)
			{
				printf("Location is %d\n", i+1);
				f=1;
				break;
			}
		}
		if (f==0)
		printf("Element not found ");
	}
}

int main()
{
	int a[10], n, item,i;
	printf("Enter the length of array ");
	scanf("%d",&n);
	printf("Enter the elements of the array ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched ");
	scanf("%d",&item);
	linear_search(a,n,item);
	return 0;
}
	
