#include <stdio.h>

int main(void)
{
    int MT[5][5] = {};
    int rows, cols;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            MT[i][j] = (i+1)*(j+1);
        }
    }

    printf("Rows: ");
    scanf("%d", &rows);
    printf("Cols: ");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", MT[i][j]);
        }
        printf("\n");
    }
    
    
}