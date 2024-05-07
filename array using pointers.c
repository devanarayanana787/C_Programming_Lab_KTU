#include <stdio.h>
#include <stdlib.h>

void add(int *x, int *y) {
    int sum = *x + *y;
    printf("The sum is: %d\n", sum);
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("The swapped numbers are: %d, %d\n", *x, *y);
}

int main() {
    int ch, a, b;
    while (1) {
        printf("1. Add two numbers\n");
        printf("2. Swap two numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &a);
                printf("Enter the second number: ");
                scanf("%d", &b);
                add(&a, &b);
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%d", &a);
                printf("Enter the second number: ");
                scanf("%d", &b);
                swap(&a, &b);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
