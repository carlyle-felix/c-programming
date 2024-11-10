// Checks planet names
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_PLANETS 9

bool compstr(char *inputstr, char *str);

int main(int argc, char *argv[]) {

    char *planets[] =  {"Mercury", "Venus", "Earth",
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};
    int i, j;
    
    for ( i = 1; i < argc; i++ ) {
        for (j = 0; j < NUM_PLANETS; j++) {
            if (compstr(argv[i], planets[j])) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS) {
            printf("%s is not a planet\n", argv[i]);
        }
    }    
    return 0;
}

bool compstr(char *inputstr, char *str) {

    int i;

    while (*str) {
        if (toupper(*inputstr++) != toupper(*str++)) {
            return false;
        }
    }
    return true;
}