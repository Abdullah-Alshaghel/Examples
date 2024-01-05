#include <stdio.h>

int memo[100];

int fibonacci_recursive_memo(int n) {
    if (n <= 1)
        return n;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fibonacci_recursive_memo(n - 1) + fibonacci_recursive_memo(n - 2);
    return memo[n];
}

int main() {
    int n = 9;
    for (int i = 0; i < 100; i++)
        memo[i] = -1;

    printf("Fibonacci(%d) using recursive with memoization: %d\n", n, fibonacci_recursive_memo(n));
    return 0;
}
