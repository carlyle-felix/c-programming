// a "random-walk" across a 10x10 array
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

void generate_random_walk(char grid[][SIZE]);
void print_array(char grid[][SIZE]);

int main(void) {

    char grid[SIZE][SIZE];

    generate_random_walk(grid);
    print_array(grid);
    
    return 0;
}

void generate_random_walk(char grid[][SIZE]) {

    bool assigned[SIZE][SIZE], up = true, down = true, left = true, right = true;;
    int x, y, next, row = 0, col = 0;

    for (x = 0; x < SIZE; x++) {
        for (y = 0; y < SIZE; y++) {
            grid[x][y] = '.';
            assigned[x][y] = false;
        }
    }

    srand((unsigned) time(NULL));
    for (y = 65, x = 0; x < 26;) {
        if (!assigned[row][col]) {
            grid[row][col] = (char) y++;
            assigned[row][col] = true;
            up = down = left = right = true;
            x++;
        } 
        next = rand() % 4;
        if (next == 0) {
            if (col > 0 && assigned[row][col - 1] == false)
                col -= 1;
            else
                up = false;
        } else if (next == 1) {
            if (col < 9 && assigned[row][col + 1] == false)
                col +=1;
            else 
                down = false;
        } else if (next == 2) {
            if (row > 0 && assigned[row - 1][col] == false)
                row -= 1;
            else 
                left = false;
        } else if (next == 3) {
            if (row < 9 && assigned[row + 1][col] == false)
                row += 1;
            else 
                right = false;
        }

        if (up == false && down == false && left == false && right == false) {
            break;
        }
    }
}

void print_array(char grid[][SIZE]) {

    int x, y; 

    for (x = 0; x < SIZE; x++) {
        for (y = 0; y < SIZE; y++) {
            printf("%-2c", grid[x][y]);
        }
        printf("\n");
    }
}