// Caesar Cipher encryption
#include <stdio.h>
#include <string.h>

#define N 80

void encrypt(char *message, int shift);

int main(void) {

    char message[N + 1], ch;
    int shift, i;

    printf("Enter a message to be encrypted:    ");
    for (i = 0; (ch = getchar()) != '\n' && i < N; i++) {
        message[i] = ch;
    }

    printf("Enter shift amount (1 - 25): ");
    scanf("%d", &shift);
    
    encrypt(message, shift);
    printf("Encrypted message:  %s\n", message);
    
    return 0;
}

void encrypt(char *message, int shift) {
    
    int len = strlen(message);

    while (*message) {
        if (*message <= 'Z' && *message >= 'A') {
            *message = ((*message - 'A') + shift) % 26 + 'A';
        } else if (*message <= 'z' && *message >= 'a') {
            *message = ((*message - 'a') + shift) % 26 + 'a';
        }
        message++;
    }
}