// print value of sizeof(variable) in it's format (in bytes)

#include <stdio.h>

int main(void) {

    printf("sizeof(int):            %d\n", (int) sizeof(int));
    printf("sizeof(short):          %hd\n", (short) sizeof(short));
    printf("sizeof(long):           %ld\n", (long) sizeof(long));
    printf("sizeof(float):          %f\n", (float) sizeof(float));
    printf("sizeof(doube):          %lf\n", (double) sizeof(double));
    printf("sizeof(long double):    %Lf\n", (long double) sizeof(long double));

    return 0;
}