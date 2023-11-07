#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char array[100] = "Wonder";
    char array2[20] = {};
    char ch = 'o';

    fgets(array2, 10, stdin);
    printf("%s", array2);

    // *(strchr(array, ch)) = 'a';
    // printf("%s", array);
}