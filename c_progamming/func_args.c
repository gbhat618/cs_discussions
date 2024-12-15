#include <stdio.h>


int sum(int m, int n) {
	int c = m + n;
	// printf("[sum] total: %d, m: %d, n: %d\n", c, m, n);
	return c;
}

int main() {
	// int a = 10;
	// int b = 20;
	
	int val1 = 0;
	int val2 = 0;
	int total = 0;

	printf("Enter val1: \t");
	scanf("%d", &val1);
	printf("\nEnter val2: \t");
	scanf("%d", &val2);

	// printf("total value before sum: %d\n", total);
	total = sum(val1, val2);
	printf("\n[%d] + [%d] = [%d]\n", val1, val2, total);
}
