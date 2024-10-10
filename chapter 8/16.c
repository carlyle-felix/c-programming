// test whether two words are anagrams
#include <stdio.h>
#include <ctype.h>

int main(void) {

    char ch;
    int i, seen[26] = {0};

    printf("Enter first word:   ");
    for (i = 0; (ch = tolower(getchar())) != '\n'; i++) {
        if (isalpha(ch))
            seen[ch - 97]++;
    }

    printf("Enter second word:  ");
    for (i = 0; (ch = tolower(getchar())) != '\n'; i++) {
        if (isalpha(ch))
            seen[ch - 97]--;
    }
    
    for (i = 0; i < 26; i++) {
        if (seen[i] != 0)
            break;
    }

    if (i == 26)
        printf("The words are anagrams.\n");
    else 
        printf("The words are not anagrams.\n");
    return 0;
}