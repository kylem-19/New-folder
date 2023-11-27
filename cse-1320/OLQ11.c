#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // char greeting[] ={"Hello there-How are you&I am fine*"};
    // char phrase1[20] = {};
    // char phrase2[20] = {};
    // char phrase3[20] = {};

    // char *token;
    // char delimiters[] = "-,&,*";

    // token = strtok(greeting, delimiters);
    // strcpy(phrase1, token);
    // token = strtok(NULL, delimiters);
    // strcpy(phrase2, token);
    // token = strtok(NULL, delimiters);
    // strcpy(phrase3, token);

    // printf("%s %s %s", phrase2, phrase3, phrase1);
    // return 0;


    char alpha[] = "Supercalifragilisticexpialidocious";
    printf("%c", *(alpha+7));
    printf("%c", *(strpbrk(alpha, "dzq")+4));
    printf("%c", (int)strlen(alpha)*2);
    printf("%d", abs(alpha - strstr(alpha, "list")));
printf("\t%ld", strlen(alpha)*2);

    // struct car
    // {
    //     int mph;
    //     float price;
    //     char model;
    //     char body[100];
    // };
    // struct car mycar = {};
    



}


