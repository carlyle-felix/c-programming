// Check whether or not parentheses and/or braces are nested correctly
#include <stdio.h>
#include <stdbool.h> /* C99 only */
#include <stdlib.h>

#define STACK_SIZE 100

// function prototypes
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

// external variables
char contents[STACK_SIZE];
int top = 0;
bool underflow = false;

int main(void) {
    bool correct = true;
    char user_input;

    printf("Enter a series of parentheses and/or braces:    ");

    while ((user_input = getchar()) != '\n') {
        
        if (user_input == '{' || user_input == '(') {
            push(user_input);
        }
        if (user_input == '}' && pop() != '{' || user_input == ')' && pop() != '(') {
            correct = false;
            break;
        } 
    }
    if (!is_empty || underflow)
        correct = false;

    if (correct)
        printf("Parentheses/braces are nested correctly.\n");
    else 
        printf("Parentheses/braces are nested incorrectly.\n");
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

void push(char i) {
    
    if (is_full())
        stack_overflow();
    else 
        contents[top++] = i;
}

char pop(void) {

    if (is_empty())
        stack_underflow();
    else 
        return contents[--top];
}

void stack_overflow(void){
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}
void stack_underflow(void){
    underflow = true;
}