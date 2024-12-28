/*
1. input numbers
    1a. array based stack:
        fixed number of storage / size.
2. operations
    a. push
        top of stack add element.
        1, 2, 10, 15
    b. pop
        1, 2, 10
        1, 2
        1
        -
    LIFO --> Last In First Out

    c. peek
    d. is_empty()
    e. is_full()
*/

#include <stdio.h>
#define SIZE 5

struct stack
{
 int top;
 int data[SIZE];
};
typedef struct stack STACK;

void push(STACK* s, int number) {

    // top = SIZE - 1;
    // top = -1 --> empty
    // top = 0 --> one element
    // top = 1 --> two element
    
    if (s->top == (SIZE - 1)) { // top=4; 5 - 1--> (SIZE - 1)
        printf("cannot insert, overflow\n");
        return;
    }

    s->top ++;
    s->data[s->top] = number;
    // printf("inserted %d\n", number);
}

int pop(STACK* s) {

    if (s->top == -1) {
        printf("underflow\n");
        return -999;
    }

    int v = s->data[s->top];
    s->top --;
    return v;
    // return s->data[(s->top)--];
}

void peek(STACK* s, int idx) {
    if (s->top == -1) {
        printf("empty stack, no element at index: %d\n", idx);
        return;
    }

    if (s->top < idx) {
        printf("stack only has elment up to index: %d\n", s->top);
        return;
    }

    printf("data at peek: %d\n", s->data[idx]);
}

void print(STACK* s) {
    printf("stack------\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->data[i]);
    }
    printf("----------\n\n\n");
}

int main() {
    STACK s;
    s.top = -1;
    print(&s);
    pop(&s);
    push(&s, 10);
    print(&s);
    push(&s, 3);
    print(&s);
    push(&s, 7);
    print(&s);
    push(&s, 9);
    print(&s);
    push(&s, 11);
    print(&s);
    push(&s, 20); // overflow
    peek(&s, 4); // here is peek
    print(&s);
    pop(&s);
    print(&s);
    pop(&s);
    print(&s);
    pop(&s);
    print(&s);
    /*
    stack------
    3
    10
    ----------
    */
    push(&s, 30);
    print(&s);
    pop(&s);
    print(&s);
}