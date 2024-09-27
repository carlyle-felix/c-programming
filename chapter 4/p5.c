// Computes a Universal Product Code check digit.
// rewrote to accept 11 consecutive digits instead of seperated.

#include <stdio.h>

int main(void){
    
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
    
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d", &d);
    // printf("Enter first group of five digits: ");        // scanf will pick up the integers it "put back" in its first call.
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    // printf("Enter second group of five digits: ");       // scanf will pick up the integers it "put back" in its previous call.
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}