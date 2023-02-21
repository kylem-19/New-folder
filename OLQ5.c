#include <stdio.h>

int main (void)
{
    int answer = 0;
    printf("Please enter a number \n");
    scanf("%d", &answer);

    if (answer  > 10)
    {
        printf("Your number is greater than 10! \n");
    }
    else
    {
        printf("Your number is less than 10! \n");

    }

return 0;
}