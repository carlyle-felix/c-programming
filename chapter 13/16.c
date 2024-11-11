// read a message, then print the reversal of the message
#include <stdio.h>
#include <string.h>

#define N 50

void reverse(char *message);

int main(void) {

    char c, letters[N], *p;

    printf("Enter a message:    ");
    for (p = letters; p < letters + N && (c = getchar()) != '\n'; p++) {
        *p = c;
    }
    *p = '\0';
    
    reverse(letters);
    printf("Reversal is:    %s\n", letters);

    return 0;
}

void reverse(char *message) {
    
    int len = strlen(message);
    char *high = message + len - 1, *low = message;

    while (high > low) {
        char temp = *high;
        *high-- = *low;
        *low++ = temp;
    }
}