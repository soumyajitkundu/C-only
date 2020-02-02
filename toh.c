#include<stdio.h>
void toh(int n,char s,char d,char t)
{
     if(n>=1)
     {
          toh(n-1,s,t,d);
          printf("Move largest disc from tower %c to tower %c \n",s,d);
          toh(n-1,t,d,s);
     }
}

int main()
{
     int n;
     char s='S',t='T',d='D';
     printf("\n Enter the number of disk: ");
     scanf("%d",&n);
     toh(n,s,d,t);
     return 0;
}
