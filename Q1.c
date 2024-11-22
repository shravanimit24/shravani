#include <stdio.h>

int main() {
    int int_value;
    float float_Value;
    double double_value;
    char char_Value;
    char string[20];

    // Accepting values from the user

    printf("Enter an integer: ");
    scanf("%d", &int_value);

    printf("Enter a float: ");
    scanf("%f", &float_Value);

    printf("Enter a double: ");
    scanf("%lf", &double_value);

    printf("Enter a character: ");
    scanf(" %c", &char_Value);



    // Displaying the values



    printf("Integer: %d\n", int_value);
    printf("Float: %.2f\n", float_Value);
    printf("Double: %.2lf\n", double_value);
    printf("Character: %c\n", char_Value);


    return 0;
}
