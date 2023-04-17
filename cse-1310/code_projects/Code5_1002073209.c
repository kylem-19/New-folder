// Kyle Moore //
// 1002073029 //

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define NUMBEROFROLLS 3
#define NUMBEROFFACES 6
#define NUMBEROFDICE 5

void RollDice(int dice[])
{
    for (int i = 0; i < NUMBEROFDICE; i++)
    {
        dice[i] = rand() % NUMBEROFDICE;
    }
}
void PrintRoll(int dice[])
{
    for (int i = 0; i < NUMBEROFDICE; i++)
    {
        printf(dice[i]);
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
        return NumberOfFaces;
    }
}
int main(void)
{
    int dice[NUMBEROFDICE];
    int HowMany[NUMBEROFFACES];
    int numberOfRolls = 0, numberOfReRolls = NUMBEROFROLLS, ofAKind = 0, FullHouse = 0, TwoPair = 0, CSlam = 0, LargeStraight = 0, SmallStraight = 0, i = 0;
    char answer = 'N';

    do
    {
        RollDice(dice[i]);
        printf("You rolled");
        PrintRoll(dice[i]);
        numberOfRolls++;
        for (i = 0; i < NUMBEROFFACES; i++)
        {
            HowMany[i] = HowManyFaces(dice, i+1);
        }
        
        for ( i = 0; i < NUMBEROFFACES; i++)
        {
            if (HowMany[i] = 3)
            {
                FullHouse += 3;
            }
            if (HowMany[i] = 2)
            {
                FullHouse +=2;
                TwoPair++;
            }
            if (HowMany[i] = NUMBEROFDICE)
            {
                CSlam++;
            }
            if (HowMany[i] = 1)
            {
                LargeStraight++;
            }
            else if (HowMany[i] = 0 && 5 < LargeStraight > 0)
            {
                LargeStraight = 0;
            }
            if (HowMany[i] >= 1)
            {
                SmallStraight++;
            }
            else if (HowMany[i] = 0 && 4 <SmallStraight > 0)
            {
                SmallStraight = 0;
            }
            if (HowMany[i] = 4)
            {
                ofAKind = 4;
            }
            if (HowMany[i] = 3)
            {
                ofAKind = 3;
            }
            
        }
        if (LargeStraight= 5)
        {
            printf("Large Straight");
        }
        else if (SmallStraight >= 4)
        {
            printf("Small Straight");
        }
        else if (FullHouse = 5)
        {
            printf("Full house");
        }
        else if (CSlam = 1)
        {
            printf("CSlam!");
        }
        else if (ofAKind = 4)
        {
            printf("Four of a kind!");
        }
        else if (ofAKind = 3)
        {
            printf("Three of a kind");
        }
        else if (TwoPair = 2)
        {
            printf("Two Pair");
        }
        else
        {
            printf("You have nothing");
        }
        if (numberOfRolls != NUMBEROFROLLS)
        {
            printf("Do yuo want to reroll?");
            scanf("%c", &answer);

            ofAKind = 0;
            FullHouse = 0;
            TwoPair = 0;
            CSlam = 0;
            LargeStraight = 0;
            SmallStraight = 0;
        }

    } while (answer == 'Y' && numberOfRolls < numberOfReRolls);
    
    



}