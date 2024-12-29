#include<stdio.h>


int main() {
    int a = 3;
    char press;

    /** Pre-increment
     * a = a + 1; // 4
     * printf("%d\n", a); // 4
    */
    printf("%d\n", ++a);

    /** Post-increment
     * printf("%d\n", a); // 4
     * a = a + 1; // 5
    */
    printf("%d\n", a++);


    scanf("%c", &press);
    
    printf("%d\n", a); // 5
}