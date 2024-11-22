#include <stdio.h>
long power(int base, int exponent) {
    long result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    long result = power(base, exponent);
    printf("%d to the power of %d is %ld\n", base, exponent, result);

    return 0;
}
