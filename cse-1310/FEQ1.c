#include <stdio.h>
#include <string.h>
#include <ctype.h>

void compare(char array[], char array2[])
{
   

    printf("What do you want array 1 to be? ");
    scanf("%s", array);
    printf("What do you want array 2 to be? ");
    scanf("%s", array2);

    if (strcmp(array, array2) == 0)
        printf("%s == %s", array, array2);
    else if (strcmp(array, array2) > 0)
        printf("%s > %s", array, array2);
    else if (strcmp(array, array2) < 0)
        printf("%s < %s", array, array2);
}
void length(char array[])
{
    printf("What do you want array 1 to be? ");
    scanf("%s", array);
    
    printf("%ld", strlen(array));
}
void copy(char array[], char source[])
{
    printf("What do you want array 1 to be? ");
    scanf("%s", array);
    printf("What do you want array 2 to be? (source)");
    scanf("%s", source);

    printf("%s", strcpy(array, source));
}
void uppercase(char array[])
{
   printf("What do you want your array to be initialized to? ");
   scanf("%s", array);
    printf("What cell of %s do you want to uppercase? ", array);
    int cell;
    char lowercell;
    scanf("%d", &cell);
    lowercell = array[cell];
   printf("Your array %s, at cell %d has been uppercased from %c --> %c", array, cell, lowercell, toupper(array[cell]));
}
void lowercase(char array[])
{
   printf("What do you want your array to be initialized to? ");
   scanf("%s", array);
    printf("What cell of %s do you want to lowercase? ", array);
    int cell;
    char uppercell;
    scanf("%d", &cell);
    uppercell = array[cell];
   printf("Your array %s, at cell %d has been lowercased from %c --> %c", array, cell, uppercell, tolower(array[cell]));
}
int main(void)
{
    char array1[100] = {"partytime"};
    char array2[100];

    // compare(array1, array2);
    // length(array1);
    // copy(array1, array2);
    // uppercase(array1);
    // lowercase(array1);

    toupper(array1[2]);
    printf("%s", array1);
}