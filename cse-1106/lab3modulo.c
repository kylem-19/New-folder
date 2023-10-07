#include <stdio.h>
#include <stdint.h>

int main() 
{

    uint8_t a = 0;
    uint8_t b = 6;

    for (int i = 0; i < 32; i++) {
        printf("%u\t\t\t%d\t\t%d\t\t%d\n", a, a == b, a < b, a > b);
        a = (a + 1) % 16;
    }

    return 0;
}
