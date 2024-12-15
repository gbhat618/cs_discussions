/* Multiplication table from 2 to 20
 * */
#include <stdio.h>

int main() {
	int i = 1;
	printf("Starting...\n");
	// loop --> repeatedly execute same code
	// 	--> mention loop starting point
	// 	--> mention loop ending condition
	// 	--> ensure loop coditional variable is modified	
	for (int i = 2; i <= 20; i = i + 1) {
		for (int j = 1; j <= 10; j++) {
			printf("%d ", i * j);
		}
		printf("\n");
	}
	printf("Ending...\n");
}
