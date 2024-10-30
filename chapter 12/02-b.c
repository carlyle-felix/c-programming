// read a message a check whether it's a palindrome
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 50

bool is_palindrome(char letters[], char *high);

int main(void) {

    char c, letters[N], *p = letters;

    printf("Enter a message:    ");
    while (p < &letters[N] && (c = toupper(getchar())) != '\n') {
        if (c >= 'A' && c <= 'Z') {
            *p++ = c;
        }
    }
    
    if (is_palindrome(letters, --p)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}

bool is_palindrome(char letters[], char *high) {
    
    char *low = letters;

    while (low < high) {
        if (*low == *high) {
            low++;
            high--;
        } else return false;
    }
    return true;
}