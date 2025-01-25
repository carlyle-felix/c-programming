#include <stdio.h>
#include "stack.h"

#define STACK_SIZE 100

struct struct_type {
    int contents[STACK_SIZE];
    int top;
};

Stack create(void) {
   
    Stack s = malloc(sizeof(struct struct_type));
    if (s == NULL) {
        printf("Error: malloc failed to allocate space for new stack.\n");
        exit(EXIT_FAILURE);
    }
    s->top = 0;

    return s;
}

void destroy(Stack s) {

    free(s);
}

void make_empty(Stack s) {
    
    s->top = 0;
}

bool is_empty(Stack s) {

    return s->top == 0;
}

bool is_full(Stack s) {
    
    return s->top == STACK_SIZE;
}

void push(Stack s, int i) {

    if (is_full(s))
        stack_overflow();
    else 
        s->contents[s->top++] = i;
}

int pop(Stack s) {

    if (is_empty(s))
        stack_underflow();
    else 
        return s->contents[--s->top];
}

void stack_overflow(void){

    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){

    printf("Not enough operands\n");
    exit(EXIT_FAILURE);
}