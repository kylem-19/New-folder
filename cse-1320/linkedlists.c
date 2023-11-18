#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_list(mylist *head);

int main(int argc, char argv[])
{
    typedef struct list
    {
        struct list *nextptr;
        int Apple;
        char Banana;
        char Carrots[20];
    } mylist;

    mylist *head = NULL;
    head = (mylist *)malloc(sizeof(mylist));

    if (head == NULL)
    {
        return 1;
    }

    head->Apple = 1;
    head->nextptr = NULL;
    
}

void print_list(mylist * head)
{

}