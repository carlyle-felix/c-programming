// display table of squares for n, pausing for input (Enter) after every 24 rows
#include <stdio.h>

int main(void) {
    
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar();
    
    for (i = 1; i <= n; i++) {
        
        printf("%15d%15d\n", i, i * i);
        if (i % 24 == 0 && i != n) {
            printf("Press Enter to continue...");
            getchar();
        }        
    }        
    return 0;
}