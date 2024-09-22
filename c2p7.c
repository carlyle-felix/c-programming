#include <stdio.h>

int main(){
    
    int amount, twenty, ten, five, one;
    
    printf("Enter total: $");
    scanf("%d", &amount);
    
    twenty = amount / 20;
    ten = (amount - 20 * twenty) / 10;                          // subtract the total USD covered by the number of $20 bills from amount.
    five = (amount - 20 * twenty - 10 * ten) / 5;               // same as before but subtract USD covered by the number of $10 bills as well.
    one = (amount - 20 * twenty - 10 * ten - 5 * five) / 1; 
    
    printf("Smallest number of bills for $%d:\n", amount);
    printf("$20: %d\n", twenty);
    printf("$10: %d\n", ten);
    printf("$5: %d\n", five);
    printf("$1: %d\n", one);

    return 0;
}