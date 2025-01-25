// single digit RPN calculator
#include <stdio.h>
#include "stack.h"

int main(void) {

    int num1, num2;
    char ch;
    Stack rpn = create();

    while (1) {
        
        make_empty(rpn); 
        printf("Enter an RPN expression:    ");
        scanf(" %c", &ch);
        while (ch != '=' && ch != 'q') {
            switch (ch) {
                case '+':   push(rpn, pop(rpn) + pop(rpn));
                            break;
                case '-':   num2 = pop(rpn);
                            num1 = pop(rpn);
                            push(rpn, num1 - num2);
                            break;
                case '*':   push(rpn, pop(rpn) * pop(rpn));
                            break;
                case '/':   num2 = pop(rpn);
                            num1 = pop(rpn);
                            push(rpn, num1 / num2);
                            break;
                default:    push(rpn, ch - '0');
                            break;
            }
            scanf(" %c", &ch);
        }  
        if (ch == 'q')
            break;
        printf("\nValue of expression:    %d\n", pop(rpn));  
    
    }
    destroy(rpn);

    return 0;
}
