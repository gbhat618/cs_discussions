#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Before swap a = %d, b = %d\n", a, b);
    // swap
    int temp = b;
    printf("Before A: temp = %d, a = %d, b = %d\n", temp, a, b);
    b = a;
    printf("After A: temp = %d, a = %d, b = %d\n", temp, a, b);
    a = temp;
    printf("After swap a = %d, b = %d\n", a, b);
}