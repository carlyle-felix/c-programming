#include <stdio.h>

#define MAX_DIGITS 10
#define NUM_SEG 7

// prototypes
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

// external arrays
const int segments[MAX_DIGITS][NUM_SEG] =    {{1, 1, 1, 1, 1, 1},
                                        {0, 1, 1},
                                        {1, 1, 0, 1, 1, 0, 1},
                                        {1, 1, 1, 1, 0, 0, 1},
                                        {0, 1, 1, 0, 0, 1, 1},
                                        {1, 0, 1, 1, 0, 1, 1},
                                        {1, 0, 1, 1, 1, 1, 1},
                                        {1, 1, 1},
                                        {1, 1, 1, 1, 1, 1, 1},
                                        {1, 1, 1, 1, 0, 1, 1}};
char digits[4][MAX_DIGITS * 4];

int main(void){

    int count = 1, digit;
    char user_input;

    clear_digits_array(); 

    printf("Enter a number: ");
    while ((user_input = getchar()) != '\n' && count <= MAX_DIGITS) {
        if (user_input >= '0' && user_input <= '9') {
            digit = user_input - '0';
            process_digit(digit, count++);
        }
    }
    print_digits_array();

    return 0;
}

// fill all elements in digits[][] with white-spaces
void clear_digits_array(void) {
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++){
            digits[i][j] = ' ';
        }
    }
}

// overwrite white-spaces in digits[][] where segments need to be displayed in their positions
void process_digit(int digit, int position) {

    char seg[NUM_SEG] = {'_','|','|','_','|','|','_'}; 
    position = position * 4 - 4;
    for (int i = 0; i < NUM_SEG; i++) {
        if (segments[digit][i]) {
            switch (i) {
                case 0:     digits[0][position + 1] = seg[i];
                            break;
                case 1:     digits[1][position + 2] = seg[i];
                            break;
                case 2:     digits[2][position + 2] = seg[i];
                            break;
                case 3:     digits[2][position + 1] = seg[i];
                            break;
                case 4:     digits[2][position + 0] = seg[i];
                            break;
                case 5:     digits[1][position + 0] = seg[i];
                            break;
                case 6:     digits[1][position + 1] = seg[i];
                            break;      
            }
        }
    }
}

// print the entirety of digits[][]
void print_digits_array(void) {
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            putchar(digits[i][j]);
        }
        printf("\n");
    }
}