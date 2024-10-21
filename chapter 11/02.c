// compute closest departure and arrival times on a daily flgiht schedule.
#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void){

    int i, hh, mm, minutes, depart, arrive;
    char c;

    printf("Enter a 24-hour time:  ");
    scanf("%d:%d", &hh, &mm);

    if (hh > 23 || mm > 59) {
        printf("Invalid time.\n");
        exit(EXIT_FAILURE);
    } else if (hh == 0) {
        minutes = mm;
    } else {
        minutes = hh * 60 + mm;
    }
    find_closest_flight(minutes, &depart, &arrive);

    minutes = depart;
    for (i = 0; i < 2; i++) {
        hh = minutes / 60;
        mm = minutes % 60;
        c = 'a';
        if (hh > 12) {
            hh -= 12;
            c = 'p';
        }
        if (i == 0) {
            printf("Closest departure time is:  %.2d:%.2d %c.m., arriving at ", hh, mm, c);
        }
        minutes = arrive;
    }
    printf("%.2d:%.2d %c.m.\n", hh, mm, c);
   
    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){

    // departure times in minutesutes since midnight
    int d[8] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45},
        a[8] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58},
        i, midpoint = (d[0] - (1440 - d[7])) / 2;     // find the time that sits at the mid-point between 09:45 p.m. and 08:00 a.m.

    printf("Closest departure time is:  ");

    if (desired_time < midpoint || desired_time > (d[6] + d[7]) / 2) {
        i = 7;
    } else if (desired_time < (d[0] + d[1]) / 2)
        i = 0;
    else if (desired_time < (d[1] + d[2]) / 2)
        i = 1;
    else if (desired_time < (d[2] + d[3]) / 2)
        i = 2;
    else if (desired_time < (d[3] + d[4]) / 2)
        i = 3;
    else if (desired_time < (d[4] + d[5]) / 2)
        i = 4;
    else if (desired_time < (d[5] + d[6]) / 2)
        i = 5;
    else if (desired_time < (d[6] + d[7]) / 2)
        i = 6;

    *departure_time = d[i];
    *arrival_time = a[i];
}