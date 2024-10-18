#include <stdio.h>

int main(void) {

    int n;
    float e, i, eps, user_eps;
        
    printf("Enter smallest term:  ");
    scanf("%f", &user_eps);

    for (eps = 1, i = 1, e = 1, n = 1; eps >= user_eps; n++) {
        
        e += 1 / (n * i);
        eps = 1 / (n * i);
        i *= n;
    }

    printf("Approximate value of e:  %f\n", e);

    return 0;
}