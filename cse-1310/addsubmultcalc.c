#include <stdio.h>



void calculateAdd (int op1, int op2)
{
    printf("%6d\n", op1);
    printf("+%5d\n", op2);
    printf("======\n");
    printf("%6d\n\n", op1 + op2);
}

void calculateSub (int op1, int op2)
{
    printf("%6d\n", op1);
    printf("-%5d\n", op2);
    printf("======\n");
    printf("%6d\n\n", op1 + op2);
}

void calculateMult (int op1, int op2)
{
    printf("%6d\n", op1);
    printf("*%5d\n", op2);
    printf("======\n");
    printf("%6d\n\n", op1 + op2);
}

int main(void)
{
    int op1 = 0, op2 = 0;

    printf("Please enter operand 1 ");
    scanf("%d", &op1);
    printf("Please enter operand 2 ");
    scanf("%d", &op2);

    calculateAdd(op1, op2);
    calculateSub(op1, op2);
    calculateMult(op1, op2);

    return 0;
}