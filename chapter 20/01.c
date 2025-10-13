#include <stdio.h>

int main(void)
{
    union {
        float fraction;
        struct {
            unsigned int fraction: 23;
            unsigned int exponent: 8;
            unsigned int sign_bit: 1;
        } bit_field;
    } u;

    u.bit_field.sign_bit = 1;
    u.bit_field.exponent = 128;
    u.bit_field.fraction = 0;

    printf("%f\n", u.fraction);

    return 0;
}