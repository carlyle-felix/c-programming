#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stringsort.h"

void str_sort(char **str, int n_elem, int max_str_len) {

    char *s[n_elem];
    int str_num, pos, i;

    for (i = 0; i < n_elem; i++) {

        s[i] = calloc(n_elem, sizeof(char));
        if (s[i] == NULL) {
            printf("Error: calloc failed to allocate space for s[%d] in str_sort", i);
            exit(EXIT_FAILURE);
        }
    }

    for (str_num = 0; str_num < n_elem; str_num++) {

        for (i = 0; i < str_num; i++) {

            if (strcmp(str[str_num], s[i]) < 0) {
                break; 
            }
        }

        for (pos = str_num; pos > i; pos--) {
            strcpy(s[pos], s[pos - 1]);
        }

        strcpy(s[i], str[str_num]);
    }

    for (str_num = 0; str_num < n_elem; str_num++) {
        
        str[str_num] = realloc(str[str_num], (sizeof(char) * strlen(s[str_num])) + 1);
        if (s[str_num] == NULL) {
            printf("Error: realloc failed to resize word[%d].\n", str_num);
            exit(EXIT_FAILURE);
        }
        
        strcpy(str[str_num], s[str_num]);
        free(s[str_num]);
    }
}