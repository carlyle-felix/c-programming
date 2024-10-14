// sort a series of numbers in ascending order
#include <stdio.h>
#define N 10

void selection_sort(int a[], int low, int high);

int main(void) {
    
    int i, num[N];

    printf("Enter %d integers to be sorted:    ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }

    selection_sort(num, 0, N - 1);

    printf("In ascending order:   ");
    for (i = 0; i < N; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int low, int high) {
  
    if (high == low ) {
        return;
    }

    int i, temp, max = 0, max_element;

    temp = a[high];
    for(i = 0; i <= high; i++) {
        if (max < a[i]) {
            max = a[i];
            max_element = i;
        }
    }
    a[high] = max;
    a[max_element] = temp;

    return selection_sort(a, low, high - 1);
}