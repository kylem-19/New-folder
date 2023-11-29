#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef LINK_LIST_H
#define LINK_LIST_H

typedef struct node
{
    int nodenumber;
    struct node *next_ptr;
}
NODE;

#endif