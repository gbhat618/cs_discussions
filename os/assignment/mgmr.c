/*
 * 1. Reader user input --> p, r, c, k (use `scanf`)
 * 	1.1. Implement for each user input corresponding action
 * 		p --> print process ids (use `printf`)
 * 		r --> fork `job` process and store the `pid` of the job process. get the `pid` using `getpid()` function
 * 		c --> ask which `pid` to suspend; user will choose 1 `pid`; send signal to the specific pid
 * 2 Store the list of `pid`
 * 	Using array datastructure --> array size 11; 1 for `mgmr` and rest for 10 `job` process
 * 
 *
 *
 * */

#include <stdio.h> // required for printf(), scanf()
#include <stdlib.h> // required for srand(), rand()
#include <time.h> // required for time()
#include <unistd.h> // required for fork(), execl()

// #include `fork(), getpid(), signal handler()`

// My helper functions

/* Currently in this program we only required to generate random number that maps to a Alphabetic Upper Case character.
 * Hence limiting the upper bound for random number to be 26.
 * */
int new_random_letter() {
	srand(time(NULL));
	int randomNumber = rand() % 26;
	/* Converting random number between 0 to 25 to alphabetical equivalent.
 	* In Ascii `A` is equivalent to `65`.
 	* Thus
 	* Example1:
 	*      if randome number = 0
 	*      equivalent character is: 0 + 65 == 65 == `A`
 	* Example2:
 	*      if random number = 10
 	*      equivalent character is: 10 + 65 == 75 == `K`
	*
 	* */
	char randomLetter = randomNumber + 65;
	// printf("Starting new job: randNumber = %d, asciiValue = %d, letter = %c \n", randomNumber, randomNumber + 65, randomLetter);
	return randomLetter;
}


void print_help() {
/*
 *
 *  Command : Action
 	c : Continue a suspended job
 	h : Print this help message
 	k : Kill a suspended job
 	p : Print the process table
 	q : Quit
 	r : Run a new job
 *
 *
 */
	printf("Command : Action\n");
	printf("r : create a new child job\n");
	printf("h : Print this help message\n");
}

void start_new_job() {
	char randomLetter = new_random_letter();
	char randomLetterString[2] = {randomLetter, '\0'};

	printf("Starting new job: %c\n", randomLetter);
	
	// fork a child
	pid_t pid = fork();
	if (pid > 0) {
		printf("This is parent; forked child's pid is: %d\n", pid);
	} else if (pid == 0) {
		printf("I am child process: PID %d\n", getpid());
		// replacing the child's program with job executable
		execl("./job", "my_forked_job", randomLetterString, NULL);
	} else { // this is a negative number
		printf("Forking failed, no child created\n");
	}
}

int main() {
	char input;
	// printf("You have typed: `%c`\n", input);
	for(;;)
	{
		if (input != 'h') {
			print_help();
		}
		input = getchar();
		getchar(); // to consume the newline character (i.e. Enter key)
		switch(input) {
			case 'h':
				print_help();
				break;
			case 'r':
				start_new_job();
				break;
			default:
				printf("Given input `%c` is not yet supported\n", input);
		}
		printf("\n Enter choice commad:\n");
	}
	return 0;
}
