// Kyle Moore
// 1002073029

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBEROFREROLLS 3
#define NUMBEROFFACES 6
#define NUMBEROFDICE 5

void RollDice(int dice[])
{
    for (int i = 0; i < NUMBEROFDICE; i++)
    {
        dice[i] = rand() % NUMBEROFFACES + 1;
    }
}

void PrintRoll(int dice[])
{
    for (int i = 0; i < NUMBEROFDICE; i++)
    {
        printf("%d\t", dice[i]);
    }    
}

int HowManyFaces(int dice[], int SearchFace)
{
    int NumberOfFaces = 0;
    for (int i = 0; i < NUMBEROFDICE; i++)
    {
        if (dice[i] == SearchFace)
        {
            NumberOfFaces++;
        }
        
    }
    return NumberOfFaces;
}

int main(void)
{
    int dice[NUMBEROFDICE];
    int howMany[NUMBEROFFACES];
    int numberOfRolls = 0, numberOfReRolls = NUMBEROFREROLLS;
    char answer = 'N';
    int ofAKind = 0, FullHouse = 0, TwoPair = 0, CSlam = 0, LargeStraight = 0, SmallStraight = 0, i = 0;
    srand(time(0));
    do
    {
        RollDice(dice);
        printf("You rolled \n");
        printf("\n");
        numberOfRolls++;
        printf("Roll #%d", numberOfRolls);
        printf("\n");
        PrintRoll(dice);
        
        

        for (i = 0; i < NUMBEROFFACES; i++)
        {
            howMany[i] = HowManyFaces(dice, i+1);
        }
        
        for (i = 0; i < NUMBEROFFACES; i++)
        {
            if (howMany[i] == 3)
            {
                FullHouse += 3;
            }
            if (howMany[i] == 2)
            {
                FullHouse += 2;
                TwoPair++;
            }
            if (howMany[i] == NUMBEROFDICE)
            {
                CSlam++;
            }
            if (howMany[i] == 1)
            {
                LargeStraight++;
            }
            else if (howMany[i] == 0 && LargeStraight > 0 && LargeStraight < 5)
            {
                LargeStraight = 0;
            }
            if (howMany[i] >= 1)
            {
                SmallStraight++;
            }
            else if (howMany[i] == 0 && SmallStraight > 0 && SmallStraight < 4)
            {
                SmallStraight = 0;
            }
            if (howMany[i] == 4)
            {
                ofAKind = 4;
            }
            if (howMany[i] == 3)
            {
                ofAKind = 3;
            }
        }
        if (LargeStraight == 5)
        {
            printf("\nLarge Straight");
        }
        else if (SmallStraight >= 4)
        {
            printf("\nSmall Straight");
        }
        else if (FullHouse == 5)
        {
            printf("\nFull house");
        }
        else if (CSlam == 1)
        {
            printf("\nCSlam!");
        }
        else if (ofAKind == 4)
        {
            printf("\nFour of a kind");
        }
        else if (ofAKind == 3)
        {
            printf("\nThree of a kind");
        }
        else if (ofAKind == 2)
        {
            printf("\nTwo pairs");
        }
        else
        {
            printf("\nYou have nothing");
        }
        

        if (numberOfRolls != NUMBEROFREROLLS)
        {
            printf("\n");
            printf("\n");
            printf("\nDo you want to reroll? ");
            scanf(" %c", &answer);
            ofAKind = 0;
            FullHouse = 0;
            TwoPair = 0;
            CSlam = 0;
            LargeStraight = 0;
            SmallStraight = 0;
        }

    } while (answer == 'Y' || answer == 'y' && numberOfRolls < numberOfReRolls);
    printf("\n");   
}
