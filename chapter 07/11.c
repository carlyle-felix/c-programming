// display name and surname as surname, first letter of name.
#include <stdio.h>
#include <ctype.h>

int main(void) {

    char first, last;

    printf("Enter a first and last name:    ");
    first = toupper(getchar());

    while (getchar() != ' ');

    last = toupper(getchar());
    putchar(last);
    while (last != '\n') {
        last = tolower(getchar());
        if (last != '\n')
        putchar(last); 
    }
    
    printf(", %c\n", first);

    return 0;
}