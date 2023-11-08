#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char argv[])
{
    char dog[100] = {};
    char *example;
    
    while (argc >= 3)
    {
        strcpy(example, dog[1]);

        printf("%c", *(example) + atoi(dog[2]));
        printf("%c", *(example) );
    }
    
}