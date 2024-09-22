#include <stdio.h>

int main(){

    float amount, total;
    
    printf("Input dollars-and-cents amount:    ");
    scanf("%f", &amount);
    
    total = amount * 1.05;
    
    printf("Total incl. tax: $%.2f", total);

    return 0;
}