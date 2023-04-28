#include <stdio.h>

int main (void)
{
    int maxnum;
    int num1;

    printf("number: \n\n");
    scanf(" %d", &num1);
    printf("max number: \n\n");
    scanf(" %d", &maxnum);

    for (num1; num1 <= maxnum; num1++)
    {
        printf(" %d\n", num1);
    }
    
    return 0;
}