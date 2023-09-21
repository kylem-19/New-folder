// Kyle Moore
// 1002073209

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void WriteMovieTheater(char MovieTheater[MAX_ROWS][MAX_COLS],int rows, int seats)
{
    char filename[20] = {};
    FILE *outfile = NULL;

    printf("Output file name: ");
    scanf("%s", filename);

    outfile = fopen(filename, "w+");

    if (outfile == NULL)
    {
        printf("File could not open");
        exit(0);
    }

    fprintf(outfile, "%d %d\n", rows, seats);
    for (int i = 0; i < rows; i++)
    {
        
        for (int j = 0; j < seats; j++)
        {
            
            fprintf(outfile, "%c", MovieTheater[i][j]);
        }
        
    }
    fclose(outfile);
    
}

int main(void)
{
    char MovieTheater[MAX_ROWS][MAX_COLS];
    int TicketsPurchased, TicketSold, arrayCol, arrayRow, rows, cols;
    char myRow;
    int mySeat;
    FILE *Handle = NULL;
    char myFile[100] = {};
    char maxRowCol[MAX_ROWS][MAX_COLS] = {};

    printf("Enter the name of your Movie Theater file ");
    scanf("%s", myFile);
    Handle = fopen(myFile, "r+");

    if (Handle == NULL)
    {
        printf("File could not open");
        exit(0);
    }

    fscanf(Handle, "%d%d", &rows, &cols);
    fgets(myFile, sizeof(myFile), Handle);
    fclose(Handle);
    
    FillMovieTheater(MovieTheater, rows, cols);

    printf("How many tickets would you like to purchase? (limit %d) ", TICKET_LIMIT);
    scanf("%d", &TicketsPurchased);
    printf("\n\n");

    while (TicketsPurchased > TICKET_LIMIT || TicketsPurchased < 0)
    {
        printf("This is a special showing - limit of 4 tickets per purchase.\n");
        printf("How many tickets would you like to purhcase? (limit %d) ", TICKET_LIMIT);
        scanf("%d", &TicketsPurchased);
    }

    if (TicketsPurchased == 0)
    {
        printf("No movie for you!\n");
    }
    else
    {
        while (TicketSold < TicketsPurchased)
        {
            PrintSeatMap(MovieTheater, rows, cols);
            printf("\n");
            printf("Enter a seat choice by entering a row and seat \n");
            printf("Please pick a seat ");
            scanf(" %c%d", &myRow, &mySeat);

            arrayRow = myRow - 'A';
            arrayCol = mySeat - 1;

            if (arrayRow < 0 || arrayRow >= rows || arrayCol < 0 || arrayCol >= cols)
            {
                printf("\nThis seat is not inside the theater.\n");
            }
            else if (IsSeatSold(MovieTheater, arrayRow, arrayCol))
            {
                printf("Sorry, that seat has already been sold.\n");
            }
            else
            {
                MovieTheater[arrayRow][arrayCol] = 'X';
                TicketSold ++;
            }
            
        }
        PrintSeatMap(MovieTheater, rows, cols);
        printf("\n");
        printf("Enjoy your movie!\n");
        
        WriteMovieTheater(MovieTheater, rows, cols);
    }
    return 0;
}