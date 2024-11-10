// calculate the value of scrabble words
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compute_scrabble_value(const char *word);

int main(void) {

    char word[20], ch;
    int i = 0;

    printf("Enter a word:   ");
    while ((ch = toupper(getchar())) != '\n') {
        word[i++] = ch;
    }
   
    printf("Scrabble value: %d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word) {
    
    int val = 0;

    while (*word) {
         switch (*word++) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                val += 1;
                break;
            case 'D': case 'G':
                val += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                val += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                val += 4;
                break;
            case 'K':
                val += 5;
                break;
            case 'J': case 'X':
                val += 8;
                break;
            case 'Q': case 'Z':
                val += 10;
                break;
        }
    }

    return val;
}