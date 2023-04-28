#include <stdio.h>

int Convert (int teaspoons)
{
    int tablespoons = 0;
    tablespoons = teaspoons / 3;
}


int main (void)
{
    int teaspoons = 0, tablespoons = 0;

    printf("Enter number of teaspoons ");
    scanf("%d", &teaspoons);

    tablespoons = Convert(teaspoons);

    printf("%d teaspoons = %d tablespoons\n", teaspoons, tablespoons);

    return 0;
}