// translates alphabetic phone number into numeric form
#include <stdio.h>
#include <ctype.h>

int main(void) {

    char ch = 0, numeric[15];
    int i = 0, sum = 0;

    printf("Enter phone number: ");
    while (ch != '\n') {
        ch = (char) toupper(getchar());
        sum++;
        switch (ch) {
            case '0':
                numeric[i++] = '0';
                break;
            case '1':
                numeric[i++] = '1';
                break;
            case 'A': case 'B': case 'C': case '2':
                numeric[i++] = '2';
                break;
            case 'D': case 'E': case 'F': case '3':
                numeric[i++] = '3';
                break;
            case 'G': case 'H': case 'I': case '4':
                numeric[i++] = '4';
                break;
            case  'J': case 'K': case 'L': case '5':
                numeric[i++] = '5';
                break;
            case 'M': case 'N': case 'O': case '6':
                numeric[i++] = '6';
                break;
            case 'P': case 'Q': case 'R': case 'S': case '7':
                numeric[i++] = '7';
                break;
            case 'T': case 'U': case 'V': case '8':
                numeric[i++] = '8';
                break;
            case 'W': case 'X': case 'Y': case 'Z': case '9':
                numeric[i++] = '9';
                break;
            case '-':
                numeric[i++] = '-';
                break;
        } 
    }

    i = 0;
    printf("In numeric form:   ");
    while (i < sum) {
        putchar(numeric[i++]);
    }
    printf("\n");
    
    return 0;
}