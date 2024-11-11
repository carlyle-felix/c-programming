// test whether two words are anagrams
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 20

bool are_anagrams(const char *word1, const char *word2);

int main(void) {

    char ch, word1[LEN + 1], word2[LEN + 1], *word;

    printf("Enter first word:   ");
    word = word1;
    while ((ch = tolower(getchar())) != '\n') {
        *word++ = ch;
    }
    printf("Enter second word:  ");
    word = word2;
    while ((ch = tolower(getchar())) != '\n') {
        *word++ = ch;
    }

    if (are_anagrams(word1, word2))
        printf("The words are anagrams.\n");
    else 
        printf("The words are not anagrams.\n");
    
    return 0;
}

bool are_anagrams(const char *word1, const char *word2) {

    int i, seen[26] = {0};

    while (*word1) {
        seen[*word1++ - 97]++;
    } 
    while (*word2) {
        seen[*word2++ - 97]--;
    }
    for (i = 0; i < 26; i++) {
        if (seen[i] > 0) {
            return false;
        }
    }
    return true;
}