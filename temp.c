#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBEROFREROLLS 3
#define NUMBEROFFACES 6
#define NUMBEROFDICE 5

void RollDice(int dice[]);
void PrintRoll(int dice[]);
int HowManyFaces(int dice[], int searchFace);

int main() {
    int dice[NUMBEROFDICE];
    int howMany[NUMBEROFFACES];
    int numberOfRolls = 0;
    int numberOfReRolls = NUMBEROFREROLLS;
    char answer = 'N';
    int ofAKind = 0;
    int FullHouse = 0;
    int TwoPair = 0;
    int CSlam = 0;
    int LargeStraight = 0;
    int SmallStraight = 0;
    int i = 0;

    srand(time(NULL)); // initialize random number generator

    do {
        RollDice(dice);
        PrintRoll(dice);
        numberOfRolls++;

        // Count number of faces for each die roll
        for (i = 0; i < NUMBEROFFACES; i++) {
            howMany[i] = HowManyFaces(dice, i+1);
        }

        // Check for different combinations
        for (i = 0; i < NUMBEROFFACES; i++) {
            if (howMany[i] == 3) {
                FullHouse += 3;
            }
            if (howMany[i] == 2) {
                FullHouse += 2;
                TwoPair++;
            }
            if (howMany[i] == NUMBEROFDICE) {
                CSlam++;
            }
            if (howMany[i] == 1) {
                LargeStraight++;
            } else if (howMany[i] == 0 && LargeStraight > 0 && LargeStraight < 5) {
                LargeStraight = 0;
            }
            if (howMany[i] >= 1) {
                SmallStraight++;
            } else if (howMany[i] == 0 && SmallStraight > 0 && SmallStraight < 4) {
                SmallStraight = 0;
            }
            if (howMany[i] == 4) {
                ofAKind = 4;
            }
            if (howMany[i] == 3) {
                ofAKind = 3;
            }
        }

        // Print the result of each roll
        if (LargeStraight == 5) {
            printf("Large Straight\n");
        } else if (SmallStraight >= 4) {
            printf("Small Straight\n");
        } else if (FullHouse == 5) {
            printf("Full House\n");
        } else if (CSlam == 1) {
            printf("CSlam!!\n");
        } else if (ofAKind == 4) {
            printf("Four of a kind\n");
        } else if (ofAKind == 3) {
            printf("Three of a kind\n");
        } else if (TwoPair == 2) {
            printf("Two Pair\n");
        } else {
            printf("You have nothing\n");
        }

        if (numberOfRolls != NUMBEROFREROLLS) {
            printf("Do you want to reroll? (Y/N) ");
            scanf(" %c", &answer);
            }
        }
    }
    while (answer == 'Y' || answer == 'y') {
                ofAKind = 0;
                FullHouse = 0;
                TwoPair = 0;
                CSlam = 0;
                LargeStraight = 0;
                SmallStraight = 0;
   
}