#include <stdio.h>


void func2() {
    int a = 10;
    int b = 35;
    printf("func2; a=%d,b=%d\n", a, b);
}

void func1() {
    int a = 25;
    int b = 45;
    printf("func1; a=%d,b=%d\n", a, b);
}

int main() {
    int a = 65;
    int b = 75;
    printf("main\n");
    func1();
    func2();
    printf("main end\n");
    printf("a=%d,b=%d\n", a, b);
}

/*
output:
-----------
main
func1; a=25,b=45
func2; a=10,b=35
main end

*/