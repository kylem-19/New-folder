// Kyle Moore 1002073209
#include "DrawTool.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "ListLib.h"
#include "FileLib.h"


int main(int argc, char *argv[])
{
    NODE *LinkedListHead = NULL;
    FILE *FH = OpenFile(argc, argv);
    NODE *TempPtr = NULL;

    char drawcmd1[21] = {};
    int user_size = 0;
    char large_array[MAXMAPSIZE][MAXMAPSIZE] = {};
    char *token = NULL;
    char *Delimiters = "(),";
    char letter;
     char Lettercmd[21] = {};
    char userRows[21] = {};
    int Rows = 0;
    char userCols[21] = {};
    int Cols = 0;
    char markspot[21] = {};
    int spotmark = 0;
    char symbol[21] = {};

    ReadFileIntoLinkedList(FH, &LinkedListHead);
    InitializeMap(large_array, &user_size);
    
    printf("Enter 1-3 letters: \n");
    scanf("%s", drawcmd1);

    while (strlen(drawcmd1) > 4 || strlen(drawcmd1) < 2)
    {
        printf("Enter 1-3 letters : \n");
        fgets(drawcmd1, sizeof(drawcmd1), stdin);
    }
    drawcmd1[strcspn(drawcmd1, "\n")] = '\0';
    
    
    for (int i = 0; i < strlen(drawcmd1); i++)
    {
        letter = toupper(drawcmd1[i]);
        TempPtr = FindLetter(LinkedListHead, letter, drawcmd1);

        while (TempPtr != NULL && TempPtr->DrawCommand[0] != '\0')
        {
            token = strtok(drawcmd1, Delimiters);
            FindLetter(LinkedListHead, *token, TempPtr->DrawCommand);
            // TempPtr = FindLetter(TempPtr, letter, drawcmd1);
        }
        
    }
    
    PrintMap(large_array, user_size);
}