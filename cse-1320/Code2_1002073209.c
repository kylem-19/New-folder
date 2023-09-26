// Kyle Moore 1002073209
#include <stdio.h>
#define BITS 8

void ConvertDecimalToBinary(int decimal, char pass[BITS + 1]) 
{
    int result[BITS];
    for (int i = 0; i < BITS; i++) 
    {
       result[i] = (decimal >> (BITS - 1 - i)) & 1;
        pass[i] = result[i] + 48;
    }
}

int main() 
{
    int num1, num2, result;
    char operator[3];
    char bresult[BITS + 1] = {};
    char bnum1[BITS + 1] = {};
    char bnum2[BITS + 1] = {}; 

    printf("\nBitwise Calculator\n\n");
    printf("Enter two base 10 values with a bitwise operator to see the decimal result\n");
    printf("and the binary result. The format is\n\n");
    printf("FirstNumber, BitwiseOperator, SecondNumber\n\n");
    printf("For example, enter the expression\n\n");
    printf("2 & 3\n\n");
    printf("This calculator can be used with &, |, ^, << and >>\n\n");
    printf("Please note that the spaces between numbers and operator is essential\n");
    printf("and the two entered values must be between 0 and 255\n\n");
    
    printf("Enter expression ");
    scanf("%d%s%d", &num1, operator, &num2);

    while (num1 < 0 || num1 > 255 || num2 < 0 || num2 > 255) 
    {
        printf("The entered expression contains out of range values.\n");
        printf("Please reenter the expression using values between 0 and 255.\n\n");
        scanf("%d %s %d", &num1, operator, &num2);
    }

    if (operator[0] == '&') 
    {
        result = num1 & num2;
    } 
    else if (operator[0] == '|') 
    {
        result = num1 | num2;
    }
    else if (operator[0] == '<') 
    {
        result = num1 << num2;
    }
    else if (operator[0] == '>') 
    {
        result = num1 >> num2;
    }
    else if (operator[0] == '^') 
    {
        result = num1 ^ num2;
    }


    ConvertDecimalToBinary(num1, bnum1);
    ConvertDecimalToBinary(num2, bnum2);
    ConvertDecimalToBinary(result, bresult);

    printf("\nIn base 10...\n\n");
    printf("%d %s %d = %d\n", num1, operator, num2, result);

    printf("\nIn 8-bit base 2...\n\n");

    if (operator[0] == '&' || operator[0] == '|' || operator[0] == '^')
    {
        printf("%9s\n", bnum1);
        printf("%s\n", operator);
        printf("%9s\n", bnum2);
        printf(" ========\n");
        printf("%9s\n", bresult);
    }
    else if (operator[0] == '>' || operator[0] == '<')
    {
        printf("%s %s %d\n\n", bnum1, operator, num2);
        printf("%s", bresult);
    }
    else
    {
        printf("Operator %s is not supported by this calculator", operator);
    }

    return 0;

}
