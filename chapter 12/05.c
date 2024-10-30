// reverse the words in a sentence
#include <stdio.h>
#include <ctype.h>

#define LEN 100
int main(void) {

    char letter[LEN] = {0}, ch, *p_letter, *end, *reset_pos;

    printf("Enter a sentence:   ");
    for (p_letter = letter; p_letter < letter + LEN && (ch = tolower(getchar())) != '.' && ch != '?' && ch != '!'; p_letter++) {
        *p_letter = ch;
    }
    end = p_letter;

    if (p_letter > letter + LEN - 1) {
        printf("%d characters exceeded.", LEN);
        return 1;
    }

    for (; p_letter >= letter; p_letter--) {
        reset_pos = p_letter;
        if (*(p_letter - 1) == ' ') {
            for (; *p_letter != ' ' && p_letter != end; p_letter++) {
                putchar(*p_letter);
            }
            if (*p_letter == ' ' || p_letter == end)
                printf(" ");
        } else if (p_letter == letter) {
            for (; *p_letter != ' '; p_letter++) {
                putchar(*p_letter);
            }
        }
        p_letter = reset_pos;
    }
    putchar(ch);
    printf("\n");

    return 0;
}
