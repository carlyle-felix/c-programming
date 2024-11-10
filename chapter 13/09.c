// count the number of vowels in a sentence
#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main(void) {

    char sentence[100];

    printf("Enter a sentence:   ");
    gets(sentence); // book hasn't covered fgets yet.
       
    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
    
    return 0;
}

int compute_vowel_count(const char *sentence) {

    char ch;
    int sum = 0;

    while (*sentence) {

        switch (tolower(*sentence++)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                sum++;
                break;
        }
    }

    return sum;
}