#include <stdio.h>
#include <math.h>

int fibonacci_binet(int n) {
    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2;
    double psi = (1 - sqrt5) / 2;

    return (int) ((pow(phi, n) - pow(psi, n)) / sqrt5);
}

int main() {
    int n = 9;
    printf("Fibonacci(%d) using Binet's formula: %d\n", n, fibonacci_binet(n));
    return 0;
}
