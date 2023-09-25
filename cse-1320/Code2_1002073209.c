// // // Kyle Moore 1002073209

// // #include <stdio.h>
// // #define BITS 8

// // void ConvertDecimalToBinary(int decimal, char pass[BITS + 1])
// // {
// //    int result[BITS];
// //    for (int i = BITS - 1; i >= 0; i--) 
// //    {
// //         pass[BITS - 1 - i + 1] = (decimal & 1) ? '1' : '0';
// //         decimal >>= 1; // Right-shift to divide by 2 (ignore the remainder)
// //     }
// //     pass[BITS] = '\0';
   
// // }

// // int main(void)
// // {
// //     char operator[3];
// //     int num1, num2, total;
// //     char bnum1[BITS +1] = {};
// //     char bnum2[BITS +1] = {};
// //     char btotal[BITS +1] = {};

// //     printf("\nBitwise Calculator\n\n");
// //     printf("Enter two base 10 values with a bitwise operator to see the decimal result and the binary result. The format is\n\n");
// //     printf("FirstNumber, BitwiseOperator, SecondNumber\n\n");
// //     printf("For example, enter the expression\n\n");
// //     printf("2 & 3\n\n");
// //     printf("This calculator can be used with &, |, ^, << and >>\n\n");
// //     printf("Please note that the spaces between numbers and operator is essential\n\n");
// //     printf("and the two entered values must be between 0 and 255\n\n");

// //     printf("Enter expression ");
// //     scanf("%d%s%d", &num1, operator, &num2);

// //     while (num1 < 0 || num1 > 255 || num2 < 0 || num2 > 255)
// //     {
// //         printf("The entered expression contains out of range values.\n");
// //         printf("Please reenter the expression using values between 0 and 255.\n\n");
// //         scanf("%d %s %d", &num1, operator, &num2);
// //     }

    
// //     ConvertDecimalToBinary(num1, bnum1);
// //     ConvertDecimalToBinary(num2, bnum2);

// //     if (operator[0] == '&')
// //     {
// //         total = num1 & num2;   
// //     }
// //     else if (operator[0] == '^')
// //     {
// //         total = num1 ^ num2;
// //     }
// //     else if (operator[0] == '|')
// //     {
// //         total = num1 | num2;
// //     }
// //     else if (operator[0] == '<')
// //     {
// //         total = num1 << num2;
// //     }
// //     else if (operator[0] == '>')
// //     {
// //         total = num1 >> num2;
// //     }
// //     ConvertDecimalToBinary(total, btotal); 

// //     printf("\nIn base 10...\n\n");
// //     printf("%d %s %d = %d\n\n", num1, operator, num2, total);

// //     printf("In 8-bit base 2...\n\n");

// //     printf("%s", bnum1);

// // }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define BITS 8 // Define the number of bits

// void ConvertDecimalToBinary(int decimal, char binaryArray[BITS + 1]); // +1 for the null terminator

// int main() {
//     int num1, num2, result;
//     char operator[3];
    
//     // Prompt for and store numbers and operator
//     printf("Enter two numbers and an operator (& or |): ");
//     scanf("%d %d %2s", &num1, &num2, operator);

//     // Validate input numbers
//     while (num1 < 0 || num1 > 255 || num2 < 0 || num2 > 255) 
//     {
//         printf("Invalid input. Enter two numbers (0-255) and an operator: ");
//         scanf("%d %d %2s", &num1, &num2, operator);
//     }

//     // Perform the bitwise operation
//     if (operator[0] == '&') 
//     {
//         result = num1 & num2;
//     } 
//     else if (operator[0] == '|') 
//     {
//         result = num1 | num2;
//     } 
//     else 
//     {
//         printf("Invalid operator. Program will exit.\n");
//         return 1;
//     }

//     char binaryResult[BITS + 1];
//     char bnum1[BITS + 1];
//     char bnum2[BITS + 1]; // +1 for the null terminator

//     // Convert the result to binary
//     ConvertDecimalToBinary(num1, bnum1);
//     ConvertDecimalToBinary(num2, bnum2);
//     ConvertDecimalToBinary(result, binaryResult);

//     printf("In 8-bit base 2...\n\n");
//     printf(" %s\n", bnum1);
//     printf(" %s\n", operator);
//     printf(" %s\n", bnum2);
//     printf(" %s\n", binaryResult);

//     return 0;
// }

// void ConvertDecimalToBinary(int decimal, char binaryArray[BITS + 1]) 
// {
//     for (int i = BITS - 1; i >= 0; i--) {
//         binaryArray[BITS - 1 - i] = (decimal & (1 << i)) ? '1' : '0';
//     }
//     binaryArray[BITS] = '\0';
// }
