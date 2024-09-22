#include <stdio.h>
int main()

{
  char ch;
  printf("enter a character to check if it is a vowel");
  scanf("%c",&ch);

  if (ch>='A' && ch<= 'Z')
  {
   printf("capital case");
  }

  else if ( ch>='a' && ch<='z')
  {
   printf("small case");
  }
  else
{


  if (ch == '0' && ch== '9')
  {
      printf("invalid input");
  }
  else
    {
  switch (ch)
  {
   case 'a':
   case 'A':
   printf("%c is a vowel",ch);
   break;

   case 'e':
   case 'E':
   printf("%c is a vowel",ch);
   break;

   case 'i':
   case 'I':
   printf("%c is a vowel",ch);
   break;

   case 'o':
   case 'O':
   printf("%c is a vowel",ch);
   break;

   case 'u':
   case 'U':
   printf("%c is a vowel",ch);
   break;

   default :
   printf("it is a consonant");

  }
    }}}

