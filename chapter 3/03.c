#include <stdio.h>

int main(void){

    int gs1, group_id, pub_code, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &pub_code, &item, &check);

    printf("GS1 prefix:         %d\n", gs1);
    printf("Group identidier:   %d\n", group_id);
    printf("Publisher code:     %d\n", pub_code);
    printf("Item number:        %d\n", item);
    printf("Check digit:        %d\n", check);

    //printf("GS1 prefix:\t\t%d\nGroup identifier:\t%d\nPublisher code:\t\t%d\nItem number:\t\t%d\nCheck digit:\t\t%d\n", gs1, group_id, pub_code, item, check);

    return 0;
}