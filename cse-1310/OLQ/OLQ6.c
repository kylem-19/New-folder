#include <stdio.h>

int main (void)
{
    int x = 0;
    int y = 4;

    if (x && y)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    if (x || y)
    {
        printf("true\n");
    }
    
}