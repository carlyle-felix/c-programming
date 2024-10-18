// test whether two words are anagrams
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int count[]);
bool equal_array(int counts1[], int counts2[]);

int main(void) {
    bool anagram;
    int i, first_count[26] = {0}, second_count[26] = {0};

    printf("Enter first word:   ");
    read_word(first_count);

    printf("Enter second word:  ");
    read_word(second_count);
    
    anagram = equal_array(first_count, second_count);

    if (anagram)
        printf("The words are anagrams.\n");
    else 
        printf("The words are not anagrams.\n");
    return 0;
}

void read_word(int counts[]) {
    char ch;
    int i;

    for (i = 0; (ch = tolower(getchar())) != '\n'; i++) {
        if (isalpha(ch))
            counts[ch - 97]++;
    }
}

bool equal_array(int counts1[], int counts2[]) {
    int i;

    for (i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i])
            return false;
    }
    return true;
}