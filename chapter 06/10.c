// compute earliest date.

#include <stdio.h>

int main(void){

    int mm1, mm2, mm_low, mm_hi, dd1, dd2, dd_low, dd_hi, yy1, yy2, yy_low, yy_hi;

    printf("Enter a date (mm/dd/yy):    ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    printf("Enter a date (mm/dd/yy):    ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);
    
    while (dd2 > 0 && mm2 > 0 || yy2 > 0) {
        if (yy1 > yy2) {
            yy_low = yy2;
            mm_low = mm2;
            dd_low = dd2;
        } else if (yy1 < yy2) {
            yy_low = yy1;
            mm_low = mm1;
            dd_low = dd1;
        } else if (mm1 > mm2) {
            yy_low = yy2;
            mm_low = mm2;
            dd_low = dd2;
        } else if (mm1 < mm2) {
            yy_low = yy1;
            mm_low = mm1;
            dd_low = dd1;
        } else if (dd1 > dd2) {
            yy_low = yy2;
            mm_low = mm2;
            dd_low = dd2;
        } else if (dd1 < dd2) {
            yy_low = yy1;
            mm_low = mm1;
            dd_low = dd1;
        }
        
        yy1 = yy_low;
        mm1 = mm_low;
        dd1 = dd_low;
        
        printf("Enter a date (mm/dd/yy) (0/0/0 to stop):    ");
        scanf("%d/%d/%d", &mm2, &dd2, &yy2);
    }
    
    if (dd_low == 0 || mm_low == 0)
        printf("invalid date.\n");
    else
        printf("%.2d/%.2d/%.2d is the earliest date.\n", mm_low, dd_low, yy_low);

    return 0;
}