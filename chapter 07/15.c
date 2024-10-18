// computes factorial of a positive integer
#include <stdio.h>

int main(void) {

    int n, fact, sum;

    printf("Enter a positive integer:   ");
    scanf("%d", &n);
    
    fact = n;
    for (sum = 1; sum < n; sum++) {
        fact *= sum;
    }
    printf("Factorial of %hd:    %d\n", n, fact);
    printf("%d", sum);
    return 0;
}
