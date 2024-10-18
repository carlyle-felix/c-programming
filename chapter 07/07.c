// add, subtract, multiply or divide two fractions
#include <stdio.h>

int main(void){
    
    int num1, denom1, num2, denom2, result_num, result_denom;
    char op;

    printf("Enter two fractions seperated by +, - , * or /:   ");
    scanf("%d/%d", &num1, &denom1);
    op = getchar();
    scanf("%d/%d", &num2, &denom2);

    if (op == '+') {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    } else if (op == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    } else if (op == '*') {
        result_num = num1 * num2;     
        result_denom = denom1 * denom2; 
    } else if (op == '/') {
        result_num = num1 * denom2;     
        result_denom = denom1 * num2; 
    }
    if (op == '+' || op == '-' || op == '*' || op == '/')
        printf("The sum is %d/%d\n", result_num, result_denom);
    else 
        printf("invalid operator\n");

    return 0;
}