// a program that converts numerical grade into a letter grade
#include <stdio.h>

int main(void){

    int i, j, k, x, y;
    
    printf("Input numerical grade:    ");
    scanf("%d", &i);
    
    if (i >= 0 && i <= 100)
        i /= 10;    
    
    switch (i){
        case (10): printf("Letter grade:    A\n");
                    break;
        case (9):   printf("Letter grade:    A\n");
                    break;
        case (8):   printf("Letter grade:    B\n");
                    break;
        case (7):   printf("Letter grade:    C\n");
                    break;
        case (6):   printf("Letter grade:    D\n");
                    break;
        case (5): case (4): case (3): case (2): case (1): case (0):
                    printf("Letter grade:    F\n");
                    break;
        default:    printf("Error: Numerical grade above 100 or below 0.\n");            
    }    
     return 0;
}