#include<stdio.h>
int main()
{
 float area , radius,i=1;

 while (i<=3)
 {
  printf("enter the radius of the circles");
  scanf("%f",&radius);

      area=3.14 *(radius*radius);
      printf("area of the circle is %f \n",area);
      i=i+1;
 }
}
