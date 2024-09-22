#include <stdio.h>
int main()
{

int a;

printf("Enter the value of a");
scanf("%d",&a);

if
      (a>0){

        if(a%2==0)
        {
          printf("%d is positive and even",a);
        }
        else
        {
          printf("%d is positive and odd number",a);
        }
          }
        else
        {
        printf("%d is negative");
       }
}
