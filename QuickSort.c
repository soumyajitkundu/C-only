#include<stdio.h>
#include<stdlib.h>

int partition(int *a,int low,int high)
{
     int pivot,i,j,temp;
     pivot=a[low];
     j=low;
     for(i=low+1;i<=high;i++)
     {
          if(*(a+i)<pivot)
          {
               j++;
               temp=*(a+i);
               *(a+i)=*(a+j);
               *(a+j)=temp;
          }
     }
     temp=*(a+low);
     *(a+low)=*(a+j);
     *(a+j)=temp;
     return j;
}

void qs(int *a,int low,int high)
{
     int j;
     if(high>low)
     {
          j=partition(a,low,high);
          qs(a,low,j-1);
          qs(a,j+1,high);
     }
}

int main()
{
     int i,*a,n;
     printf("Enter the number of element :\t");
     scanf("%d",&n);
     a=(int *)malloc(n*sizeof(int));
     printf("Enter the numbers in the array :\t");
     for(i=0;i<n;i++)
          scanf("%d",a+i);
     printf("\n Before the sorting the elements are : \n");
     for(i=0;i<n;i++)
          printf("%d \t",*(a+i));
     qs(a,0,n-1);
     printf("\n After the sorting the elements are : \n");
     for(i=0;i<n;i++)
          printf("%d \t",*(a+i));
     return 0;
}
