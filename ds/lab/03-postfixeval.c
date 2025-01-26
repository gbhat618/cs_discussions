#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define SIZE 20

struct stack
{
    int top;
    float data[SIZE];
};
typedef struct stack STACK;


void push(STACK *s, float item)
{
    s->data[++(s->top)] = item;
}


float pop(STACK *s)
{
    return s->data[(s->top)--];
}


float operate(float op1, float op2, char symbol)
{
    switch (symbol)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    case '^':
        return pow(op1, op2);
    }
}


float eval(STACK *s, char postfix[SIZE]) // 2 3 4 * +
{
    int i;
    char symbol;
    float res, op1, op2;
    for (i = 0; i < strlen(postfix); i++)
    {
        symbol = postfix[i];
        if (isdigit(symbol))
            push(s, symbol - '0'); // 2, 3, 4
        else
        {
            op1 = pop(s); // 4 (stack: 2, 3)
                          // 12 (stack: 2)
            op2 = pop(s); // 3 (stack: 2)
                          // 2 (stack: )
            res = operate(op1, op2, symbol); // 4, 3, *
                                            // 12, 2, +
            push(s, res); // (stack: 2, 12)
                            // (stack: 14)
        }
    }
    return pop(s); // 14
}


int main()
{
    char postfix[SIZE];
    STACK s;
    float ans;
    s.top = -1;
    printf("\n Read postfix expr\n");
    scanf("%s", postfix);
    ans = eval(&s, postfix);
    printf("\n The final answer is %f\n", ans);
    return 0;
}

/**
 * infix: 2 + 3 * 4
 * postfix: 2 3 4 * +
 * evaluation: 2 12 +
 * evaluation: 14
 */