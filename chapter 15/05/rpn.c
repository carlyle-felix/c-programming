// single digit RPN calculator
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// external variables
int contents[STACK_SIZE];
int top = 0;

int main(void) {

    int num1, num2;
    char ch;

    while (1) {
        
        make_empty(); 
        printf("Enter an RPN expression:    ");
        scanf(" %c", &ch);
        while (ch != '=' && ch != 'q') {
            switch (ch) {
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
                default:    push(ch - '0');
                            break;
            }
            scanf(" %c", &ch);
        }  
        if (ch == 'q')
            break;
        printf("\nValue of expression:    %d\n", pop());  
    
    }

    return 0;
}

void stack_overflow(void){

    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){

    printf("Not enough operands\n");
    exit(EXIT_FAILURE);
}