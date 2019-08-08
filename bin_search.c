#include<stdio.h>
int binary_search(int a[],int low, int high, int item)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(item == a[mid])
		return mid;
		else if(item<a[mid])
		high = mid -1;
		else
		low=mid+1;
	}
	return (-1);
}

int main()
{
	int a[10], low,high, item,p,i;
	printf("Enter the lower bound of array ");
	scanf("%d",&low);
	printf("Enter the higher bound of array ");
	scanf("%d",&high);
	printf("Enter the elements of the array ");
	for(i=low; i<high; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched ");
	scanf("%d",&item);
	p=binary_search(a,low,high,item);
	if(p!=-1)
	printf("Item is found at location %d", p);
	else
	printf("Item not found"); 
	return 0;
}
	
