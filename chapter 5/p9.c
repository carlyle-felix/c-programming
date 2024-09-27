// compute which date comes earlier between 2 given dates.

#include <stdio.h>

int main(void){

    int mm1, mm2, mm_low, mm_hi, dd1, dd2, dd_low, dd_hi, yy1, yy2, yy_low, yy_hi;

    printf("Enter first date (mm/dd/yy):    ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);
    printf("Enter second date (mm/dd/yy):    ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);
    
    if (yy1 < yy2){ //if first year is greater than second
        yy_low = yy1;
        yy_hi = yy2;
        mm_low = mm1;
        mm_hi = mm2;
        dd_low = dd1;
        dd_hi = dd2;
    } else if (yy1 == yy2){ // if years are the same
        yy_low = yy_hi = yy1;
        if (mm1 < mm2){ 
            mm_low = mm1;
            mm_hi = mm2;
            dd_low = dd1;
            dd_hi = dd2;
        } else if (mm1 == mm2){ //if months are the same
            mm_low = mm_hi = mm1;
            if (dd1 < dd2){
                dd_low = dd1;
                dd_hi = dd2;        
            } else {
                dd_low = dd2;
                dd_hi = dd1;
            }
        } else {
            mm_hi = mm1;
            mm_low = mm2;
            dd_low = dd2;
            dd_hi = dd1;
        }
        }
    else {
        yy_low = yy2;
        yy_hi = yy1;
        mm_hi = mm1;
        mm_low = mm2;
        dd_low = dd2;
        dd_hi = dd1;
    }
    
    
    if (mm1 == mm2 && dd1 == dd2 && yy1 == yy2) 
        printf("Those are the same dates.\n");
    else 
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm_low, dd_low, yy_low, mm_hi, dd_hi, yy_hi);

    return 0;
}
