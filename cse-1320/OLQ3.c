// UNIX
// Number Conversions
// Previous OLQ questions
// Difference between "++" and "--" before or after a variable.
// Logical operators ^, &&, ||
// Identiy difference between auto and forced type casting.
// Bitwise operators
// Bitmasks

#include <stdio.h>

int main(void)
{
    int counter;

    printf("Enter value for counter: ");
    scanf("%d", &counter);

    printf("Value of counter is %d\n", counter);
    counter = ++counter;
    printf("Value: %d\n", counter);
    counter = counter++;
    printf("Value: %d\n", counter);
    counter = ++counter;
    printf("Value: %d\n", counter);
    return 0;
}
