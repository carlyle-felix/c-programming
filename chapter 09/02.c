// calculate tax due
#include <stdio.h>

float income_tax(float income);

int main(void){

    float income, tax_due;

    printf("Enter amount of taxable income: $");
    scanf("%f", &income);

    tax_due = income_tax(income);

    printf("Tax due:    $%.2f\n", tax_due);

    return 0;
}

float income_tax(float income) {

    float tax_due;

    if (income < 750)
        tax_due = income * 0.01;
    else if (income <= 2250)
        tax_due = 7.5 + (income - 750) * 0.02;
    else if (income <= 3750)
        tax_due = 37.5 + (income - 2250) * 0.03;
    else if (income <= 5250)
        tax_due = 82.5 + (income - 3750) * 0.04;
    else if (income <= 7000)
        tax_due = 142.5 + (income - 5250) * 0.05;
    else 
        tax_due = 230 + (income - 7000) * 0.06;
    
    return tax_due;
}