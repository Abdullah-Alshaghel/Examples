#include <stdio.h>

// Function to calculate Fibonacci using recursive approach with memoization
int fibonacci_recursive_memo(int n, int memo[]) {
    if (n <= 1)
        return n;

    // Check if the value is already calculated
    if (memo[n] != -1)
        return memo[n];

    // Calculate and store the value in the memo array
    memo[n] = fibonacci_recursive_memo(n - 1, memo) + fibonacci_recursive_memo(n - 2, memo);

    return memo[n];
}

int main() {
    int n = 9;

    // Initialize memoization array with -1
    int memo[10];
    for (int i = 0; i < 10; i++)
        memo[i] = -1;

    // Calculate Fibonacci and print the result
    printf("Fibonacci(%d) using recursive approach with memoization: %d\n", n, fibonacci_recursive_memo(n, memo));

    return 0;
}
