#include <stdio.h>
#include <stdint.h>

void printBinary(uint8_t n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    uint8_t a = 0;
    uint8_t b = 6;

    printf("a\tbinary(a == b)\ta < b\t\ta > b\n");

    for (int i = 0; i < 512; i++) {
        printf("%u\t%d\t\t%d\t\t%d\n", a, (a == b) ? 1 : 0, a < b, a > b);
        a++;

        if (a == 256) {
            a = 0;
        }
    }

    return 0;
}
