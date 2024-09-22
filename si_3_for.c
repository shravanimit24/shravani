// 3 different s.i by using for

#include<stdio.h>
int main()
{
  int i,p, n;
  float r,si;

  for (i=1;i<=3;i++)
  {
    printf("enter p, n and r");
    scanf("%d %d %f",&p ,&n ,&r);
    si=p*n*r/100;
    printf("value of si is %f",si);
  }

}
