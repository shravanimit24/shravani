#include<stdio.h>
int main()
{
 int num;
 printf("enter a number");
 scanf("%d",&num);

 (num>0)?(num%2==0)?printf("%d",num*num) : printf("%d",num*num*num) : printf("%d",num) ;


 return 0;

}
