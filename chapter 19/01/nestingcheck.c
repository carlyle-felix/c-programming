// Check whether or not parentheses and/or braces are nested correctly
#include <stdio.h>
#include "stack.h"

int main(void) {
    bool correct = true;
    char user_input;
    Stack series = create();

    printf("Enter a series of parentheses and/or braces:    ");

    while ((user_input = getchar()) != '\n') {
        
        if (user_input == '{' || user_input == '(') {
            push(series, user_input);
        }
        if (user_input == '}' && pop(series) != '{' || user_input == ')' && pop(series) != '(') {
            correct = false;
            break;
        } 
    }
    if (!is_empty(series) || underflow)
        correct = false;

    if (correct)
        printf("Parentheses/braces are nested correctly.\n");
    else 
        printf("Parentheses/braces are nested incorrectly.\n");

    destroy(series);

    return 0;
}
