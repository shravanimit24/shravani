#include <stdio.h>

int main() {
    char up_case, low_case;


    printf("Enter an uppercase character: ");
    scanf("%c", &up_case);

    // Convert the uppercase character to lowercase
    low_case = up_case + 32;

    // Print the lowercase character
    printf("The lowercase character is: %c\n", low_case);

    return 0;
}
