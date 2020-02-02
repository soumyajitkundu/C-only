#include<stdio.h>
#include<stdlib.h>
void merge(int *a, int low, int mid, int high)
{
	int i,j,k,h,*b,n;
	b=(int *)malloc(n*sizeof(int));
	h=low;
	i=low;
	j=mid+1;
	while((h<=mid)&&(j<=high))
	{
		if(a[h]<a[j])
		{
			b[i]=a[h];
			h++;
		}
		else
		{
			b[i]=a[j];
			j++;
		}
		i=i+1;
	}
	if(h>mid)
		for(k=j;k<=high;k++)
		{
			b[i]=a[k];
			i=i+1;
		}
	else
		for(k=h;k<=mid;k++)
		{
			b[i]=a[k];
			i=i+1;
		}
		for(k=low;k<=high;k++)
		{
			a[k]=b[k];
		}
}
void ms(int *a,int low,int high)
{
	int mid;
	if(high>low)
	{
		mid=(low+high)/2;
		ms(a,low,mid);
		ms(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main()
{
	int *a,i,n;
	printf("\nEnter the number of elements");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nenter elements in the array\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	printf("before sorting elements are\n");
	for(i=0;i<n;i++)
	printf("%4d",*(a+i));
	ms(a,0,n-1);
	printf("\nafter sorting elements are\n");
	for(i=0;i<n;i++)
	printf("%4d",*(a+i));
}






























	
