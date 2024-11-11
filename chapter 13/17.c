// read a message a check whether it's a palindrome
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define N 50

bool is_palindrome(const char *message);

int main(void) {

    char c, letters[N + 1], *p = letters;

    printf("Enter a message:    ");
    while (p < &letters[N] && (c = toupper(getchar())) != '\n') {
        if (c >= 'A' && c <= 'Z') {
            *p++ = c;
        }
    }
    *p = '\0';
    
    if (is_palindrome(letters)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}

bool is_palindrome(const char *message) {
    
    int len = strlen(message);
    const char *low = message, *high = message + len - 1;

    while (low < high) {
        if (*low == *high) {
            low++;
            high--;
        } else return false;
    }
    return true;
}