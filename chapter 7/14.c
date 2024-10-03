// Newton's method to compute the square root of a positive floating-point number
#include <stdio.h>
#include <math.h>


int main(void) {

    double x, y = 1, y_old;

    printf("Enter a positive number:    ");
    scanf("%lf", &x);
    
    y = (y + x / y) / 2;
    do {
        y_old = y;
        y = fabs((y + x / y) / 2);
    }   while ((y_old - y) >= (0.00001 * y));

    printf("Square root:    %.5lf\n", y);

    return 0;
}