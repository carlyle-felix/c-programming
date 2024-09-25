// compute closest departure and arrival times on a daily flgiht schedule.
#include <stdio.h>

int main(void){

    int hh, mm, minutes, d1, d2, d3, d4, d5, d6, d7, d8, d8_d1;

    printf("Enter a 24-hour time:  ");
    scanf("%d:%d", &hh, &mm);

    if (hh == 0)
        minutes = mm;
    else 
        minutes = hh * 60 + mm;

    // departure times in minutesutes since midnight
    d1 = 8 * 60;
    d2 = 9 * 60 + 43;
    d3 = 11 * 60 + 11;
    d4 = 12 * 60 + 47;
    d5 = 14 * 60;
    d6 = 15 * 60 + 45;
    d7 = 19 * 60;
    d8 = 21 * 60 + 45;

    d8_d1 = (d1 - (1440 - d8)) / 2;     // find the time that sits at the mid-point between 09:45 p.m. and 08:00 a.m.

    printf("Closest departure time is:  ");

    if (minutes > 1400)
        printf("null");
    else if (minutes >= d1 && minutes < d2)
        if (minutes - d1 < d2 - minutes)
            printf("8:00 a.m., arriving at 10:16 a.m.\n");
        else 
            printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (minutes >= d2 && minutes < d3)
        if (minutes - d2 < d3 - minutes)
            printf("9:43 a.m., arriving at 11:52 a.m.\n");
        else
            printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (minutes >= d3 && minutes < d4)
        if (minutes - d3 < d3 - minutes)
            printf("11:19 a.m., arriving at 1:31 p.m.\n");
        else 
            printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (minutes >= d4 && minutes < d5)
        if (minutes - d4 < d5 - minutes)
            printf("12:47 p.m., arriving at 3:00 p.m.\n");
        else 
            printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (minutes >= d5 && minutes < d6)
        if (minutes - d5 < d6 - minutes)
            printf("2:00 p.m., arriving at 4:08 p.m.\n");
        else 
            printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (minutes >= d6 && minutes < d7)
        if (minutes - d6 < d7 - minutes)
            printf("3:45 p.m., arriving at 5:55 p.m.\n");
        else 
            printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else if (minutes >= d7 && minutes <= d8)
        if (minutes - d7 < d8 - minutes)
            printf("7:00 p.m., arriving at 9:20 p.m.\n");
        else 
            printf("9:45 p.m., arriving at 11:58 p.m.\n");
    else if (minutes > d8_d1)
            printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else
            printf("9:45 p.m., arriving at 11:58 p.m.\n");
   
    return 0;
}