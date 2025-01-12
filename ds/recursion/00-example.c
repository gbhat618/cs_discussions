#include<stdio.h>


void func2(int i) {
    printf("func2 called with i=%d\n", i);
}

void func1(int i) {
    printf("func1 called with i=%d\n", i);
    func2(i + 1);
    printf("func1 ends with i=%d\n", i);

}

int main() {
    func1(1);
}

/** Output:
 * func1 called with i=1
 * func2 called with i=2
 * func1 ends with i=1
 */