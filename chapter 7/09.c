// convert 12-hour time to 24-hour time
#include <stdio.h>
#include <ctype.h>

int main(void) {

    char ap;
    int h, hh, m;

    printf("Enter a 12-hour time:   ");
    scanf("%d:%d ", &h, &m);
    ap = tolower(getchar());

    if (ap == 'a') {
        if (h == 12)
            hh = 0;
        else
            hh = h;
    } if (ap == 'p') {
        if (h == 12)
            hh = h;
        else 
            hh = h + 12;
    }
    printf("Equivalent 24-hour time:    %.2d:%.2d\n", hh, m);

    return 0;
}