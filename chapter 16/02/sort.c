#include "sort.h"

void struct_sort(struct part inventory[], int low, int high) {
  int middle;

  if (low >= high) {
    return;
  }
  middle = split(inventory, low, high);
  struct_sort(inventory, low, middle - 1);
  struct_sort(inventory, middle + 1, high);
}

int split(struct part inventory[], int low, int high) {
  int part_element = inventory[low].number;
  struct part part_struct = inventory[low];

  for (;;) {
    while (low < high && part_element <= inventory[high].number) {
      high--;
    }
    if (low >= high) {
      break;
    }
    inventory[low++] = inventory[high];
    

    while (low < high && inventory[low].number <= part_element) {
      low++;
    }
    if (low >= high) {
      break;
    }
    inventory[high--] = inventory[low];
    
  }
  inventory[high] = part_struct;
  return high;
}