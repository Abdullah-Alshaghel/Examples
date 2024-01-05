#include <stdio.h>

int fibonacci_iterative(int n) {
    int a = 0, b = 1, temp;

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return (n > 0) ? b : a;
}

int main() {
    int n = 9;
    printf("Fibonacci(%d) using iterative approach: %d\n", n, fibonacci_iterative(n));
    return 0;
}
