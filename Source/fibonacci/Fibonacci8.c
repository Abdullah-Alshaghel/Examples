#include <stdio.h>

int fibonacci_recursive_optimized(int n, int a, int b) {
    if (n == 0)
        return a;
    if (n == 1)
        return b;

    return fibonacci_recursive_optimized(n - 1, b, a + b);
}

int main() {
    int n = 9;
    printf("Fibonacci(%d) using recursive optimized approach: %d\n", n, fibonacci_recursive_optimized(n, 0, 1));
    return 0;
}
