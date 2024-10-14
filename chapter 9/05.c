// prints an n * n magic square
#include <stdio.h>

void create_magic_square(int n, char magic_sqaure[][n]);
void print_magic_sqaure(int n, char magic_sqaure[][n]);

int main(void) {
    
    int n;
    
    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char grid[n][n];
    create_magic_square(n, grid);
    print_magic_sqaure(n, grid);

    return 0;
}

void create_magic_square(int n, char magic_square[][n]) {
    int count = 1, row, col;

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            magic_square[row][col] = 0;
        }
    }

    row = 0;
    col = n / 2;
    magic_square[row][col] = 1;
    while (count < n * n) {
        if (row == 0 && col < n - 1)
            magic_square[row = n - 1][++col] = ++count;
        else if (row > 0 && col == n - 1)
            magic_square[--row][col = 0] = ++count;
        else if (row == 0 && col == n - 1)
            magic_square[++row][col] = ++count;
        else if (magic_square[row - 1][col + 1])
            magic_square[++row][col] = ++count;
        else if (!magic_square[row - 1][col + 1])
            magic_square[--row][++col] = ++count;
    }
}

void print_magic_sqaure(int n, char magic_square[][n]) {

    int row, col;

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%5d", magic_square[row][col]);
        }
        printf("\n");
    }
}