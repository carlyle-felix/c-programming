// Reverse a three-digit number
#include <stdio.h>

int main(void){

    int num, num_a, num_b, num_c;
    
    printf("Enter a three-digit number:   ");
    scanf("%d", &num);

    num_a = num / 100;
    num_b = (num % 100) / 10;
    num_c = (num % 100) % 10; 

    printf("The reversal is:    %d%d%d\n", num_c, num_b, num_a); 

    return 0;
}