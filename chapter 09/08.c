// simulate a game of craps
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    char c;
    int total, point, win = 0, loss = 0;

    while (1) {

        total = 0;
        printf("Press Enter to roll...\n");
        if ((c = tolower(getchar())) == '\n') {
            total = roll_dice();
            printf("You rolled: %d\n", total);

            if (total == 7 || total == 11) {
                printf("You Win!\n");
                win++;
            } else if (total == 2 || total == 3 || total == 12) {
                printf("You lose!\n");
                loss++;
            } else {
                point = total;
                printf("Your point is:   %d\n", total);

                while (1) {

                    printf("Press Enter to roll...\n");
                    if ((c = tolower(getchar())) == '\n') {
                        total = roll_dice();
                        printf("You rolled: %d\n", total);
                        if (total == point) {
                            printf("You win!\n");
                            win++;
                            break;
                        } else if (total == 7) {
                            printf("You lose!\n");
                            loss++;
                            break;
                        }
                    }
                }
            }

            printf("Play again?\n");
            if (!play_game()) 
                break;
        }
    }
    printf("Wins:   %d  losses:  %d\n", win, loss);
}

int roll_dice(void) {
    srand((unsigned) time(NULL));

    return rand() % 6 + rand() % 6 + 2;
}

bool play_game(void) {
    char c;
    if ((c = tolower(getchar())) == 'y') {
        return true;
    } else {
        return false;
    }
}