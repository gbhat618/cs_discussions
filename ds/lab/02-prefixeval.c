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


float eval(STACK *s, char prefix[SIZE]) // + 2 * 3 4
{
    int i;
    char symbol;
    float res, op1, op2;
    // for (i = strlen(prefix) - 1; i >= 0; i--)
    for (i = strlen(prefix) - 1; i >= 0; i--)
    {
        symbol = prefix[i];
        if (isdigit(symbol))
            push(s, symbol - '0'); // 4, 3
                                    // 12, 2
        else
        {
            op1 = pop(s); // 3
                          // 2
            op2 = pop(s); // 4
                         // 12 
            res = operate(op1, op2, symbol); // 3, 4, * => 12
                                            // 2, 12, + => 14
            push(s, res); // 12
                        // 14
        }
    }
    return pop(s);
}


int main()
{
    char prefix[SIZE];
    STACK s;
    float ans;
    s.top = -1;
    printf("\n Read prefix expr\n");
    scanf("%s", prefix);
    ans = eval(&s, prefix);
    printf("\n The final answer is %f\n", ans);
    return 0;
}

/**
 * infix: 2 + 3 * 4
 * prefix: + 2 * 3 4
 * evaluation: + 2 12
 * evaluation: 14
 */