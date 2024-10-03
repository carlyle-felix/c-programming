/* Prints a table of squares using a for statement */
/*
#include <stdio.h>

int main(void) {
    
    int i, n;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
        printf("%15d%15d\n", i, i * i);
    
    return 0;
}
*/
// The largest square printed correctly was 2147395600, within the range of a 32-bit signed int

#include <stdio.h>

int main(void) {
    
    int n;
    short i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
        printf("%10hd%10hd\n", i, i * i);
    
    return 0;
}

// The largest square it printed correctly was 32761, within the range of a 16-bit signed short int

// int is stored in  32-bits and short int is stored in 16-bits.