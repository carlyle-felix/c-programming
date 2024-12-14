// compute closest departure and arrival times on a daily flgiht schedule.
#include <stdio.h>

#define N (int) (sizeof(times) / sizeof(times[0]))

int main(void){

    struct flight_times {
        int d;
        int a;
    } times[8] =   {{8 * 60, 10 * 60 + 16}, {9 * 60 + 43, 11 * 60 + 52}, {11 * 60 + 19, 13 * 60 + 31}, {12 * 60 + 47, 15 * 60}, 
                    {14 * 60, 16 * 60 + 8}, {15 * 60 + 45, 17 * 60 + 55}, {19 * 60, 21 * 60 + 20}, {21 * 60 + 45, 11 * 60 + 58}};

    int i, hh, mm, minutes;

    printf("Enter a 24-hour time:  ");
    scanf("%d:%d", &hh, &mm);

    if (hh == 0)
        minutes = mm;
    else 
        minutes = hh * 60 + mm;

    printf("Closest departure time is ");
    for (i = 0; i < N; i++) {
        if (minutes >= times[i].d && minutes <= times[i + 1].d) {
            if (minutes < ((times[i].d + times[i + 1].d) / 2)){
                printf("%.2d:%.2d, ", times[i].d / 60, times[i].d % 60);
                printf("arriving at %.2d:%.2d.\n", times[i].a / 60, times[i].a % 60);
                break;
            } else {
                printf("%.2d:%.2d, ", times[i + 1].d / 60, times[i + 1].d % 60);
                printf("arriving at %.2d:%.2d.\n", times[i + 1].a / 60, times[i + 1].a % 60);
                break;
            }
        } else if (minutes > times[7].d || minutes < times[0].d){            // find the closest departure if a given time is between 09:45 p.m. and 08:00 a.m.
            if (minutes < ((times[0].d - (1440 - times[7].d)) / 2) || minutes > times[7].d && minutes < 1440){
                printf("%.2d:%.2d, ", times[7].d / 60, times[7].d % 60);
                printf("arriving at %.2d:%.2d.\n", times[7].a / 60, times[7].a % 60);
                break;
            } else {
                printf("%.2d:%.2d, ", times[0].d / 60, times[0].d % 60);
                printf("arriving at %.2d:%.2d.\n", times[0].a / 60, times[0].a % 60);
                break;
            }
        }
    }

    return 0;
}