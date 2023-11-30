#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("The sum of squares from 1 to %d is %d.\n", n, sum);

    return 0;
}
