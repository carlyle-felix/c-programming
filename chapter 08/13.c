// display name and surname as surname, first letter of name.
#include <stdio.h>
#include <ctype.h>

int main(void) {

    char i, first, last[20] = {0};

    printf("Enter a first and last name:    ");
    first = toupper(getchar());

    while (getchar() != ' ');

    printf("You entered the name:   ");
    for (i = 0; (last[i] = getchar()) != '\n'; i++) {
        if (i == 0) 
            last[i] = toupper(last[i]);
        putchar(last[i]);
    }
    printf(", %c\n", first);

    return 0;
}