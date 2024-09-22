#include<stdio.h>
int main()
{
  int i=1,pro=1,n;
     printf("enter limit ");
   scanf("%d ",&n );
 while(i<=n)
 {
  pro=pro*i;
  i=i+1;
}
printf("%d is fact ",pro);
}
