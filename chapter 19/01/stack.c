#include <stdio.h>
#include "stack.h"

// external variables
#define STACK_SIZE 100

struct stack_type {
    char contents[STACK_SIZE];
    int top;
};

bool underflow = false;

Stack create(void){

    Stack p = malloc(sizeof(struct stack_type));
    if (p == NULL) {
        printf("Error: malloc failed to allocate space for new stack.\n");
        exit(EXIT_FAILURE);
    }
    p->top = 0;

    return p;
}

void destroy(Stack p) {

    free(p);
}

void make_empty(Stack p) {
    
    p->top = 0;
}

bool is_empty(Stack p) {

    return p->top == 0;
}

bool is_full(Stack p) {
    
    return p->top == STACK_SIZE;
}

void push(Stack p, char i) {
    
    if (is_full(p))
        stack_overflow();
    else 
        p->contents[p->top++] = i;
}

char pop(Stack p) {

    if (is_empty(p))
        stack_underflow();
    else 
        return p->contents[--p->top];
}

void stack_overflow(void){
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){
    underflow = true;
}