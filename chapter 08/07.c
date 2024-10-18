// read 5 x 5 array then print row and column sums
#include <stdio.h>
#define ROW_NUMBER 5
#define COL_NUMBER 5

int main(void) {

    int sum = 0, num[ROW_NUMBER][COL_NUMBER] = {0}, row, col;

    for (row = 0; row < ROW_NUMBER; row++) {
        printf("Enter row %d:   ", row + 1);
        for (col = 0; col < COL_NUMBER; col++) {
            scanf("%d", &num[row][col]);
        }
    }

    printf("\nRow totals:     ");
    for (row = 0, sum = 0; row < ROW_NUMBER; row++, sum = 0) {
        for (col = 0; col < COL_NUMBER; col++) {
            sum += num[row][col];
        }
        printf("%d ", sum);
    }
    
    printf("\nColumn totals:    ");
    for (sum = 0, col = 0; col < COL_NUMBER; col++, sum = 0) {
        for (row = 0; row < ROW_NUMBER; row++) {
            sum += num[row][col];
        }
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}