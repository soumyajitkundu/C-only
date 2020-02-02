#include<stdio.h>
int main()
{
	int a[20][20],b[10][3],i,j,r,c,total=0,elm,count;
	printf("Enter the number of rows ");
	scanf("%d",&i);
	printf("Enter the number of columns ");
	scanf("%d",&j);
	printf("Enter the number ");
	for(r=0; r<i; r++)
	{
		for(c=0; c<j; c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	
	for(r=0; r<i; r++)
	{
		for(c=0; c<j; c++)
		{
			if(a[r][c]!=0)
			{
				total++;
			}
		}
	}
	elm=r*c;
	if(total>3)
		printf("The Matrix entered is not Sparse Matrix");
		//printf("\nTotal number of Zero Elements %d",total);
	else
		{
			printf("\n IT IS A SPARSE MATRIX");
			printf("\nTotal number of elements %d",elm);
			count=elm-total;
			printf("\nTotal number of non zero elements %d",total);
			b[0][3]=3;
			b[0][1]=3;
			b[0][2]=total;
			int k = 0;
			for(r=0; r<3; r++)
			{
				for(c=0;c<3;c++)
				{
					if(a[r][c]!=0)
						{
						k++;
						b[k][0]=r;
						b[k][1]=c;
						b[k][2]=a[r][c];
					}
				}
			}
			for(r=0; r<total+1; r++)
			{
				for(c=0; c<3; c++)
				{
					printf("%d",b[r][c]);
				}
				printf("\n");
			}
	}	
	return 0;
}
