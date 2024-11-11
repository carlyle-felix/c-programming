// single digit RPN calculator
#include <stdio.h>
#include <stdbool.h> /* C99 only */
#include <stdlib.h>

#define STACK_SIZE 100

// function prototypes
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

// external variables
int contents[STACK_SIZE];
int top = 0;

int main(void) {
    
    char expression[STACK_SIZE] = {'\0'}, ch;

    for (;;) {
        make_empty();
        printf("Enter an RPN expression:    ");
        gets(expression);
        if (*expression == 'q')
            break;
        printf("\nValue of expression:    %d\n", evaluate_RPN_expression(expression));   
    }

    return 0;
}

void make_empty(void) {
    
    top = 0;
}

bool is_empty(void) {

    return top == 0;
}

bool is_full(void) {
    
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

void stack_overflow(void){

    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){

    printf("Not enough operands\n");
    exit(EXIT_FAILURE);
}

int evaluate_RPN_expression(const char *expression) {

    int num1, num2;

    while (*expression != '=') {
        switch (*expression) {
            case ' ':   break;
            case '+':   push(pop() + pop());
                        break;
            case '-':   num2 = pop();
                        num1 = pop();
                        push(num1 - num2);
                        break;
            case '*':   push(pop() * pop());
                        break;
            case '/':   num2 = pop();
                        num1 = pop();
                        push(num1 / num2);
                        break;
            default:    push(*expression - '0');
                        break;
        }
        expression++;
    }  
    
    return pop();
}