// read a message a check whether it's a palindrome
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 50

bool is_palindrome(char letters[], int high);

int main(void) {

    char c, letters[N];
    int i = 0;

    printf("Enter a message:    ");
    while (i < N && (c = toupper(getchar())) != '\n') {
        if (c >= 'A' && c <= 'Z') {
            letters[i++] = c;
        }
    }
    
    if (is_palindrome(letters, i - 1)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}

bool is_palindrome(char letters[], int high) {
    
    int low = 0;

    while (low < high) {
        if (letters[low] == letters[high]) {
            low++;
            high--;
        } else return false;
    }
    return true;
}