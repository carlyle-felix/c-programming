// calculate the average word length of a sentence
#include <stdio.h>

int main(void) {

    char ch;
    int sum, space;

    printf("Enter a sentence:   ");
    
    ch = getchar();
    for (sum = 0, space = 0; ch != '\n'; sum++) {
        ch = getchar();
        if (ch == ' ')
            ++space;
    }
    printf("%.1f\n", (float) (sum - space) / (space + 1));
    
    return 0;
}