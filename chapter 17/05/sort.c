// Sort a series of words entered by the user
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"
#include "stringsort.h"

#define MAX_WORD_LEN 20

int main(void) {

    char **words;
    int i, count = 1;

    for (i = 0;; i++) {

        if (i == 0) {
            words = malloc(sizeof(char *));
            if (words == NULL) {
                printf("Error: malloc failed to allocate initial space for **words.\n");
                exit(EXIT_FAILURE);
            }
        } else {
            words = realloc(words, sizeof(char *) * (i + 1));
            if (words == NULL) {
                printf("Error: realloc failed to resize **words\n");
                exit(EXIT_FAILURE);
            }
        }

        *(words + i) = malloc(MAX_WORD_LEN + 1);
        if (*(words + i) == NULL) {
            printf("Error: malloc failed to allocate initial space for word %d.\n", i + 1);
            exit(EXIT_FAILURE);
        }
        printf("Enter word: ");
        
        count = read_line(*(words + i), MAX_WORD_LEN);
        if (count == 0) {
            free(*(words + i));
            break;
        }

    }

    str_sort(words, i, MAX_WORD_LEN);

    printf("In sorted order: ");
    for (count = i, i = 0; i < count; i++) {
        printf("%s ", *(words + i));
    }
    putchar('\n');

    return 0;
}