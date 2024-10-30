// read a message, then print the reversal of the message
#include <stdio.h>
#define N 50

int main(void) {

    char c, letters[N], *p;

    printf("Enter a message:    ");
    for (p = letters; p < letters + N && (c = getchar()) != '\n'; p++) {
        *p = c;
    }
    
    p--;
    printf("Reversal is:    ");
    while (p >= letters) {
        putchar(*p--);
    }
    printf("\n");

    return 0;
}