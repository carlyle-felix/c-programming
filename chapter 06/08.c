// print a one-month calendar
#include <stdio.h>

int main(void) {

    int n, i, start, date;

    printf("Enter number of days in month:  ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat):  ");
    scanf("%d", &start);

    for (i = 0, date = 1; date <= n; ++i) {

        if (start > i)
            printf("   ");
        else 
            printf("%3d", date++);
        
        if (i % 7 == 0)
            printf("\n");
    }    
    printf("\n");
    return 0;
}