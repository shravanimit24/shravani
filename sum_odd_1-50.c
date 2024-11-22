#include <stdio.h>

int main()
    {
    int sum = 0;

    // checking numbers from 1 to 50

    for (int i = 1; i <= 50; i++) {
        // Check if the number is odd
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    // Printing the sum of odd numbers

    printf("The sum of odd numbers from 1 to 50 is %d.\n", sum);

    return 0;
}
