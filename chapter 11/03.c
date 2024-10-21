// reduce a fraction to lowest terms
#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {

    int num, denom, n, d;

    printf("Enter a fraction:     ");
    scanf("%d/%d", &num, &denom);

    reduce(num, denom, &n, &d);
    
    printf("In lowest terms:    %d/%d\n", n, d);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    
    int n = numerator, d = denominator, r;

    while (n != 0) {
        r = d % n;
        d = n;
        n = r;
    }

    *reduced_numerator = numerator /= d;
    *reduced_denominator = denominator /= d;
}
