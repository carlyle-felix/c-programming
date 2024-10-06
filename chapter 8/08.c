// prompt for five quiz grades for each of five students then compute:  total and average for each student and average, high and low for each quiz.                                            
// student = row
#include <stdio.h>
#define STUDENT_NUMBER 5
#define QUIZ_NUMBER 5

int main(void) {

    int row, col;
    float num[STUDENT_NUMBER][QUIZ_NUMBER] = {0}, sum = 0, col_max = 0, col_min;

    for (row = 0; row < STUDENT_NUMBER; row++) {
        printf("Enter studen %d quiz grades:   ", row + 1);
        for (col = 0; col < QUIZ_NUMBER; col++) {
            scanf("%f", &num[row][col]);
        }
    }
    printf("\nSTUDENT:\n");
    for (sum = 0, row = 0; row < STUDENT_NUMBER; row++, sum = 0) {
        for (col = 0; col < QUIZ_NUMBER; col++) {
            sum += num[row][col];
        }
        printf("Student %d: Total: %.1f\t", row + 1, sum);
        sum /= col;
        printf("Average: %.2f\n", sum);
    }
    printf("\nQUIZ:\n");
    for (sum = 0, col = 0, col_max = num[0][col], col_min = num[0][col]; col < QUIZ_NUMBER; col++, col_max = num[0][col], col_min = num[0][col], sum = 0) {
        for (row = 0; row < STUDENT_NUMBER; row++) {
            sum += num[row][col];
            col_max = num[row][col] > col_max ? num[row][col] : col_max;
            col_min = num[row][col] < col_min ? num[row][col] : col_min;
        }
        sum /= row;
        printf("Quiz %d: Average: %.2f\tHighest score: %.2f\tLowest score: %.2f\n", col + 1, sum, col_max, col_min);
    }
    printf("\n");

    return 0;
}