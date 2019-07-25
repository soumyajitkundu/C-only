#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[])
{
	int i,j,a,b;
	if(argc!=4)
	{
		printf("Wrong argument");
		exit(0);
	}
	for(i=1;i<argc-1; i++)
	{
		for(j=0; argv[i][j]!='\0'; j++)
		{
			if((argv[i][j]<48) || (argv[i][j]>57))
			{
				printf("Wrong argument");
				exit(0);
			}
		}
	}
	if((argv[3][0]!='+') && (argv[3][0]!='-') && (argv[3][0]!='x') && (argv[3][0]!='/'))
	{
		printf("Wrong argument ");
		exit(0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);

	if(argv[3][0]=='+')
		printf("\t%d\n",a+b);
	if(argv[3][0]=='-')
		printf("\t%d\n",a-b);
	if(argv[3][0]=='x')
		printf("\t%d\n",a*b);
	if(argv[3][0]=='/')
	{
		if(b==0)
			printf("\n Division by 0 is not possible");
		else
			printf("\t%d\n", a/b);
	}
	return 0;
}
