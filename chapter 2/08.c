#include <stdio.h>

int main(){

    float loan, interest, interest_decimal, installment, m1, m1_installment, m2, m2_installment, m3, m3_installment;
    
    printf("Input initial loan amount:    $");
    scanf("%f", &loan);
    
    printf("Input monthly installment:    $");
    scanf("%f", &installment);
    
    printf("Input interest rate:    ");
    scanf("%f", &interest);
    
    interest_decimal = (interest / 100) / 12;

    // first month
    
    m1_installment = installment - loan * interest_decimal;
    m1 =  loan - m1_installment;
    
    printf("%.2f\n", m1);
    
    // second month

    m2_installment =  installment - m1 * interest_decimal;
    m2 = m1 - m2_installment;

    printf("%.2f\n", m2);

    // third month

    m3_installment = installment - m2 * interest_decimal;
    m3 = m2 - m3_installment;

    printf("%.2f\n", m3);


    return 0;
}