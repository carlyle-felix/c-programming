/* Calculates a broker’s commission */

#include <stdio.h>

int main(void){

    float commission, commission2, value, num_share, share_price;

    printf("Enter number of shares: ");
    scanf("%f", &num_share);

    printf("Enter share price:  ");
    scanf("%f", &share_price);

    value = num_share * share_price;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    
    if (commission < 39.00f)
        commission = 39.00f;
    
    printf("Your brokers commision: $%.2f\n", commission);

    // competitor commision

    if (num_share < 2000)
        commission2 = 33 + 0.03 * num_share;
    else 
        commission2 = 33 + 0.02 * num_share;

    printf("Competitors comission: $%.2f\n", commission2);

    return 0;
}