    // test additional row price up to $9999.99
  
#include <stdio.h>

int main(void){

    int item, d, m, y;
    float price;
    // int itema, da, ma, ya;
    // float pricea;

    printf("Enter item number:  #");
    scanf("%d", &item);
    // printf("Enter item number:  ");
    // scanf("%d", &itema);

    printf("Enter unit price:  $");
    scanf("%f", &price);
    // printf("Enter unit price:   ");
    // scanf("%f", &pricea);

    printf("Enter purchase date (mm/dd/yyyy):    ");
    scanf("%d/%d/%d", &m, &d, &y);
    // printf("Enter purchase date (mm/dd/yyyy):    ");
    // scanf("%d/%d/%d", &ma, &da, &ya);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-16d$%7.2f%9d/%d/%d\n", item, price, m, d, y);
    // printf("%-16d$%7.2f%9d/%d/%d\n", itema, pricea, ma, da, ya);

    return 0;
}