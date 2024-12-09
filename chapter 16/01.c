#include <stdio.h>
#include <stdbool.h>

#define COUNT ((int) (sizeof(country_codes) / sizeof(country_codes[0])))

int main(void) {

    bool found = false;
    int i, user_code;
    struct dialing_codes {
        char *country;
        int code;
    };

    struct dialing_codes country_codes[] =
        {{"Argentina",              54}, {"Bangladesh",            880},
         {"Brazil",                 55}, {"Burma (Myanmar)",        95},
         {"China",                  86}, {"Colombia",               57},
         {"Congo, Dem. Rep. of",   243}, {"Egypt",                  20},
         {"Ethiopia",              251}, {"France",                 33},
         {"Germany",                49}, {"India",                  91},
         {"Indonesia",              62}, {"Iran",                   98},
         {"Italy",                  39}, {"Japan",                  81},
         {"Mexico",                 52}, {"Nigeria",               234},
         {"Pakistan",               92}, {"Philippines",            63},
         {"Poland",                 48}, {"Russia",                  7},
         {"South Africa",           27}, {"South Koran",            82},
         {"Spain",                  34}, {"Sudan",                 249},
         {"Thailand",               66}, {"Turkey",                 90},
         {"Ukraine",               380}, {"United Kingdom",         44},
         {"United States",           1}, {"Vietnam",                84}};

    printf("Enter dialing code: ");
    scanf("%d", &user_code);

    for (i = 0; i < COUNT; i++) {
        if (country_codes[i].code == user_code) {
            printf("Country Name: %s\n", country_codes[i].country);
            found = true;
            break;
        }
    } 
    if (!found) {
        printf("Country not found.\n");
    }

    return 0;
}
