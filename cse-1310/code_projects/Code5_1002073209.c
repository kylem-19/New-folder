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
    int dice[];
    int HowMany[];
    int numberOfRolls = 0, numberOfReRolls = NUMBEROFROLLS, ofAKind = 0, FullHouse = 0, TwoPair = 0, CSlam = 0, LargeStraight = 0, SmallStraight = 0, i = 0;
    char answer = 'N';

    do
    {
        RollDice(dice[]);
        printf("You rolled");
        PrintRoll(dice[]);
        numberOfRolls++;
        for (size_t i = 0; i < count; i++)
        {
            howMany[i] = HowManyFaces(dice, i+1);
        }
        

    } while (answer == 'Y' && numberOfRolls < numberOfReRolls);
    



}