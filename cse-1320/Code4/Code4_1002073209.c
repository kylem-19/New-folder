#include "DrawTool.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(void)
{
    char drawcmd1[21] = {};
    char drawcmd2[21] = {};
    int user_size = 0;
    char large_array[MAXMAPSIZE][MAXMAPSIZE] = {};
    char *token = NULL;
    char *Delimiters = "(),";
    char Lettercmd[21] = {};
    int letter = 0;
    char userRows[21] = {};
    int Rows = 0;
    char userCols[21] = {};
    int Cols = 0;
    char markspot[21] = {};
    int spotmark = 0;
    char symbol[21] = {};
    int symbolmark = 0;

    InitializeMap(large_array, &user_size);
    PrintInstructions();
    PrintMap(large_array, user_size);
    
    printf("Enter draw command (Enter Q to quit) \n");
    fgets(drawcmd1, 21, stdin);
    drawcmd1[strlen(drawcmd1) -1] = '\0';
    drawcmd1[0] = toupper(drawcmd1[0]);
    token = strtok(drawcmd1, Delimiters);
    strcpy(Lettercmd,token);

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
        strcpy(symbol, token);

        DrawLine(large_array, Rows, Cols, Lettercmd[0], spotmark, symbol[0]);

        printf("Enter draw command (Enter Q to quit) \n");
        fgets(drawcmd2, 21, stdin);
        
    }

}