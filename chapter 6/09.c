// compute remaining interest after n payments.
#include <stdio.h>

int main(){

    int n, month;
    float loan, interest, interest_decimal, installment, m_installment, remaining;
    
    printf("Enter amount of loan:    $");
    scanf("%f", &loan);
    
    printf("Enter interest rate:    ");
    scanf("%f", &interest);

    printf("Enter monthly payment:    $");
    scanf("%f", &installment);
    
    printf("Enter number of payments made: ");
    scanf("%d", &n);
    
    interest_decimal = (interest / 100) / 12;

    for (month = 0; month < n; month++)
        if (month == 0) {
            m_installment = installment - loan * interest_decimal;
            remaining = loan - m_installment;
            printf("Balance remaining after %d payment: $%.2f\n", month + 1, remaining);
        } else {
            m_installment = installment - remaining * interest_decimal;
            remaining = remaining - m_installment;
            printf("Balance remaining after %d payments: $%.2f\n", month + 1, remaining);        
        }
    return 0;
}