#include <stdio.h>

int main(void)
{
    int dog = 100;
    int cat = 200;
    int bird = 300;

    int *dog1 = &dog;
    int *cat2 = &cat;
    int *bird3 = &bird;

    int **dog2 = &dog1;
    int **cat3 = &cat2;
    int ***bird4 = &cat3;

    printf("1. %d\n", **dog2 + **cat3);

}