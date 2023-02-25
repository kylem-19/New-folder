#include <stdio.h>
int main (void)
{
    printf("Your are making weekend plans and find out that your friends might visit. \n");
    printf("You need to figure out your options for the weekend. \n");
    printf("Enter Y or N - any entry other than capital Y will be taken as N. \n\n");


    printf("Your friends love to go to the movies, so if they visit, you will all go to the movies. \n");
    printf("But, if they don't visit, what will you do with your weekend? \n");
    
    char decision;

    printf("Did your friends visit? \n");
    scanf("%c", &decision);

    if (decision == 'Y')
    {
        printf("Weekend plans - have fun at the movies with your friends!\n");
    }
    else
    {
        printf("Your friends weren't able to visit so you need to make alternate plans. \n");

        printf("Is the weather nice? \n");
        scanf(" %c", &decision);

    if (decision == 'Y')
    {
        printf("Weekend plans - ride bike in the park!\n");
    }
    else
    {
        printf("Oh, so the weather is bad.  Do you have enough money to go shopping? \n");
        scanf(" %c", &decision);

    if (decision == 'Y')
    {
        printf("Weekend plans - go shopping - don't spend too much!! \n");
    }
    else
    {
        printf("Weekend plans - stay home and play video games!! \n");
    }
    }
    }
}
