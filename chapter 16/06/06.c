// compute which date comes earlier between 2 given dates.

#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int compare_dates(struct date d1, struct date d2);

int main(void){

    struct date d1, d2;
    int test;
<<<<<<< HEAD
=======
    
>>>>>>> 5ca9134 (complete chapter 16)
    printf("Enter first date (mm/dd/yy):    ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date (mm/dd/yy):    ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
    
    test = compare_dates(d1, d2);

    if (test == 0) 
        printf("Those are the same dates.\n");
    else if (test > 0)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
    else    
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);        
    return 0;
}

int compare_dates(struct date d1, struct date d2) {
    
    if (d1.year < d2.year) {
        return 1;
    } else if (d1.month < d2.month) {
        return 1;
    } else if (d1.month < d2.month) {
        return 1;
    } else if (d1.year > d2.year) {
        return -1;
    } else if (d1.month > d2.month) {
        return -1;
    } else if (d1.day > d2.day) {
        return -1;
    } 

    return 0;
}