#include <stdio.h>
#define MAX_ROWS 9
#define MAX_COLS 9
#define TICKET_LIMIT 4

void FillMovieTheater(char map[MAX_ROWS][MAX_COLS], int rows, int seats)
{
    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; i < seats; j++)
        {
            map[i][j] = 'O';
        }   
    }
}

void PrintSeatMap(char map[MAX_ROWS][MAX_COLS], int rows, int seats)
{
    printf("\n    ");
    for (int i = 0; i < seats; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < rows; i++)
    {
        printf("%c ", 'A' + 1);
        for (int j = 0; i < seats; j++)
        {
            printf("%c ", map[i][j]);
        }   
    }
}

int IsSeatSold(char map[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    int seatcheck;

    if (map[rows][cols] == 'X')
    {
        seatcheck = 1;
    }
    else
    {
        seatcheck = 0;
        map[rows][cols] = 'X';
    }
    return seatcheck;
}

int main(void)
{ 
    char MovieTheater[MAX_ROWS][MAX_COLS];
    int rows, cols, ticketsBought, ticketsSold;
    int seatchoice;
    char myRow;
    do
    {
        printf("How many rows does your theater have? (1-%d) ", MAX_ROWS);
        scanf("%d", &rows);

        if (rows > MAX_ROWS || rows <= 1)
        {
            printf("Rows must be between 1 and %d. Please reenter. ", MAX_ROWS);
            scanf("%d", &rows);
        }
    } while (rows > MAX_ROWS || rows < 1);
    
    do
    {
        printf("How many seats are there per row? (1-%d) ", MAX_COLS);
        scanf("%d", &cols);

        if (cols > MAX_COLS || cols < 1)
        {
            printf("Columns must be between 1 and %d. Please reenter.", MAX_COLS);
            scanf("%d", &cols);
        }
    } while (cols > MAX_COLS || cols < 1);
    
    FillMovieTheater(MovieTheater, rows, cols);

    printf("How many tickets would you like to purchase? (limit %d) ", TICKET_LIMIT);
    scanf("%d", &ticketsBought);

    while (ticketsBought > TICKET_LIMIT || ticketsBought < 0)
    {
        printf("This is a special showing - limit of %d tickets per purchase.\n", TICKET_LIMIT);
        printf("How many tickets would you like to purchase? (limit %d) ", TICKET_LIMIT);
        scanf("%d", &ticketsBought);
    }

    if (ticketsBought == 0)
    {
        printf("No movie for you!\n");
    }
    else
    {
        while (ticketsSold < ticketsBought)
        {
            PrintSeatMap(MovieTheater, rows, cols);

            printf("Enter seat choice by entering the row and seat ");
            printf("Please pick a seat ");
            scanf("%c%d", &myRow, &seatchoice);



        }
        
    }
    
}