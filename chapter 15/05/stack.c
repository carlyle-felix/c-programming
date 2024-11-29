#include "stack.h"

extern int top, contents[];

void make_empty(void) {
    
    top = 0;
}

BOOL is_empty(void) {

    return top == 0;
}

BOOL is_full(void) {
    
    return top == STACK_SIZE;
}

void push(int i) {

    if (is_full())
        stack_overflow();
    else 
        contents[top++] = i;
}

int pop(void) {

    if (is_empty())
        stack_underflow();
    else 
        return contents[--top];
}