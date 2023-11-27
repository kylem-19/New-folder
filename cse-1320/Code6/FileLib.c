// FileLib Template

#include <stdio.h>
#include <string.h>
#include "ListLib.h"

FILE*  OpenFile(int argc, char *argv[])
{	
	FILE *IFH = NULL;
	char filename[20] = {};/* declare various variables needed */

	if (argc == 2)
	{
		strcpy(filename, argv[1]);/* code */
	}
	else
	{
		printf("message in sample output (see comment below)");
	}
	/* if argc is 2, then use argv[1] as the input file name, else print the message seen in sample output */

	do
	{
		IFH = fopen(filename, "r");/* open file with "r" mode */
		if (IFH == NULL)/* if file did not open */
		{
			printf("File did not open");
			fgets(filename, sizeof(filename)-1, IFH);
			IFH = fopen(filename, "r");
			
			/* read in new filename */
			/* open the file "r" mode */
		}
	}
	while (IFH != NULL);

	return IFH;/* return the file handle */
}

void ReadFileIntoLinkedList(FILE *DCFILE, NODE **LinkedListHead)
{
	/* declare various variables needed */
	
	/* while fgets() reads the file */
	{
		
		/* if line from file ends with \n, then replace \n with \0 */
		
		/* tokenize to get the Letter and the DrawCommand */
	
		/* Call AddDrawCommandToList with correct parameters */
	}
}
