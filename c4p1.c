// Reverse a two-digit number
#include <stdio.h>

int main(void){

    int num, num_a, num_b;
    
    printf("Enter a two-digit number:   ");
    scanf("%d", &num);

    num_a = num / 10;
    num_b = num % 10;

    printf("The reversal is:    %d%d\n", num_b, num_a); 

    return 0;
}