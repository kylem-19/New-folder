#include <stdio.h>
#define ROWS 9
#define COLS 9


void printarray(int array[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}

void fillarray(int array[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            array[i][j] = i, j;
        }
    }
}



int main(void)
{
    int array[ROWS][COLS] = {};

    fillarray(array);   
    printarray(array);
    
}


