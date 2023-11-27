#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void get_command_line_parameter(char *argv[], char PName[], char PValue[])
{
    int i = 1;

    while (argv[i] != NULL)
    {
        if (!strncmp(argv[i], PName, strlen(PName)))
        {
            strcpy(PValue, strchr(argv[i], '=') +1);
        }
        i++;   
    }
}


int main(int argc, char *argv[])
{
    // int i;
    // FILE *myFile;
    // char buffer[20];

    // myFile = fopen(argv[1], "r+");
    // strcpy(buffer, "How are you?");
    // fputs(buffer, myFile);
    // printf("file pointer is %ld\n", ftell(myFile));
    // fseek(myFile, 0, SEEK_SET);
    // printf("file pointer is %ld\n", ftell(myFile));


    // char buffer2[100] = {"Taxes are due on April 15, 2020."};
    // char buffer3[20] = {};
    // sscanf(buffer2, "%*s %*s %*s %*s %*s %s %*s", buffer3);
    // printf("%s", buffer2);


    // FILE *Dalmations;
    // int pack = 200;
    // char buffer4[20] = {};
    // Dalmations = fopen("Spot", "w+");
    // sprintf(buffer4, "%d", pack >> 1 + 1);
    // fprintf(Dalmations, "%s", buffer4);

    // char filename[100] = {"Hanger.txt"};
    // char mode[2] = {"r+"};

    // char x[100] = {};
    // char y[100] = {};

    // get_command_line_parameter(argv, "CatName=", x);
    // get_command_line_parameter(argv, "DogName=", y);

    // // printf("%s%s", filename, mode);

    // FILE *Bird = fopen(x, "w+");
    // fprintf(Bird, "%s", y);
    // fclose(Bird);

    // return 0;
}