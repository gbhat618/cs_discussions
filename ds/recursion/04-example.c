/**
 * write a program recursively to add the first N natual numbers
 * 
 * Example:
 * N = 5
 * output: 15 (1 + 2 + 3 + 4 + 5)
 * 
 * N = 10
 * output: 55 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10)
 */

#include <stdio.h>

int add(int n) {
    if (n > 0) {
        return n + add(n - 1);
    }
}

int main() {
    int N;
    int sum;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    sum = add(N);
    printf("Sum of first %d natural numbers is %d\n", N, sum);
    return 0;
}