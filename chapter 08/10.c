// compute closest departure and arrival times on a daily flgiht schedule.
#include <stdio.h>
#define N ((int) (sizeof(d) / sizeof(d[0])))
#define HOURS 1440

int main(void){

    int hh, mm, minutes, departure = 0, arrival = 0, i = 0, d[] =  {[0] = 8 * 60, [1] = 9 * 60 + 43, [2] = 11 * 60 + 19, [3] = 12 * 60 + 47,
                                                                    [4] = 14 * 60, [5] = 15 * 60 + 45, [6] = 19 * 60, [7] = 21 * 60 + 45},
                                                            a[] =  {[0] = 10 * 60 + 16, [1] = 11 * 60 + 52, [2] = 13 * 60 + 31, [3] = 15 * 60,
                                                                    [4] = 16 * 60 + 8, [5] = 17 * 60 + 55, [6] = 21 * 60 + 20, [7] = 23 * 60 + 58};  
    char ap;

    printf("Enter a 24-hour time:  ");
    scanf("%d:%d", &hh, &mm);

    if (hh == 0)
        minutes = mm;
    else 
        minutes = hh * 60 + mm;

    while (departure == 0) {
        if (minutes > d[N - 1]) {
            departure = d[N - 1];
            arrival = a[N - 1];
        } else if (minutes < d[N % N]) {
            departure = minutes < (d[N % N] - (HOURS - d[N - 1])) / 2 ? d[N - 1] : d[N % N];
            arrival = minutes < (d[N % N] - (HOURS - d[N - 1])) / 2 ? a[N - 1] : a[N % N];
        } else if (minutes >= d[i] && minutes <= d[i + 1]) {
            departure = minutes < (d[i] + d[i + 1]) / 2 ? d[i] : d[i + 1];
            arrival = minutes < (d[i] + d[i + 1]) / 2 ? a[i] : a[i + 1];
        }
        i++;
    }

    if (minutes < 1440) {
        i = 0;
        minutes = departure;
        printf("Closest departure time is:  ");
        do {
            if (i == 1)
                printf(", arriving at ");
            if (minutes >= HOURS / 2) {
                ap = 'p';
                if (minutes > HOURS / 2 + 59) {
                    hh = minutes / 60 - 12;
                    mm = minutes % 60;
                } else {
                    hh = 12;
                    mm = minutes % 60;
                }
            } else if (minutes < HOURS / 2) {
                ap = 'a';
                if (minutes > 59) {
                    hh = minutes / 60;
                    mm = minutes % 60;
                } else {
                    hh = 12;
                    mm = minutes % 60;
                }
            }
            printf("%.2d:%.2d %c.m.", hh, mm, ap);
            minutes = arrival;
            i++;
        } while (i < 2);
        printf("\n");
    } else 
        printf("Invalid time.\n"); 
   
    return 0;
}