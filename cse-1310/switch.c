#include <stdio.h>
int main (void)
{
    char letter;
    printf("enter a letter\n");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'D':
        printf("dog\n");
        break;
    case 'C':
        printf("cat\n");
        break;
    case 'L':
        printf("lion\n");
        break;
    case 'G':
        printf("giraffe\n");
        break;
    case 'A':
        printf("axolotl\n");
        break;
    
    default:
        printf("invalid\n");
        break;
    }
    
}