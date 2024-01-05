#include <stdio.h>

int fib_memoization(int n, int memo[]) {
    if (n <= 1)
        return n;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fib_memoization(n - 1, memo) + fib_memoization(n - 2, memo);
    return memo[n];
}

int fibonacci_memo(int n) {
    int memo[n + 1];
    for (int i = 0; i <= n; i++)
        memo[i] = -1;

    return fib_memoization(n, memo);
}

int main() {
    int n = 9;
    printf("Fibonacci(%d) using memoization: %d\n", n, fibonacci_memo(n));
    return 0;
}
