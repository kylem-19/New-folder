#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main (void)
{
   char camel[] = "Caravan";
   *(camel + 3) = '&';
   *(camel + 4) ^= 32;
   printf(camel);
}