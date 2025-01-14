/**
 * Store 100 numbers given by the user.
 * Tell if any given number exists or not.
 * 
 * 50, 75, 1000, 11, .... 51
 * 
 * is 99 exists?
 */

#include<stdio.h>


int main() {
    int numbers[9] = {7, 21, 26, 40, 50, 51, 100, 119, 251};

    printf("Enter a number to search: \n");
    int x;
    scanf("%d", &x);

    int found = 0;
    for (int i = 0; i < 10; i++) {
        printf("loop\n");
        
        if (numbers[i] == x) {
            printf("Found\n");
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Not found\n");
    }
}