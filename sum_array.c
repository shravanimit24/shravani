#include<stdio.h>
int main()
{
  int a[5],i,sum=0;
  printf("enter the array elements");
  for (i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
    sum+=a[i];

  }
  printf("sx1the sum of array elements is %d",sum);
  return 0;
}
