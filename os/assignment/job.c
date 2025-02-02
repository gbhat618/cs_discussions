#include <stdio.h>
#include <unistd.h> // required for sleep()

int main(int argc, char* argv[]) {
	char* inputLetter = "END";
	if (argc > 1) {
		inputLetter = argv[1];
	}
	int pid = getpid();
	printf("PID: %d, This is your job; sleeping for 10s, arg is: %s\n", pid, inputLetter);
	sleep(10);
	printf("PID: %d, Sleeping done, exiting..\n", pid);
	return 0;
}
