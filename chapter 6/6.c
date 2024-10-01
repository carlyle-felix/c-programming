// print all even squares between 1 and given number
#include <stdio.h>

int main(void) {

    int input, square = 0, increment;

    printf("Enter an integer:   ");
    scanf("%d", &input);

    for (increment = 2; increment * increment <= input; increment += 2) {
        square = increment * increment;
        printf("%d\n", square);
    }
}