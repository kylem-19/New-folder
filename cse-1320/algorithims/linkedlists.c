#include "linkedlists.h"
#include <ctype.h>



void InsertANode(int, NODE**);
void  DisplayAllNodes(NODE*);
int CountTheNodes();
void DeleteANode(int, NODE**);
NODE* AddNodeToStart(int, NODE**);
NODE* AddNodeToEnd(int, NODE**);

int main(int argc, char argv[])
{
        NODE *TempPtr, *NewNode;
        NODE *LinkedListHead;
        int addnode;
        LinkedListHead = NULL;
        char nodeoption[20] = {};
        int i;
        int choice;
        printf("Linked List Menu\n");
        printf("=================");
        printf("1. Insert a node\n");
        printf("2. Display all nodes\n");
        printf("3. Count the nodes\n");
        printf("4. Delete a node\n");
        printf("5. Add node to start of list\n");
        printf("6. Add node to end of the list\n");
        printf("7. Exit");
        scanf("%d", &choice);

        switch (choice)
            {
            case '1':
                printf("1. Insert a node\n");
            case '2':
                printf("2. Display all nodes\n");
            case '3':
                printf("3. Count the nodes\n");
            case '4':
                printf("4. Delete a node\n");
            case '5':
                printf("Enter the node number to add to the start of the list: \n");
                scanf("%d", &nodeoption);
                AddNodeToStart(nodeoption, LinkedListHead);
            case '6':
                printf("Enter the node number to add to the end of the list: \n");
                scanf("%d", &nodeoption);
                AddNodeToEnd(nodeoption, LinkedListHead);
            case '7':
                exit(0);
            default:
                break;
            }
            return 0;       
}

void InsertANode(int nodenumber, NODE **LinkedListHead)
{
    NODE *TempPtr, *NewNode, *PrevPtr;
    PrevPtr = NULL;
    TempPtr = LinkedListHead;
    while (TempPtr != NULL && TempPtr->nodenumber < nodenumber)
    {
        PrevPtr = TempPtr;
        TempPtr = TempPtr->next_ptr;
    }
    NewNode = malloc(sizeof(NODE));
    NewNode->nodenumber = nodenumber;
    NewNode->next_ptr = TempPtr;

    if (PrevPtr == NULL)
    {
        LinkedListHead = NewNode;
    }
    else
    {
        PrevPtr->next_ptr = NewNode;
    }
}

void DisplayAllNodes(NODE *node)
{
    int count = 0;
    NODE *TempPtr;
    NODE *TemPtr = node;

    if (TempPtr == NULL)
    {
        printf("empty linked list\n");
    }
    else
    {
        printf("element %d = %d\n", count, TempPtr->nodenumber);
        TempPtr =TempPtr->next_ptr;
        count++;
    }
}

int CountTheNodes()
{
    NODE *TempPtr;

    
    
}

void DeleteANode(int nodenumber, NODE **LinkedListHead)
{
    NODE *TempPtr, *prev_ptr;

    TempPtr = LinkedListHead;

    while (TempPtr->next_ptr != NULL && TempPtr->nodenumber != nodenumber)
    {
        prev_ptr = TempPtr;
        TempPtr = TempPtr->next_ptr;
    }

    if (TempPtr->nodenumber == nodenumber)
    {
        if (TempPtr == LinkedListHead)
        {
            LinkedListHead = TempPtr->next_ptr;
        }
        else
        {
            prev_ptr->next_ptr = TempPtr->next_ptr;
        }
        free(TempPtr);
    }
}

NODE* AddNodeToStart(int nodenumber ,NODE **LinkedListHead)
{
    NODE *TempPtr, *NewNode;

    NewNode = sizeof(NODE);
    NewNode->nodenumber = nodenumber;
    NewNode->next_ptr = NULL;

    if (LinkedListHead == NULL)
    {
        LinkedListHead = NewNode;
    }
    else
    {
        NewNode->next_ptr = LinkedListHead;
        LinkedListHead = NewNode;
    }
}

NODE* AddNodeToEnd(int nodenumber, NODE **LinkedListHead)
{
    NODE *TempPtr, *NewNode;

    NewNode = sizeof(NODE);
    NewNode->nodenumber = nodenumber;
    NewNode->next_ptr = NULL;

    TempPtr = LinkedListHead;

    while (TempPtr->next_ptr != NULL)
    {
        TempPtr = TempPtr->next_ptr;
    }
    TempPtr->next_ptr = NewNode;
}