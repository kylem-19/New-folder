// Kyle Moore
// 1002073209

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 9
#define MAX_COLS 9
#define TICKET_LIMIT 4

void FillMovieTheater(char MovieTheater[MAX_ROWS][MAX_COLS], int rows, int cols, char line2[])
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            MovieTheater[i][j] = line2[j];
        }
    }
}


// void PrintSeatMap(char MovieTheater[MAX_ROWS][MAX_COLS], int rows, int seats)
// {
//      printf("          ");
//     for (int i = 1; i <= seats; i++) 
//     {
//         printf("Seat %d ", i);
//     }
//     printf("\n");

//     for (int i = 0; i < rows; i++) 
//     {
//         printf("Row %c ", 65 + i);
//         for (int j = 0; j < seats; j++)
//         {
//             printf("%6c ", MovieTheater[i][j]);
//         }
//         printf("\n");
//     }
// }

// int IsSeatSold(char MovieTheater[MAX_ROWS][MAX_COLS], int row, int col)
// {
//     if (MovieTheater[row][col] == 'X')
//     {
//         return 1;
//     }
//     else
//     {
//         MovieTheater[row][col] = 'X';
//         return 0;
//     }
    
// }

void WriteMovieTheater(char MovieTheater[MAX_ROWS][MAX_COLS],int rows, int seats)
{
    char filename[20] = {};
    FILE *outfile = NULL;

    printf("Enter the name of your movie theater file ");
    fscanf(outfile, "%s", filename);

    fopen(filename, "w+");

    if (outfile == NULL)
    {
        printf("File could not open");
        exit(0);
    }

    fprintf(outfile, "%s", filename);
}

int main(void)
{
    char MovieTheater[MAX_ROWS][MAX_COLS] = {};
    int TicketsPurchased, TicketSold, arrayCol, arrayRow, rows, cols;
    char myRow;
    int mySeat;
    FILE *Handle = NULL;
    char myFile[20] = {};
    char maxRowCol[MAX_ROWS][MAX_COLS] = {};

    
    
    printf("Enter the name of your Movie Theater file ");
    scanf("%s", myFile);
    Handle = fopen(myFile, "r");

    

    if (Handle == NULL)
    {
        printf("File could not open");
        exit(0);
    }

    fscanf(Handle, "%d %d", &rows, &cols);
    fgets(maxRowCol, MAX_ROWS, Handle);
    fgets(maxRowCol, MAX_COLS, Handle);

    FillMovieTheater(MovieTheater, rows, cols, maxRowCol);
    fclose(Handle);

    printf("Number of tickets to purhcase: (limit 4) ");
    scanf("%d", &TicketsPurchased);

    if (TicketsPurchased < 1 || TicketsPurchased > TICKET_LIMIT)
    {
        

    }
    


    
    return 0;
}