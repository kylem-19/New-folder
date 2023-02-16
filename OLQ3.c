#include <stdio.h>

int main (void)
{
    int  number = 0;
    printf("Enter a number \n");
    scanf("%d", &number);
    number = number / 2;
    printf("Your number divided by 2 is %d\n", number);

    return 0;
}