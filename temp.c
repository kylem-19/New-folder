#include <stdio.h>
void PrintIt(int My2D[][COL])
{

void FillIt(int my2D[][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            my2D[i][j] = (i-1)*(j+1);
        }
    }
}

int main(void)
{
    int my2D[ROW][COL] = {};

    FillIt(my2D);
    PrintIt(my2D);
    printf("%d", my2D[65][367]);
}