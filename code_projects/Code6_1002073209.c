// Kyle Moore
// 1002073209

#include <stdio.h>

#define MAX_ROWS 9
#define MAX_COLS 9
#define TICKET_LIMIT 4

void FillMovieTheater(char MovieTheater[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            MovieTheater[i][j] = 'O';
        }
    }
}


void PrintSeatMap(char MovieTheater[MAX_ROWS][MAX_COLS], int rows, int seats)
{
     printf("          ");
    for (int i = 1; i <= seats; i++) 
    {
        printf("Seat %d ", i);
    }
    printf("\n");

    for (int i = 0; i < rows; i++) 
    {
        printf("Row %c ", 65 + i);
        for (int j = 0; j < seats; j++)
        {
            printf("%6c ", MovieTheater[i][j]);
        }
        printf("\n");
    }
}

int IsSeatSold(char MovieTheater[MAX_ROWS][MAX_COLS], int row, int col)
{
    if (MovieTheater[row][col] == 'X')
    {
        return 1;
    }
    else
    {
        MovieTheater[row][col] = 'X';
        return 0;
    }
    
}

int main(void)
{
    char MovieTheater[MAX_ROWS][MAX_COLS];
    int mySeat, rows, cols, ticketsSold, ticketsBought;
    char myRow;
    int arraySeat;
    int arrayRow;
    do
    {
        printf("How many rows do you want (1-%d) ", MAX_ROWS);
        scanf("%d", &rows);

        if (rows > MAX_ROWS || rows < 1)
        {
            printf("Rows must be in range of 1-%d. Please reenter. ", MAX_ROWS);
            scanf("%d", &rows);
        }

        
    } while (rows > MAX_ROWS || rows < 1);

    do
    {
        printf("How many seats do you want? (1-%d) ", MAX_COLS);
        scanf("%d", &cols);

        if (cols > MAX_COLS || cols < 1)
        {
            printf("Seats must be in range of 1-%d ", MAX_COLS);
            scanf("%d", &cols);
        }
        
    } while (cols > MAX_COLS || cols < 1);

    FillMovieTheater(MovieTheater, rows, cols);
    
    printf("How many tickets would you like to purchase? (limit %d) ", TICKET_LIMIT);
    scanf("%d", &ticketsBought);

    while (ticketsBought > TICKET_LIMIT || ticketsBought < 0)
    {
        printf("This is a special showing - limit of 4 tickets per purchase.\n");
        printf("How many tickets would you like to purhcase? (limit %d) ", TICKET_LIMIT);
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
            printf("\n");
            printf("Enter a seat choice by entering a row and seat \n");
            printf("Please pick a seat ");
            scanf(" %c%d", &myRow, &mySeat);

            arrayRow = myRow - 'A';
            arraySeat = mySeat - 1;

            if (arrayRow < 0 || arrayRow >= rows || arraySeat < 0 || arraySeat >= cols)
            {
                printf("\nThis seat is not inside the theater.\n");
            }
            else if (IsSeatSold(MovieTheater, arrayRow, arraySeat))
            {
                printf("Sorry, that seat has already been sold.\n");
            }
            else
            {
                MovieTheater[arrayRow][arraySeat] = 'X';
                ticketsSold ++;
            }
            
        }
        PrintSeatMap(MovieTheater, rows, cols);
        printf("\n");
        printf("Enjoy your movie!");
        
    }
    return 0;
}