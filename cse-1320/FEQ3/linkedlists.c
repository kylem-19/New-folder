#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct NODE
{
    int nodenumber;
    struct NODE *next_ptr;
}
NODE;

void AddNode(int newnodenumber, NODE** LinkedListHead)
{
    NODE *TempPtr, *NewNode;

    NewNode = malloc(sizeof(NODE));
    NewNode->nodenumber = newnodenumber;
    NewNode->next_ptr = NULL;

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
}

void DisplayLinkedList(NODE **LinkedListHead)
{
    NODE *TempPtr;

    while (TempPtr != NULL)
    {
        printf("\nNode Number %d\t\tNode Address %p Node Next Pointer %p\n",
    TempPtr->nodenumber, TempPtr, TempPtr->next_ptr);
    TempPtr = TempPtr->next_ptr;
    }
}

void AddNodeToEnd(int newnodenumber, NODE **LinkedListHead)
{
    NODE *TempPtr, *NewNode;

    NewNode = malloc(sizeof(NODE));
    NewNode->nodenumber = newnodenumber;
    NewNode->next_ptr = NULL;

    TempPtr = *LinkedListHead;

    while (TempPtr->next_ptr != NULL)
    {
        TempPtr =TempPtr->next_ptr;
    }
    TempPtr->next_ptr = NewNode;
    
}
void DeleteNode(int nodenumber, NODE **LinkedListHead)
{
    NODE *TempPtr, *PrevPtr = NULL;
    TempPtr = *LinkedListHead;

    while (TempPtr->next_ptr != NULL && TempPtr->nodenumber != nodenumber)
    {
        PrevPtr = TempPtr;
        TempPtr = TempPtr->next_ptr;
    }
    if (TempPtr->nodenumber == nodenumber)
    {
        if (TempPtr == *LinkedListHead)
        {
            *LinkedListHead = TempPtr->next_ptr;
        }
        else
        {
            PrevPtr->next_ptr = TempPtr->next_ptr;
        }
        free(TempPtr);
    }
    else
    {
        printf("not the nodes ur looking foor...\n");
    }
}

int main(int argc, char *argv[])
{
    int i  = 0;
}