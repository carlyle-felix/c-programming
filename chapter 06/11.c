#include <stdio.h>

int main(void) {

    int n, d;
    float e, i;
        
    printf("Enter value for n:  ");
    scanf("%d", &d);

    for (i = 1, e = 1, n = 1; n < d + 1; n++) {
        e += 1 / (n * i);
        i *= n;
    }
    printf("Approximate value of e:  %f\n", e);

    return 0;
}