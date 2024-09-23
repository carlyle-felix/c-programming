// Computes a European Article Number check digit.

#include <stdio.h>

int main(void){

    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, sum1, sum2, total;

    printf("Enter the first 12 digits of an EAN:    ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    sum1 = i2 + i4 + i6 + i8 + i10 + i12;
    sum2 = i1 + i3 + i5 + i7 + i9 + i11;
    total = 9 - ((((sum1 * 3) + sum2) - 1) % 10);

    printf("%d\n", total);

    return 0;
}