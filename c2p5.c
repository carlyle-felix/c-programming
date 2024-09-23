#include <stdio.h>
// including math.h makes powers easier with "pow(base, exponent)" but requires libm.a (-lm) to be linked. see https://stackoverflow.com/a/12824148 
int main()
{
    int x, y;

    printf("Input value for x:  ");
    scanf("%d", &x);

    y = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) + 5 * (x * x * x) - (x * x) - 7 * x - 6;

    printf("%d\n", y);

    return 0;
}