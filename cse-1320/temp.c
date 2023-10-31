#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    // char *Birds[] = {"rOBiN", "bLuE jAy", "CroW", "sEaguLl", "eGrEt"};
    // char **Nest = Birds;
    // int *A = NULL;
    // char B = 'B';
    // A = (int *)&B;
    // printf("conents of bis %c", *A);
    // printf("%c%c%c", toupper(*(*(Nest+1)+3)),tolower(*(*(Nest+3)+3)),toupper(*(*(Nest+4)+1)));
    // double MyVar;
    //     *&*&*&*&*&*&*&*&*&*&*&MyVar = 3.2;

    // int g = 100;
    // int *gp = NULL;

    // gp = &g;

    // *gp /= 3;
    // // printf("%d", g);
    // g+=20;
    // // printf("%d", g);

    // *gp = *&*&*&*&*&*&*&*&*gp + g;

    // printf("\n%d", g**gp);


    // char *p[] = {"Ariel", "Aurora", "Merida", "Belle", "Rapunzel", "Ponchotas", ""};
    // char **prince = p;
    // printf("%c%c%c%c%c", toupper(*(*(prince + 5)+7)), *(*(prince + 2)+3),
    //                         *(*(prince  + 4 )+1), *(*(prince + 4)+4), *(*(prince + 1) +5));
    long **c = NULL;
    long *d = NULL;
    long b = 3;

    c = &d;
    // d = &b;

    b += **c;

    printf("%d", b);

}