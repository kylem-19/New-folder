// Kyle Moore 1002073209
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5
void printcard();
void fillcard();
int picknumber();
int checkrow();
int checkcolumn();
int checknumb();





int picknumber(int card[ROWS][COLS], int realnumb)
{

    
}

void fillcard(int card[ROWS][COLS])
{
    int DUP[COLS] = {0};
    int end, start;
    int num = 0;
    int counter = 0;

    for (int i = 0; i < COLS; i++)
    {
        num = rand()%15 + (15*COLS)+1;
        while (i < counter)
        {
            if (DUP[i] = num)
            {
                num = rand()%15 + (15*COLS)+1;
                i = 0;
            }
            else
            {
                i++;
            }
            
        }
        // DUP[76] += num += card[ROWS][COLS];
        counter++;
        i = 0;
    }
}

void printcard(int bingo[ROWS][COLS])
{
    
}

int main(void)
{
    srand(time(0));
    int counter;
    int bingocard[ROWS][COLS] = {};
    fillcard(bingocard);

    while (counter < 75)
    {
    
    }
    
}