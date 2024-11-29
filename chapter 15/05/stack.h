#ifndef STACK_H
#define STACK_H

#include "boolean.h"
#define STACK_SIZE 100

void make_empty(void);
BOOL is_empty(void);
BOOL is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

#endif