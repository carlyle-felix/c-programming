// simplified Beaufort scale

#include <stdio.h>

int main(void){

    int knots;

    printf("Enter wind speed (knots):   ");
    scanf("%d", &knots);

    if (knots < 1)
        printf("Calm\n");
    else if (knots >= 1 && knots <= 3)
        printf("Light air\n");
    else if (knots >= 4 && knots <= 27)
        printf("Breeze\n");
    else if (knots >= 28 && knots <= 47)
        printf("Gale\n");
    else if (knots >= 48 && knots <= 63)
        printf("Storm\n");
    else 
        printf("Hurricane\n");

    // didn't need to specify ranges, only "<=" was needed.

    return 0;
}