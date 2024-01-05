#include <stdio.h>
#include <math.h>

int fibonacci_golden_ratio(int n) {
    double golden_ratio = (1 + sqrt(5)) / 2;
    return round(pow(golden_ratio, n) / sqrt(5));
}

int main() {
    int n = 9;
    printf("Fibonacci(%d) using golden ratio formula: %d\n", n, fibonacci_golden_ratio(n));
    return 0;
}
