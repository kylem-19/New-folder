#include "DrawTool.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(void)
{
    char drawcmd1[21];
    int user_size = 0;
    char large_array[MAXMAPSIZE][MAXMAPSIZE] = {};
    char *token = NULL;
    char *Delimiters = "(),";
    char Lettercmd[20] = {};
    int letter;
    char userRows[20] = {};
    int Rows;
    InitializeMap(large_array, &user_size);
    PrintInstructions();
    PrintMap(large_array, user_size);

    printf("Enter draw command (Enter Q to quit) \n");
    fgets(drawcmd1, 21 ,stdin);
    drawcmd1[strlen(drawcmd1) -1] = '\0';
    toupper(drawcmd1[0]);
    token = strtok(drawcmd1, Delimiters);
    strcpy(Lettercmd,token);
    letter = atoi(Lettercmd);

    while (Lettercmd != "C")
    {
        token = strtok(NULL, Delimiters);
        strcpy(userRows, token);
        Rows = atoi(userRows);
    }
    

    
    
    
}