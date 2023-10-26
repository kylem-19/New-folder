#include "DrawTool.h"


int main(void)
{
    char drawcmd1;
    int user_size = 0;
    char large_array[MAXMAPSIZE][MAXMAPSIZE] = {};

    InitializeMap(large_array, &user_size);
    PrintInstructions();
    PrintMap(large_array, user_size);

    printf("Enter draw command (Enter Q to quit) \n");
    scanf("%c", &drawcmd1);
    fgets(drawcmd1, 21-1 ,stdin)
    
}