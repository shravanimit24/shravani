// swapping values using 2 variables

#include<stdio.h>
int main()

{
  int a,b;

    printf("enter value one");
    scanf("%d",&a);


    printf("\n genter value two");
    scanf("%d",&b);

     printf("\n values before swapping are %d %d", a,b);


     a=a+b;
     b=a-b;
     a=a-b;


     printf("\n values after swapping are %d %d", a,b);


}
