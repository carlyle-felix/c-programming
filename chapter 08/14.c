// reverse the words in a sentence
#include <stdio.h>
#include <ctype.h>

int main(void) {

    char word[100], ch;
    int i, j, end;

    printf("Enter a sentence:   ");

    for (i = 1; (ch = tolower(getchar())) != '.' && ch != '?' && ch != '!'; i++) {
        word[i] = ch;
    }
    end = i;

    for (i = i; i >= 0; i--) {
        if (word[i - 1] == ' ') {
            for (j = i; word[j] != ' ' && j != end; j++) {
                putchar(word[j]);
            }
            if (word[j] == ' ' || j == end)
                printf(" ");
        } else if (i == 0) {
            for (j = i; word[j] != ' '; j++) {
                putchar(word[j]);
            }
        }
    }
    putchar(ch);
    printf("\n");

    return 0;
}