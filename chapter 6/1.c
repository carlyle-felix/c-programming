// find the largest number in a series of numbers entered by user.
#include <stdio.h>

int main(void) { 

    float n, m = 0;

    printf("Enter a number (0 to cancel):   ");
    scanf("%f", &n);

    while (n > 0) {
            if (n > m)
            m = n;
        else 
            m = m;
        
        printf("Enter a number (0 to cancel):   ");
        scanf("%f", &n);
    }

    printf("The largest number entered was %.2f", m);

    return 0;
}