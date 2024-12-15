#include <stdio.h>
#include <unistd.h> // required for sleep()

int main(int argc, char* argv[]) {
	char* inputLetter = "END";
	if (argc > 1) {
		inputLetter = argv[1];
	}
	printf("This is your job; sleeping for 5 minutes, arg is: %s\n", inputLetter);
	sleep(300);
	printf("Sleeping done, exiting..\n");
}
