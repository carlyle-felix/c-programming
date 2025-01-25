#ifndef STACK_H
#define STACK_H

#include <stdbool.h> /* C99 only */
#include <stdlib.h>

typedef struct struct_type *Stack;

// function prototypes
Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, int i);
int pop(Stack s);
void stack_overflow(void);
void stack_underflow(void);

#endif