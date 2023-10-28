#include "DrawTool.h"
#include <string.h>


int main(void)
{
    char drawcmd1[20];
    int user_size = 0;
    char large_array[MAXMAPSIZE][MAXMAPSIZE] = {};
    char *token = NULL;
    char *Delimiters = "(,)";
    InitializeMap(large_array, &user_size);
    PrintInstructions();
    PrintMap(large_array, user_size);

    printf("Enter draw command (Enter Q to quit) \n");
    scanf("%c", drawcmd1);
    fgets(drawcmd1, 20 ,stdin);
    token = strtok(drawcmd1, Delimiters);
    strcpy(, token);
    
    while (drawcmd1 != "Q" || "q")
    {
        /* code */
    }
    
    
    
    
    
}