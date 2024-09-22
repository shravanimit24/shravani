// code to find if no. is positive and even

#include<stdio.h>

int main()
{
  int a ;
  printf("enter a number");
  scanf("%d",&a);

  if (a>0)
  {
    if(a%2==0)
    {
     printf("%d is positive and even",a);
    }

    else
    {
     printf("%d is positive and odd",a);
    }
  }
  else

  {
    printf(" %d is negetive",a);
  }
}
