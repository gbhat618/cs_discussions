#include <stdio.h> // print


void say_bye() {
	printf("bye..\n");
	printf("bye2..\n");
}

void say_hi() {
	printf("hi..\n");
	say_bye();
	printf("hi2..\n");
}

int main() {
	printf("entering main...\n");
	say_hi();
	printf("inside main\n");
}

/**
 * entering main...
 * hi
 * bye
 * bye2
 * hi2
 * inside main
 */
