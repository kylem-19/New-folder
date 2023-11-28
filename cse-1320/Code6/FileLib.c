// FileLib Template

#include <stdio.h>
#include <string.h>
#include "ListLib.h"

FILE*  OpenFile(int argc, char *argv[])
{	
    FILE *IFH = NULL;
    char filename[20] = {};

    if (argc == 2)
    {
        strcpy(filename, argv[1]);
    }
    else
    {
        printf("Must be run with an input file name.\n");
        while (argc != 2)
        {
            printf("Enter a file name at the prompt: ");
            fgets(filename, sizeof(filename), stdin);
            filename[strcspn(filename, "\n")] = '\0';
        }
    }

    do
    {
        IFH = fopen(filename, "r");
        if (IFH == NULL)
        {
            printf("Could not open a file named %s\n", filename);
            printf("Enter a new file name: ");
            fgets(filename, sizeof(filename), stdin);
            filename[strcspn(filename, "\n")] = '\0';
        }
    } while (IFH == NULL);

    return IFH;
}

void ReadFileIntoLinkedList(FILE *DCFILE, NODE **LinkedListHead)
{
	
	
	char *token = NULL;
	char delimiters[] = {"|(),"};
	char buffer[100] = {};
	char letter;
	char drawcmd[21] = {};
	
	while (fgets(buffer, sizeof(buffer)-1, DCFILE))/* while fgets() reads the file */
	{
		
		if (buffer[strlen(buffer)-1] == '\n')
		{
			buffer[strlen(buffer)-1] = '\0';
		}
		/* if line from file ends with \n, then replace \n with \0 */
		token = strtok(buffer,delimiters);
		strcpy(&letter, token);
		token = strtok(NULL, delimiters);
		strcpy(drawcmd, token);/* tokenize to get the Letter and the DrawCommand */
	
		AddDrawCommandToList(letter, drawcmd, LinkedListHead);/* Call AddDrawCommandToList with correct parameters */
	}
}
