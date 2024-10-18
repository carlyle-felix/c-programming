/* Checks numbers for repeated digits */

#include <stdbool.h>        /* C99 only */
#include <stdio.h>

int main(void) {
    
    bool digit_seen[10] = {false}, repeat_digits[10] = {false}, repeat = false;
    int digit, i = 0;
    long n;
   
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        digit = n % 10;        
        for (; digit_seen[digit]; i++) {
            if (i == 0) {
                printf("Repeated digit(s):  %d ", digit); 
                repeat_digits[digit] = true;        
            } else if (repeat_digits[digit]) {
                break;
            } else {
                printf("%d ", digit);
                repeat_digits[digit] = true;
            }
            repeat = true;
        }
        digit_seen[digit] = true;
        n /= 10;                                            
    }
    if (repeat)
        printf("\n");
    else
        printf("No repeated digit\n");
    
    return 0;
}