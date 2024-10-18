// translate to B1FF
#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void) {

    char ch, text[N] = {0};
    int i;
    
    printf("Enter message (100 characters):  ");
    for (i = 1; (ch = getchar()) != '\n' && i < N; i++) {
        text[i] = ch;
    }

    printf("In B1FF-speak:  ");
    for(i = 0; i < N; i++) {
        text[i] = text[i] == 'a' ? '4' : text[i]; 
        text[i] = text[i] == 'b' ? '8' : text[i];
        text[i] = text[i] == 'e' ? '3' : text[i];
        text[i] = text[i] == 'i' ? '1' : text[i];
        text[i] = text[i] == 'o' ? '0' : text[i];
        text[i] = text[i] == 's' ? '5' : text[i];   
        putchar(toupper(text[i]));
    }
    printf("!!!!!!!!!!!!\n");

    return 0;
}