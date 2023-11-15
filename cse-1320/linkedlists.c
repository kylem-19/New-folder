#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char argv[])
{
    struct list
    {
        struct list *ptr;
        int Apple;
        char Banana;
        char Carrots[20];
    };
    struct list mylist = {};

    char *tempPtr;
    tempPtr = mylist.ptr;

    if (tempPtr == NULL)
    {
        return 0;
    }
    while (tempPtr != NULL)
    {
        printf("not null -- new list\n");

    }
}