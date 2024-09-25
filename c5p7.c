// compute the lowest and highest of four integers.
#include <stdio.h>

int main(void){

    int i, j, k, l, ij_max, ij_min, kl_max, kl_min, max_final, min_final;

    printf("Enter four integers:    ");
    scanf("%d%d%d%d", &i, &j, &k, &l);

    if (i > j){
        ij_max = i;
        ij_min = j;
    } else {
        ij_max = j;
        ij_min = i;
    }
    if (k > l){
        kl_max = k;
        kl_min = l;
    } else {
        kl_max = l;
        kl_min = k;
    }
    if (ij_max > kl_max)
        max_final = ij_max;
    else max_final = kl_max;

    if (ij_min < kl_min)
        min_final = ij_min;
    else min_final = kl_min;

    printf("Largest:    %d\n", max_final);
    printf("Smallest:   %d\n", min_final);

    return 0;
}