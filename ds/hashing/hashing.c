#include<stdio.h>

#define DIVIDER 13

// insert
/**
 * key = 39
 * index = 39 % 13 = 0
 * 
 * // rehashing
 * newIndex =(0 + 20 % 71) = 20
 * 
 * // compound hashing
 * index = (39 % 13 + 39 / 13) = 3
 * 
 */

int main() {
    int numbers[13] = {26, 40, 119, -1, 251, -1, -1, 7, 21, 100, -1, 50, 51};

    printf("Enter a number to search: \n");
    int key;
    scanf("%d", &key);

    // hash function
    int index = key % DIVIDER;

    if (numbers[index] == key) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }
}