#include <stdio.h>

int main() {
    int num1, num2, min;

    // Accepting two numbers from the user

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using the conditional operator
    min = (num1 < num2) ? num1 : num2;

    printf("The number lesser between is %d and %d is %d.\n", num1, num2, min);

    return 0;
}
