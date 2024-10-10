// calculate the value of scrabble words
#include <stdio.h>
#include <ctype.h>

int main(void) {

    char ch;
    int val = 0, i, scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                                    1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word:   ");
    while ((ch = toupper(getchar()))!= '\n') {
        val += scrabble[ch - 'A'];
    }
    printf("Scrabble value: %d\n", val);

    return 0;
}