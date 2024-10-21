#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(){
    
    int amount, twenty, ten, five, one;
    
    printf("Enter total: $");
    scanf("%d", &amount);
    
    pay_amount(amount, &twenty, &ten, &five, &one);
    
    printf("Smallest number of bills for $%d:\n", amount);
    printf("$20: %d\n", twenty);
    printf("$10: %d\n", ten);
    printf("$5: %d\n", five);
    printf("$1: %d\n", one);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    *tens = (dollars - 20 * *twenties) / 10;                          // subtract the total USD covered by the number of $20 bills from amount.
    *fives = (dollars - 20 * *twenties - 10 * *tens) / 5;               // same as before but subtract USD covered by the number of $10 bills as well.
    *ones = (dollars - 20 * *twenties - 10 * *tens - 5 * *fives) / 1; 
}