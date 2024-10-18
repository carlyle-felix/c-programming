#include <stdio.h>

int main(void){

    int hh, mm;

    printf("Enter a 24-hour time:   ");
    scanf("%d:%d", &hh, &mm);

    printf("Equivalent 12-hour time:    ");

    if (hh > 12 && hh <= 23){
        hh = hh - 12;
        printf("%d:%.2d PM\n", hh, mm);
    }
    else if (hh == 00){
        hh = 12;
        printf("%d:%.2d AM\n", hh, mm);
    }
    else if (hh == 12){
        printf("%d:%.2d PM\n", hh, mm);
    }
    else 
        printf("%d:%.2d AM\n", hh, mm);
    
    return 0;
}