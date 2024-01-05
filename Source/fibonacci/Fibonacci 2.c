#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
    int n = 9;
    printf("Fibonacci(%d) using recursive approach: %d\n", n, fibonacci_recursive(n));
    return 0;
}
