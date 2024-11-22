#include <stdio.h>
#include <conio.h>


struct stud
{
 int roll;
 char sname[20];

}s1;
int main()
{

 printf("enter roll number");
    scanf("%d",&s1.roll);
 printf("enter name");
    scanf("%s",s1.sname);


 printf("roll number is %d" ,s1.roll);
  printf(" name is %s" ,s1.sname);

}
