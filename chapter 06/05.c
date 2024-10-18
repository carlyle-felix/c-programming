// Reverse digits in a number
#include <stdio.h>

int main(void){

    int num, remainder;
    
    printf("Enter a two-digit number:   ");
    scanf("%d", &num);

    printf("The reversal is:    ");
    
    do {
    remainder = num % 10;
    printf("%d", remainder);
    num /= 10;
    } while (num != 0);

    printf("\n");
    
    return 0;
}