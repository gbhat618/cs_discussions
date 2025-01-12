#include <stdio.h>


void func1(int i) {
    printf("func1\n");

    if (i == 3) {
        return;
    }

    func1(i + 1);
}

int main() {
    func1(1);
}

/**
 * 
 * main -> func1(1)
 *          --> func1( i + 1 => 1 + 1 => 2) ==> func1(2)
 *                                                --> func1( 2 + 1 ==> 3) => func1(3)
 *                                                                     --> func1(3 + 1 ==> 4) => func1(4)
 */