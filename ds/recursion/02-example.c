#include <stdio.h>


void func1(int i) {
    printf("func1 called with, i=%d\n", i);
    if (i < 50) {
        func1(i + 1);
    }
    printf("func1 ends with, i=%d\n", i);
}


int main() {
    func1(1);
}


/** Output:
 * func1 called with, i=1
 * func1 called with, i=2
 * func1 called with, i=3
 * func1 ends with, i=3
 * func1 ends with, i=2
 * func1 ends with, i=1
*/