// Kyle Moore 1002073209
#include "DrawTool.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "ListLib.h"
#include "FileLib.h"


int main(void)
{
    NODE *LinkedListHead = NULL;

    
    char drawcmd1[21] = {};
    char drawcmd2[21] = {};
    int user_size = 0;
    char large_array[MAXMAPSIZE][MAXMAPSIZE] = {};
    char *token = NULL;
    char *Delimiters = "(),";
    char Lettercmd[21] = {};
    char userRows[21] = {};
    int Rows = 0;
    char userCols[21] = {};
    int Cols = 0;
    char markspot[21] = {};
    int spotmark = 0;
    char symbol[21] = {};

    InitializeMap(large_array, &user_size);
    PrintMap(large_array, user_size);
    
    printf("Enter 1-3 letters: \n");
    fgets(drawcmd1, sizeof(drawcmd1), stdin);
    while (strcmp(Lettercmd, "Q") != 0)
    {
        token = strtok(NULL, Delimiters);
        strcpy(userRows, token);
        Rows = atoi(userRows);

        token = strtok(NULL, Delimiters);
        strcpy(userCols, token);
        Cols = atoi(userCols);

        token = strtok(NULL, Delimiters);
        strcpy(markspot, token);
        spotmark = atoi(markspot);

        token = strtok(NULL, Delimiters);
        if (token == NULL)
        {
            token = "X";
        }
        strcpy(symbol, token);

        if (Lettercmd[0] == 'H' || Lettercmd[0] == 'V')
        {
            if (Cols > user_size || Rows > user_size || spotmark > user_size)
            {
                printf("The draw command is out of range");
            }
            else
            {
                DrawLine(large_array, Rows, Cols, Lettercmd[0], spotmark, symbol[0]);
            }
        }

        else if (Lettercmd[0] == 'P')
        {
            if (Cols > user_size || Rows > user_size)
            {
                printf("The draw command is out of range");
            }
            else
            {
                large_array[Rows][Cols] = symbol[0];
            }
        }
        else if (Lettercmd[0] != 'H' || Lettercmd[0] == 'H' || Lettercmd[0] == 'P')
        {
            printf("That draw command is unknown");
        }
        
        PrintMap(large_array, user_size);
        
        printf("Enter 1-3 letters \n");
        fgets(drawcmd2, 4, stdin);
        drawcmd2[0] = toupper(drawcmd2[0]);
        token = strtok(drawcmd2, Delimiters);
        strcpy(Lettercmd, token);
    }
}