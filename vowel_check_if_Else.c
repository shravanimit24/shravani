#include <stdio.h>
int main()
{
 char ch;
 //accepting input by user
 printf("enter a character to check if it is a vowel");
 scanf("%c",&ch);

 //checking if entered character is an vowel or not
 if (ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
 {
   printf("it is a  vowel");
 }

 else
 {
  printf("it is a consonant");
 }
}
