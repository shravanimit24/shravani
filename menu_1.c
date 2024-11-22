#include <stdio.h>
#include <math.h>

int main() {
    int choice, num;

    while (1) {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Factorial of a number\n");
        printf("2. Sum of digits of a number\n");
        printf("3. Reverse of a number\n");
        printf("4. Check whether a number is Armstrong or not\n");
        printf("5. Check whether a number is prime or not\n");
        printf("6. Check whether a number is perfect or not\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) break;  // Exit the program

        printf("Enter a number: ");
        scanf("%d", &num);

        switch (choice) {
            case 1: {
                int factorial = 1;
                for (int i = 1; i <= num; i++)
                {
                    factorial *= i;
                }
                printf("Factorial of %d is %d\n", num, factorial);
                break;
            }
            case 2: {
                int sum = 0, temp = num;
                while (temp != 0)
                {
                    sum += temp % 10;
                    temp /= 10;
                }
                printf("Sum of digits of %d is %d\n", num, sum);
                break;
                    }
            case 3: {
                int reverse = 0, temp = num;
                while (temp != 0) {
                    reverse = reverse * 10 + temp % 10;
                    temp /= 10;
                }
                printf("Reverse of %d is %d\n", num, reverse);
                break;
            }
            case 4: {
                int sum = 0, temp = num;
                int num_of_digits = log10(num) + 1;
                while (temp != 0) {
                    int digit = temp % 10;
                    sum += pow(digit, num_of_digits);
                    temp /= 10;
                }
                if (sum == num)
                    printf("%d is an Armstrong number.\n", num);
                else
                    printf("%d is not an Armstrong number.\n", num);
                break;
            }
            case 5: {
                int is_prime = 1;
                if (num <= 1) {
                    is_prime = 0;
                } else {
                    for (int i = 2; i <= sqrt(num); i++)
                    {
                        if (num % i == 0)
                        {
                            is_prime = 0;
                            break;
                        }
                    }
                }
                if (is_prime)
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;
            }
            case 6: {
                int sum = 0;
                for (int i = 1; i <= num / 2; i++)
                {
                    if (num % i == 0) sum += i;
                }
                if (sum == num)
                    printf("%d is a perfect number.\n", num);
                else
                    printf("%d is not a perfect number.\n", num);
                break;
            }
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
