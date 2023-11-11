#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char argv[])
{
    char monkey[] = {"BANANABANANA"};
    fgets(monkey, 7, stdin);
    monkey[strlen(monkey)] = ' ';
    printf("%s", monkey);
    
}