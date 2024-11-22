#include <stdio.h>

int main() {
    char ch;

    // Accepting a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Printing the character and its ASCII value
    printf("The ASCII value of '%c' is %d.\n",ch);

    return 0;
}
