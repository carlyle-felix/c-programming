// display name and surname as surname, first letter of name.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverse_name(char *name);

int main(void) {

    char name[51];
    printf("Enter a first and last name:    ");
    gets(name);     // book hasn't covered fgets yet.

    reverse_name(name);
    printf("%s\n", name);

    return 0;
}

void reverse_name(char *name) {

    char ch, first[4], last[26], *c = last;
    int i;

    ch = toupper(*name);
    sprintf(first, ", %c", ch);

    for (i = 1; name[i] != ' '; i++);
   
    *c++ = toupper(name[++i]);
    for (++i; name[i]; i++) {
        *c++ = name[i];
    }
    
    strcpy(name, "\0");
    strcat(strcpy(name, last), first);
}