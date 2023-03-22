#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnumber()
{
    srand(time(0));
    int numgenerator = rand() %20 + 1;
    return numgenerator;
}

int main(void)
{
    int numgenerator = randomnumber();
    printf("%d", numgenerator);
    return 0;
}