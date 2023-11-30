#include <stdio.h>

void generateFibonacci(int n) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Fibonacci sequence up to %d terms:\n", n);
    printf("%d, %d", firstTerm, secondTerm);

    for (int i = 2; i < n; i++) {
        nextTerm = firstTerm + secondTerm;
        printf(", %d", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive number of terms.\n");
        return 1; // Exit with an error code
    }

    generateFibonacci(terms);

    return 0;
}
