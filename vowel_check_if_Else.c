#include <stdio.h>
int main()
{
 char ch;
 printf("enter a character to check if it is a vowel");
 scanf("%c",&ch);

 if (ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
 {
   printf("it is a  vowel");
 }

 else
 {
  printf("it is a consonant");
 }
}
