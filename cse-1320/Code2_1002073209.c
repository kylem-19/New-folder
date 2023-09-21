// Kyle Moore
// 1002073209

#include <stdio.h>
#define BITS 8

int main(void)
{
    char operator[3];
    int num1, num2;

    printf("\nBitwise Calculator\n\n");
    printf("Enter two base 10 values with a bitwise operator to see the decimal result and the binary result. The format is\n\n");
    printf("FirstNumber, BitwiseOperator, SecondNumber\n\n");
    printf("For example, enter the expression\n\n");
    printf("2 & 3\n\n");
    printf("This calculator can be used with &, |, ^, << and >>\n\n");
    printf("Please note that the spaces between numbers and operator is essential\n\n");
    printf("and the two entered values must be between 0 and 255\n\n");

    printf("Enter expression ");
    scanf("%d%s%d", &num1, operator, &num2);

    while (255 < num1 || num2 < 0)
    {
        printf("The entered expression contains out of range values.\n");
        printf("Please reenter the expression using values between 0 and 255.\n\n");
        scanf("%d %s %d", &num1, operator, &num2);
    }
    
    
}