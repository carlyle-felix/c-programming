// read a message, then print the reversal of the message
#include <stdio.h>
#define N 50

int main(void) {

    char c, letters[N], i;

    printf("Enter a message:    ");
    for (i = 0; i < N && (c = getchar()) != '\n'; i++) {
        letters[i] = c;
    }
    i--;
    printf("Reversal is:    ");
    while (i >= 0) {
        putchar(letters[i--]);
    }
    printf("\n");

    return 0;
}