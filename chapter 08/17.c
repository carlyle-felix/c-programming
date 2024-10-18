// prints an n * n magic square
#include <stdio.h>

int main(void) {

    int count = 1, n, row, col;

    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int grid[n][n];
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            grid[row][col] = 0;
        }
    }

    row = 0;
    col = n / 2;
    grid[row][col] = 1;
    while (count < n * n) {
        if (row == 0 && col < n - 1)
            grid[row = n - 1][++col] = ++count;
        else if (row > 0 && col == n - 1)
            grid[--row][col = 0] = ++count;
        else if (row == 0 && col == n - 1)
            grid[++row][col] = ++count;
        else if (grid[row - 1][col + 1])
            grid[++row][col] = ++count;
        else if (!grid[row - 1][col + 1])
            grid[--row][++col] = ++count;
    }

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%5d", grid[row][col]);
        }
        printf("\n");
    }

    return 0;
}