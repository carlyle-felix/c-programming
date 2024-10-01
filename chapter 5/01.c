// a program that calculates how many digits an input number between 0 and 999 contains.

#include <stdio.h>

int main(void){

    int i;

    printf("Enter a number between 0 and 999:   ");
    scanf("%d", &i);

    if (i >= 0 && i < 10)
        printf("The number %d has 1 digit.\n", i);
    
    else if (i >= 10 && i < 100)
        printf("The number %d has 2 digits.\n", i);
    
    else if (i >= 100 && i < 1000)
        printf("The number %d has 3 digits.\n", i);

    else 
        printf("dumbass.\n");

    return 0;
}