//table showing how many times each digit appears & take multiple numbers
#include <stdio.h>

int main(void) {
    
    int digit, i, occ[10] = {0};
    long n;
   
    printf("Enter a positive number (0 to terminate): ");
    scanf("%ld", &n);
    
    while (n > 0) {
        while (n > 0) {
            digit = n % 10;
            occ[digit]++;
            n /= 10;       
        }
        printf("Enter a positive number (0 to terminate): ");
        scanf("%ld", &n); 
    }
    printf("Digit:");
    for (i = 0; i < 10; i++) {
        if (i == 0)
            printf("%10d", i);
        else
            printf("%3d", i);
    }
    printf("\nOccurrences:");
    for (i = 0; i < 10; i++) {
        if (i == 0)
            printf("%4d", occ[i]);
        else
            printf("%3d", occ[i]);
    }
    printf("\n");

    return 0;
}
// Rather recycle variables no longer needed than declare new ones, i is not needed.
