#include <stdio.h>
#include <conio.h>

struct stud
{
    int math;
    int chem;
    int bio;
} s[3];

int main()
{
    int i;
    for (i = 0; i<=2; i++)
    {
    printf("enter marks in math for student ",s[i]);
    scanf("%d",&s[i].math);
    printf("enter marks in chem");
    scanf("%d",&s[i].chem);
    printf("enter marks in bio");
    scanf("%d",&s[i].bio);




 }
for (int i=0;i<=2;i++)
 {
  printf("marks in math are %d \n" ,s[i].math);
  printf("marks in chem are %d \n" ,s[i].chem);
  printf("marks in bio are %d \n" ,s[i].bio);


 }
    return 0;
}


