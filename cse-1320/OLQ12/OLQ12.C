#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    int i;
    if (argc > 3)
    {
        for (i = 1; i < argc; i++)
        {
            if (strcmp(argv[i], "NEXT") != 0)
            {
                count++;
            }
        }
        printf("%d", count);
    }
    return 0;

    // cmd line paramaters


    FILE *original, *copy;
    char NewLine[80] = {};
    

    original = fopen("makefile", "r+");
    copy = fopen("makecopy", "w+");

    while (fgets(NewLine, sizeof(NewLine)-1, original))
    {
        fprintf(copy, "%s", NewLine);
    }
    return 0;


    // file handling
    
}