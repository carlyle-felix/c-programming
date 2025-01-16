// Sort s series of words entered by the user
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"
#include "stringsort.h"

#define MAX_WORDS 50
#define MAX_WORD_LEN 20

int main(void) {

    char *word[MAX_WORDS];
    int i, count = 1;

    for (i = 0; i < MAX_WORDS; i++) {
       

        word[i] = malloc(MAX_WORD_LEN + 1);
        if (word[i] == NULL) {
            printf("Error: malloc failed to allocate initial space for word[%d].\n", i + 1);
            exit(EXIT_FAILURE);
        }
        printf("Enter word: ");
        
        count = read_line(word[i], MAX_WORD_LEN);
        if (count == 0) {
            free(word[i]);
            break;
        }
    }

    str_sort(word, i, MAX_WORD_LEN);

    printf("In sorted order: ");
    for (count = i, i = 0; i < count; i++) {
        printf("%s ", word[i]);
    }
    putchar('\n');

    return 0;
}