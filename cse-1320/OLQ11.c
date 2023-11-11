#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char argv[])
{
    char dog[100] = "efghudhuiogerfhuiobgjinximopsdaop";
    printf("%c", *(dog+5));
    printf("%c", *(strpbrk(dog, "gdi")+9));
    printf("%c", (int)strlen(dog)+65);
    printf("%d", abs(dog - strstr(dog, "obg")));

    
}