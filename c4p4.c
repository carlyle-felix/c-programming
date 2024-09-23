// Convert decimal to integer (between 0 and 32767)
#include <stdio.h>

int main(void){

    int num, num0_oct, num1_oct, num2_oct, num3_oct, num4_oct, num5_oct;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    num4_oct = num % 8;
    num3_oct = (num / 8) % 8;
    num2_oct = ((num / 8) / 8) % 8;
    num1_oct = (((num / 8) / 8) / 8) % 8;
    num0_oct = ((((num / 8) / 8) / 8) / 8) % 8;

    printf("%d%d%d%d%d\n", num0_oct, num1_oct, num2_oct, num3_oct, num4_oct);

    return 0;
}