#include <stdio.h>
#include <math.h>

int main() {
    int n, original, count = 0, sum = 0, singlet;
    printf("Enter a positive integer number: ");
    scanf("%d", &n);
    original = n;

    // Counting the number of digits in the input number
    while (n > 0) {
        count++;
        n /= 10;
    }

    // Re-initialize n to the original number
    n = original;

    // Extracting each digit and calculating the sum of its powers
    while (n > 0) {
        singlet = n % 10;
        sum += pow(singlet, count);
        n /= 10;
    }

    // Checking if the number is Armstrong
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
