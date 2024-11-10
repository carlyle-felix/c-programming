#include <stdio.h>
#include <string.h>

int main(void){

    int i;
    char *teen[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Forteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"},
         *ten[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"},
         *one[] = {"-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine"}, str[15];
    
    printf("Enter a two-digit number:    ");
    scanf("%d", &i);
    
    // check input
    if (i > 9 && i < 100) {
        printf("You entered the number ");
    } else  {
        printf("The number you entered is not a two-digit number.\n");
    }

    if (i < 20) {
        printf("%s\n", teen[i - 10]);
    } else {

        if (i % 10 == 0) {
            printf("%s\n", ten[(i / 10) - 2]);
        } else {
            strcpy(str, ten[(i / 10) - 2]);
            strcat(str, one[(i % 10) - 1]);
            printf("%s\n", str);
        }
    }
    
    return 0;
}