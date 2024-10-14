// calculate tax due

#include <stdio.h>

int main(void){

    float income, i;

    printf("Enter amount of taxable income: $");
    scanf("%f", &income);

    if (income < 750)
        i = income * 0.01;
    else if (income <= 2250)
        i = 7.5 + (income - 750) * 0.02;
    else if (income <= 3750)
        i = 37.5 + (income - 2250) * 0.03;
    else if (income <= 5250)
        i = 82.5 + (income - 3750) * 0.04;
    else if (income <= 7000)
        i = 142.5 + (income - 5250) * 0.05;
    else 
        i = 230 + (income - 7000) * 0.06;

    printf("Tax due:    $%.2f\n", i);

    return 0;
}