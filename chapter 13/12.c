// reverse the words in a sentence
#include <stdio.h>
#include <string.h>

#define WORDS 30
#define LEN 21

int main(void) {

    char word[WORDS][LEN] = {'\0'}, str[WORDS * LEN] = {"\0"}, ch, end[2];
    int i, j;

    printf("Enter a sentence:   ");
    for (i = 0; i < WORDS && ch != '.' && ch != '?' && ch != '!'; i++) {
        for (j = 0; j < LEN && (ch = getchar()) != '.' && ch != '?' && ch != '!' && ch != ' '; j++) {
            word[i][j] = ch;
        }
        word[i][j] = '\0';
    }
    sprintf(end, "%c", ch);
    
    for (--i; i >= 0; i--) {
        if(word[i][LEN - 1] != '\0') {
            break;
        }
        strcat(str, word[i]);
        if (i > 0) strcat(str, " ");
    }
    strcat(str, end);

    if (++i != 0) {
        printf("%d letters exceeded in word %d.\n", LEN - 1, i);
    } else if (getchar() != '\n') {
        printf("%d words exceeded.\n", WORDS);
    } else {
        puts(str);
    }

    return 0;
}