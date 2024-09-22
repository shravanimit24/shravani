//sum of odd
#include<stdio.h>
int main()
{
 int i=1,sum=0;
 while(i<=10)
 {
  if(i%2!=0)
  {
   sum+=i;
  }

  i=i+1;
 }
    printf("%d \n",sum);
}
