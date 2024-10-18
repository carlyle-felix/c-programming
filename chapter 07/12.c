// evaluates an expression
#include <stdio.h>

int main(void) {

    char op;
    float num, total;

    printf("Enter an expression:    ");
    scanf("%f", &total);

    while (op != '\n') {
        op = getchar();
        if (op != '\n')
            scanf("%f", &num);
        if (op == '+')
            total = total + num;
        else if (op == '-')
            total = total - num;
        else if (op == '*')
            total = total * num;
        else if (op == '/') 
            total = total / num;
    }
    printf("Value of expression:    %.1f\n", total);

    return 0;
}