#include <stdio.h>
int main(void)
{
    int X = 1;
    int Y = 0;
    int Z = 1;
    int a = 3;

    if (X && Z)
    {
        a /= 3;
    }
    else if (X && Y)
    {
        a *= 4;
    }
    else
    {
        a -= 4;
    }
    printf("%d", a);

    return 0;
}