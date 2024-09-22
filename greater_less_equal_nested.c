 //to check if number evtered is greater equal or less than other

#include <stdio.h>
int main ()
{
  int a,b;
  printf("enter 2 numbers");
  scanf("%d %d",&a,&b);

  if (a>b)
  {
   printf("%d is greater than %d",a,b);
  }
     else if  (a<b)
    {
      printf("%d is greater than %d",b,a);
    }

     else if  (a=b)
    {
      printf("%d is equal to %d",a,b);
    }
  else
  {}
}

