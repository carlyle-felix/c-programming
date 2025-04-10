// Maintains a parts database (array version)

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} *inventory;

int num_parts = 0, factor;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void) {

    char code;

    factor = 10;
    inventory = malloc(sizeof(struct part) * factor);
    if (inventory == NULL) {
        printf("Malloc failed to allocate space.\n");
        exit(EXIT_FAILURE);
    }

    for (;;) {
        printf("Enter the operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n');

        switch (code) {
            case 'i':   insert();
                        break;
            case 's':   search();
                        break;
            case 'u':   update();
                        break;
            case 'p':   print();
                        break;
            case 'q':   return 0;
            default:    printf("Illegal code\n");    
        }
        printf("\n");
    }
}

int find_part(int number) {

    int i;

    for (i = 0; i < num_parts; i++) {
        if (inventory[i].number == number) {
            return i;
        }
    }
    return -1;
}

void insert(void) {

    int part_number;
    struct part *temp;

    if (num_parts == factor) {
        factor *= 2;
        temp = realloc(inventory, sizeof(struct part) * factor);
        if (temp == NULL) {
            printf("Malloc failed to allocate more space.\n");
            return;
        }
        inventory = temp;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if (find_part(part_number) >= 0)  {
        printf("Part already exists.\n");
        return;
    }

    inventory[num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Enter quntity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}

void search(void) {
    
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if (i >= 0) {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    } else {
        printf("Part not found.\n");
    }
}

void update(void) {

    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(number);
    if (i >= 0) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        inventory[i].on_hand += change;
    } else {
        printf("Part not found.\n");
    }
}

void print(void) {

    int i;

    printf("Part Number   Part Name                  Quantity on Hand\n");
    for (i = 0; i < num_parts; i++) {
        printf("%7d       %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
    }
}
