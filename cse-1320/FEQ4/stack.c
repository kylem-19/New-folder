#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct SNODE
{
    int number;
    struct SNODE *next_ptr;
}
SNODE;

SNODE *StackTop = NULL;

void push(SNODE **StackTop, int nodenumber)
{
   SNODE *NewNode = malloc(sizeof(SNODE));
    NewNode->number = nodenumber;
    NewNode->next_ptr = NULL;
    if (*StackTop == NULL)
    {
        *StackTop = NewNode;
    }
    else
    {
    NewNode->next_ptr = *StackTop;
    *StackTop = NewNode;
    }
}

void pop(SNODE **StackTop)
{
    if (*StackTop == NULL)
    {
        printf("Stack is empty\n\n");
    }
    else
    {
        SNODE *TempPtr = (*StackTop)->next_ptr;
        free(*StackTop);
        *StackTop = TempPtr;
    }
}

void displayStack(SNODE *StackTop)
{
    SNODE *TempPtr = StackTop;
    
    while (TempPtr != NULL)
    {
        printf("%d\n", TempPtr->number);
        TempPtr = TempPtr->next_ptr;
    }
}
 
int main()
{
    return 0;
}