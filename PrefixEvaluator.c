#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

typedef struct
{
    char *data;
    int top;
    int size;
} Stack;

Stack* initStack(int size)
{
    Stack *s = (Stack*)malloc(sizeof(Stack));
    s->data = (char*)malloc(sizeof(char) * size);
    s->top = -1;
    s->size = size;
    return s;
}

bool isEmpty(Stack *s)
{
    return s->top == -1;
}

bool isFull(Stack *s)
{
    return s->top == s->size - 1;
}

void push(Stack *s, char c)
{
    if (isFull(s)) {
        printf("Stack is full!\n");
        return;
    }

    s->data[++s->top] = c;
}

char pop(Stack *s)
{
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return '\0';
    }

    return s->data[s->top--];
}

char peek(Stack *s)
{
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return '\0';
    }

    return s->data[s->top];
}

int PrefixEvaluator(char* input)
{
    int result = 0;
    int length = strlen(input);

    Stack *s = initStack(length);

    return result;
}

int main(int argc, char** argv)
{
    if (argc != 2) {
        printf("Usage: ./PrefixEvaluator \"expression\"\n");
        return 1;
    }

    char* input = argv[1];

    int result = PrefixEvaluator(input);
    printf("The result is: %d\n", result);

    return 0;
}

