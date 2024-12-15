#include <stdio.h> // for printf()

int main() {
	int a = 0;
	while (a <= 2) {
		printf("hi: %d\n", a);
		a += 1;
	}
	printf("outside loop: %d\n", a);
}
