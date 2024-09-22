// code to find max of 2 numbers using if else

#include<stdio.h>

int main()
{
  int a,b;
  printf("enter 2 numbers");
  scanf("%d %d",&a,&b);

  if (a>b)
  {
    printf("%d is greater than %d",a,b);

  }
  else

  {
    printf("%d is greater than %d",b,a);
  }
}
