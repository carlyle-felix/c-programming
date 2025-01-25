#include <stdio.h>
#include "stack.h"

// external variables
struct node {
    char c;
    struct node *next;
};

struct stack_type {
    struct node *top;
};

static void terminate(const char *message);

bool underflow = false;

Stack create(void){

    Stack p = malloc(sizeof(struct stack_type));
    if (p == NULL) {
        terminate("Error: malloc failed to allocate space for new stack.");
    }
    p->top = NULL;

    return p;
}

void destroy(Stack p) {

    make_empty(p);
    free(p);
}

void make_empty(Stack p) {
    
    while (!is_empty(p)) {
        pop(p);
    }
}

bool is_empty(Stack p) {

    return p->top == NULL;
}

bool is_full(Stack p) {
    
    return false;
}

void push(Stack p, char c) {
    
    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL) {
        terminate("Error: malloc failed to allocate space.");
    }
    temp->c = c;
    temp->next = p->top;
    p->top = temp;
}

char pop(Stack p) {

    char c;

    if (is_empty(p)) {
        stack_underflow();
    } else {
        struct node *temp = malloc(sizeof(struct node));
        if (temp == NULL) {
            terminate("Error: malloc failed to allocate space.");
        }
        temp = p->top;
        c = temp->c;
        p->top = temp->next;
        free(temp);
    }

    return c;
}

void stack_overflow(void){

    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){

    underflow = true;
}

static void terminate(const char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}