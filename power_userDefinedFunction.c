#include<stdio.h>

int power()
{
 int x,y;
 int res;
 printf("enter the values of base and power");
 scanf("%d %d",&x,&y);
 for (int i=1;i<=y;i++)
 {
  res=res*x;
  printf("the result is %d",res);
 }
 return res;
}
 int main()
 {
 int n,p,t=1;
 printf("enter the values of base and power");
 scanf("%d %d",&n,&p);
for (int i=1;i<=p;i++)
 {
  t=t*n;
  printf("the result is %d",t);
 }
 return 0;
 }
