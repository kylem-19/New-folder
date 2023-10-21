#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void)
{
    char duck[2][3][4] = {{{"ABCD"},{"EFGH"},{"IJKL"}},
                            {{"MNOP"},{"QRST"},{"UVWX"}}};

    
    int x, y, z;

    printf("coords: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("%c", duck[x][y][z]);

    return 0;
}