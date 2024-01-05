#include <stdio.h>

int fibonacci_dynamic(int n) {
    if (n <= 1)
        return n;

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib[n];
}

int main() {
    int n = 9;
    printf("Fibonacci(%d) using dynamic programming: %d\n", n, fibonacci_dynamic(n));
    return 0;
}
