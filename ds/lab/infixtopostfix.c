#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

#define SIZE 20

struct stack
{
    int top;
    char data[SIZE];
};

typedef struct stack STACK;

// a++
// ++a
// a--
// --a

void push(STACK *s, char item)
{
    s->data[++(s->top)] = item;
    /** push --> pre increment
     * equivalent to
     * s->top = s->top + 1;
     * s->data[s->top] = item;
     */
}

char pop(STACK *s)
{
    return s->data[(s->top)--];
    /** pop --> post decrement
     *  equivalent to
     * char temp = s->data[s->top];
     * s->top = s->top - 1;
     * return temp;
     */
}

int preced(char symbol)
{
    switch (symbol)
    {
    case '^':
        return 5;
    case '*':
    case '/':
        return 3;
    case '+':
    case '-':
        return 1;
    }
}

void infixtopostfix(STACK *s, char infix[SIZE]) // 2+3*4
{
    int i, j = 0;
    char postfix[SIZE], temp, symbol; // 234*+
    for (i = 0; infix[i] != '\0'; i++)
    {
        symbol = infix[i];
        if (isalnum(symbol))
            postfix[j++] = symbol;
        else
        {
            switch (symbol)
            {
            case '(': // (2 * 3) + (4  / 5)
                push(s, symbol);
                break;
            case ')':
                temp = pop(s);
                while (temp != '(')
                {
                    postfix[j++] = temp;
                    temp = pop(s);
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                if (s->top == -1 || s->data[s->top] == '(')
                    push(s, symbol);
                else
                {
                    while (preced(s->data[s->top]) >=
                               preced(symbol) &&
                           s->top != -1 && s->data[s->top] != '(')
                    {
                        postfix[j++] = pop(s);
                    }
                    push(s, symbol);
                }
                break;
            default:
                printf("\n Invalid!!!!!");
                exit(0);
            }
        }
    }
    while (s->top != -1)
        postfix[j++] = pop(s);
    postfix[j] = '\0';
    printf("\n The postfix expression is %s\n", postfix);
}

int main()
{
    STACK s;
    s.top = -1;
    char infix[SIZE];
    printf("\n Read Infix expression\n");
    scanf("%s", infix);
    infixtopostfix(&s, infix);
    return 0;
}

/*

2 + 3 * 4

BODMAS

POSTFIX
===========
Step1: 2 3 4 + *

(2) + (3 * 4)
(2) + (34*)
(234*+)
212+
14


234*+


Prefix
===========
op1
op2
op

op1 op op2 op op3

2   +   3   *   4

Sub expression
=================
op2 op op3

op op2 op3

3   *   4

* 3 4

Second sub expression
=================
op1  op    op2
2    +     * 3 4

+ 2 * 3 4


Why Stack?

2+3*4

for (int i = 0; i < 5; i++) {
    printf("%c", infix[i]);
    
    234*+

    infix[0] -> 2
    infix[2] -> 3
    infix[4] -> 4
    infix[1] -> +
    infix[3] -> *
}

*/