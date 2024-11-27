#include "quick-sort.h"

void quicksort(int a[], int low, int high) {
    
    int middle;
    
    if (low >= high) {
        return;
    }

    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high) {

    int partition_element = a[low];
    for (;;) {
        
        while (low < high && partition_element <= a[high]) {
            high--;
        }
        if (low >= high) { 
            break;
        }
        a[low++] = a[high];

        while (low < high && a[low] <= partition_element) {
            low++;
        }
        if (low >= high) {
            break;
        }
        a[high--] = a[low];
    }
    
    a[high] = partition_element;
    return high;
}