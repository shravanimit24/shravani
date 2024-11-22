#include <stdio.h>
#include <conio.h>


struct student
{
 int roll;
 char sname[20];

}
s[3];
void display (struct student obj)
{
 printf("student roll number is %d \n",obj.roll);
  printf("student name  is %s \n",obj.sname);
}
int main()
{
    for (int i=0;i<3;i++)
    {
 printf("enter roll number");
 scanf("%d",&s[i].roll);
 printf("enter name");
 scanf("%s",s[i].sname);


    }

 for (int i=0;i<3;i++)
 {
  display (s[i]);
 }
 return 0;

}
