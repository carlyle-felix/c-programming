// Caesar Cipher encryption
#include <stdio.h>
#define N 80
int main(void) {

    char plain[N], encrypt[N], ch;
    int shift, i, sum;

    printf("Enter a message to be encrypted:    ");
    for (sum = 0, i = 0; (ch = getchar()) != '\n' && i < N; i++, sum++) {
        plain[i] = ch;
    }

    printf("Enter shift amount (1 - 25): ");
    scanf("%d", &shift);
    
    printf("Encrypted message:  ");
    for (i = 0; i < sum; i++) {
        if (plain[i] <= 'Z' && plain[i] >= 'A') {
            encrypt[i] = ((plain[i] - 'A') + shift) % 26 + 'A';
        } else if (plain[i] <= 'z' && plain[i] >= 'a') {
            encrypt[i] = ((plain[i] - 'a') + shift) % 26 + 'a';
        } else
            encrypt[i] = plain[i];
        
        putchar(encrypt[i]);
    }
    printf("\n");

    return 0;
}