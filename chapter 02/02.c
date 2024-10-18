#include <stdio.h>
#define PI 3.141592653589793
#define FRACTION (4.0f / 3.0f)

int main(void)
{
    float v, r = 10;
    
    v = FRACTION * PI * (r * r * r);
    
    printf("%f", v);

    return 0;
}