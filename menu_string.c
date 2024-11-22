#include <stdio.h>

int main() {
    int choice;
    char str1[20], str2[20];
    int i, j;

    while (1) {
        // Display the choices

        printf("\nMenu:\n");
        printf("1. To find length of a string\n");
        printf("2. To copy contents of one string to another\n");
        printf("3. To compare two strings\n");
        printf("4. To concatenate two strings\n");
        printf("5. exit the program \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            {
                printf("Enter the string: ");
                scanf("%s", str1);
                int length = 0;
                while (str1[length] != '\0')
                {
                    length++;
                }
                printf("Length of the string is %d\n", length);
                break;
            }
            case 2:
            {
                printf("Enter the source string: ");
                scanf("%s", str1);
                i = 0;
                while (str1[i] != '\0')
                {
                    str2[i] = str1[i];
                    i++;
                }
                str2[i] = '\0'; // Null-terminate the destination string
                printf("Copied string is: %s\n", str2);
                break;
            }
            case 3:
            {
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                i = 0;
                while (str1[i] != '\0' && str2[i] != '\0')
                {
                    if (str1[i] != str2[i]) {
                        break;
                    }
                    i++;
                }
                if (str1[i] == str2[i])
                {
                    printf("The strings are equal.\n");
                } else if (str1[i] < str2[i]) {
                    printf("The first string is less than the second string.\n");
                } else {
                    printf("The first string is greater than the second string.\n");
                }
                break;
            }
            case 4:
            {
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                i = 0;
                while (str1[i] != '\0')
                {
                    i++;
                }
                j = 0;
                while (str2[j] != '\0')
                {
                    str1[i] = str2[j];
                    i++;
                    j++;
                }
                str1[i] = '\0'; // Null-terminate the concatenated string
                printf("Concatenated string is: %s\n", str1);
                break;
            }
            case 5:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
