#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[])
{
	int i,j,a,b;
	if(argc!=3)
	{
		printf("Wromg argument");
		exit(0);
	}
	for(i=1;i<argc; i++)
	{
		for(j=0; argv[i][j]!='\0'; j++)
		{
			if((argv[i][j]<48) || (argv[i][j]>57))
			{
				printf("Wromg argument");
				exit(0);
			}
		}
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	printf("\t%d\n",a+b);
	return 0;
}
