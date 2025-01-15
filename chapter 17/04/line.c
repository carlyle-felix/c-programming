#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node {
    int number;             // Track word order
    char *word;
    struct node *next;
} *line = NULL;

int line_len = 0;
int num_words= 0;

void *find_word(int num);

void clear_line(void) {

    struct node *temp;
    
    while (line != NULL) {
        temp = line;
        line = line->next;
        free(temp->word);
        free(temp);
    }
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word) {

    struct node *new_word;

    // Allocate memory for new_word node.
    new_word = malloc(sizeof(struct node));
    if (new_word == NULL) {
        printf("Error: malloc failed to allocate space for new_word in add_word.\n");
        exit(EXIT_FAILURE);
    }

    // Allocate memory for word member of new_node.
    new_word->word = calloc(strlen(word) + 2, sizeof(char));
    if (new_word->word == NULL) {
        printf("Error: malloc failed to allocate space for word member in add_word.\n");
        exit(EXIT_FAILURE);
    }

    // Concatenate space to the previous word in the list.
    if (num_words > 0) {
        strcat(line->word, " ");
        line_len++;
    }
    strcpy(new_word->word, word);
    num_words++;
    new_word->number = num_words;
    new_word->next = line;
    line = new_word;
    line_len += strlen(word);
}

int space_remaining(void) {
    
    return MAX_LINE_LEN - line_len;
}

void write_line(void) {

    int extra_spaces, spaces_to_insert, word_num = 1, i, j, k;
    struct node *traverse = find_word(word_num++);
    
    extra_spaces = MAX_LINE_LEN - line_len;
    for (i = 0, k = 0; i < line_len; i++) {
        if (traverse->word[k] != ' ') {
            putchar(traverse->word[k++]);
        } else {
            spaces_to_insert = extra_spaces / (num_words -1);
            for (j = 1; j <= spaces_to_insert + 1; j++) {
                putchar(' ');
            }
            extra_spaces -= spaces_to_insert;
            num_words--;
            if (num_words) {
                traverse = find_word(word_num++);
                k = 0;
            }
        }
    }
    putchar('\n');
}

void flush_line(void) {

    int word_num = 1;
    struct node *traverse;
    
    if (line_len > 0) { 
        while (num_words-- > 0){
            traverse = find_word(word_num++);
            printf("%s", traverse->word);
        }
        putchar('\n');
    }
}

void *find_word(int num) {
    struct node *temp = line;

    while (temp != NULL) {
        if (temp->number == num) {
            return temp;
        }
        temp = temp->next;
    }
    printf("Error: word num not found in find_word");
    exit(EXIT_FAILURE);
}