// Kyle Moore 1002073209
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5

void printcard(int[][COLS]);
void fillcard(int[][COLS]);
int picknumber(int[], int);
int checkrow(int[][COLS]);
int checkcolumn(int[][COLS]);
int checkdiag(int[][COLS]);
int checknumb(int[][COLS], int);

void printcard(int bingo[ROWS][COLS]) 
{
    printf("%6s  %6s  %6s  %6s  %6s", "B", "I", "N", "G", "O");
    printf("\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("--------");
    }
    printf("\n");

    for (int j = 0; j < ROWS; j++) 
    {
        for (int k = 0; k < COLS; k++) 
        {
            if (bingo[j][k] == 0) 
            {
                printf("| %5s ", "X");
            } 
            else 
            {
                printf("| %5d ", bingo[j][k]);
            }
        }
        printf("%1s\n", "|");
        for (int p = 0; p < 5; p++) 
        {
            printf("--------");
        }
        printf("\n");
    }
}

void fillcard(int card[ROWS][COLS]) 
{
    int DUP[74] = {0};
    int num;
    int counter = 0;

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            num = rand() % 15 + (15 * j) + 1;
            while (DUP[num - 1] == 1) 
            {
                num = rand() % 15 + (15 * j) + 1;
            }
            card[i][j] = num;
            DUP[num - 1] = 1;
            counter++;
        }
    }
    card[2][2] = 0;
}

int picknumber(int drawn[], int counter) 
{
    int numb;
    char col;
    
    do 
    {
        numb = rand() % 75 + 1;
    } 
    while (drawn[numb - 1] == 1);

    if (numb >= 1 && numb <= 15)
    {
        col = 'B';
    }
    else if (numb >= 16 && numb <= 30)
    {
        col = 'I';
    }
    else if (numb >= 31 && numb <= 45)
    {
        col = 'N';
    }
    else if (numb >= 46 && numb <= 60)
    {
        col = 'G';
    }
    else if (numb >= 61 && numb <= 75)
    {
        col = 'O';
    }

    drawn[numb - 1] = 1;
    counter++;
    printf("The next number is %c%d\n\n", col, numb);
    return numb;
}

int checkrow(int bingo[ROWS][COLS])
{
    int row = 0;
    for (int i = 0; i < ROWS; i++) 
    {
        int completed = 1;
        for (int j = 0; j < COLS; j++) 
        {
            if (bingo[i][j] != 0) 
            {
                completed = 0; // false
            }
        }
        if (completed)
        {
            row = 1; // true
        }
        
    }
    return row;
}

int checkcolumn(int bingo[ROWS][COLS]) 
{
    int col = 0;
    for (int i = 0; i < COLS; i++) 
    {
        int completed = 1;
        for (int j = 0; j < ROWS; j++) 
        {
            if (bingo[j][i] != 0) 
            {
                completed = 0; // false
            }
        }
        if (completed)
        {
            col = 1; // true
        }
    }
    return col;
}

int checkdiag(int bingo[ROWS][COLS])
{
    int diag = 0;
}

int checknumb(int bingo[ROWS][COLS], int passnum) 
{
    int found = 0;  
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            if (bingo[i][j] == passnum) 
            {
                bingo[i][j] = 0;
                found = 1;  //true
            }
        }
    }
    return found;  
}

int main(void) 
{
    srand(time(0));
    int pickednum[75] = {0};
    int counter = 0;
    int bingocard[ROWS][COLS] = {0};
    int passnum = 0;
    char answer[4] = {};
    int youwin = 0;
    fillcard(bingocard);
    printcard(bingocard);

    while (counter < 75 && youwin == 0) 
    {
        passnum = picknumber(pickednum, counter);
        printf("Do you have it? (Y/N) \n");
        scanf("%s", answer);
        // answer[0] = 'y';
        if (answer[0] != 'Y' && answer[0] != 'y') 
        {
            printcard(bingocard);
            counter++;
        } 
        else 
        {
            if (checknumb(bingocard, passnum) && (answer[0] == 'y' || answer[0] == 'Y')) 
            {
                printcard(bingocard);
                if (checkrow(bingocard))
                {
                    printf("You filled out a row - BINGO!!!\n");
                    youwin = 1;
                }
                else if (checkcolumn(bingocard))
                {
                    printf("You filled out a column - BINGO!!!\n");
                    youwin = 1;
                }
                
            }
            else
            {
                printf("\nThe value  is not on your BINGO card - are you trying to cheat??\n\n");
                printcard(bingocard);
            }
        }
    }
    return 0;
}
