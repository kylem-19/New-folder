#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct QNODE
{
    char *name;
    struct QNODE *next_ptr;
}
QNODE;


void enqueue(char name[], QNODE **QueueHead, QNODE **QueueTail)
{
    QNODE *NewNode = malloc(sizeof(QNODE));
    NewNode->name =  malloc(strlen(name) * sizeof(char) + 1);
    strcpy(NewNode->name, name);
    NewNode->next_ptr = NULL;

    if (*QueueHead == NULL)
    {
        *QueueHead = *QueueTail = NewNode;
    }
    else
    {
        (*QueueTail)->next_ptr = NewNode;
        *QueueTail = NewNode;
    }
}

void deQueue(QNODE **QueueHead)
{
    QNODE *TempPtr = (*QueueHead)->next_ptr;

    if (*QueueHead == NULL)
    {
        free(*QueueHead);
        *QueueHead = TempPtr;
    }
}

void DisplayQueue(QNODE *QueueHead)
{
    QNODE *TempPtr = QueueHead;
    while (TempPtr != NULL)
    {
        printf("%s\n", TempPtr->name);
        TempPtr = TempPtr->next_ptr;
    }
    
}

int main()
{
    return 0;
}