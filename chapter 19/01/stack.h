#ifndef STACK_H
#define STACK_H

#include <stdbool.h> /* C99 only */
#include <stdlib.h>

typedef struct stack_type *Stack;

extern bool underflow;

// function prototypes
Stack create(void);
void destroy(Stack p);
void make_empty(Stack p);
bool is_empty(Stack p);
bool is_full(Stack p);
void push(Stack p, char i);
char pop(Stack p);
void stack_overflow(void);
void stack_underflow(void);

#endif