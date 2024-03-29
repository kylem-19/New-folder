/* ListLib-Template */

#include "ListLib.h"
void AddDrawCommandToList(char letter, char DrawCommand[], NODE **LinkedListHead)
{
    
	NODE *TempPtr, *NewNode;
	/* declare pointers of type NODE named TempPtr and NewNode */
    
	NewNode = malloc(sizeof(NODE));

	NewNode->Letter = letter;
	
	NewNode->DrawCommand = malloc(strlen(DrawCommand)+1);
	
	strcpy(NewNode->DrawCommand, DrawCommand);
	
	NewNode->next_ptr = NULL;/* malloc a new node and assign the Letter and the DrawCommand (after mallocing memory for it) */

	if (*LinkedListHead == NULL)
	{
		*LinkedListHead = NewNode;	
	}
	else
	{
		TempPtr = *LinkedListHead;

		while (TempPtr->next_ptr != NULL)
		{
			TempPtr = TempPtr->next_ptr;
		}
		TempPtr->next_ptr = NewNode;
	}
	/* If the LinkedListHead is NULL, then give it the address of the new node */
	/* Else traverse to the end of the linked list and add the new node */
}

NODE*  FindLetter(NODE *LinkedListHead, char letter, char DC[])
{
	NODE *TempPtr = LinkedListHead;
	while(TempPtr != NULL && TempPtr->Letter != letter)/* while traversing the linked list AND the Letter in the node is not the Letter passed in */
	{
		TempPtr = TempPtr->next_ptr;

		if (TempPtr != NULL)
		{
			strcpy(DC, TempPtr->DrawCommand);
			return TempPtr->next_ptr;/* copy the DrawCommand from the node into the passed in parameter */
			/* return the next pointer stored in TempPtr */
		}
		else
		{
			memset(DC, '\0', sizeof(*DC));
			return TempPtr;  //Set DC to NULLs to signal that we found all of the nodes for this letter
			/* return TempPtr */
		}
	}

	
}
