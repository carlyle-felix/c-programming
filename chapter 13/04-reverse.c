// Echos command-line arguements in reverse
#include <stdio.h>

int main(int argc, char *argv[]) {

    while (--argc) {
        printf("%s ", argv[argc]);
    }
    printf("\n");
    return 0;
}