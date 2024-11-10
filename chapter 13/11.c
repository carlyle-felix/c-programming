// calculate the average word length of a sentence
#include <stdio.h>

void compute_average_word_length(const char *sentence);

int main(void) {

    char sentence[101];
    

    printf("Enter a sentence:   ");
    gets(sentence);          // book hasn't covered fgets yet.
    
    compute_average_word_length(sentence);

    return 0;
}

void compute_average_word_length(const char *sentence) {

    int sum, space;

    for (sum = 0, space = 0; *sentence; sum++) {
        if (*sentence++ == ' ')
            ++space;
    }
    printf("%.1f\n", (float) (sum - space) / (space + 1));    
}