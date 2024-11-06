#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main(void) {

    char smallest_word[MAX_LEN + 1] = "z", largest_word[MAX_LEN + 1], word[MAX_LEN + 1];
    
    for (;;) {

        printf("Enter word: ");
        scanf("%s", word);

        if (strlen(word) == 4) {
            break;
        } else if (strcmp(word, smallest_word) < 0) {
            strcpy(smallest_word, word);
        } else if (strcmp(word, largest_word) > 0) {
            strcpy(largest_word, word);
        }
    }

    printf("Smallest word:  %s\n", smallest_word);
    printf("Largest word:   %s\n", largest_word);

    return 0;
}