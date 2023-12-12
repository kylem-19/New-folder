#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char *name;
    char *category;
    char *ingredients;
} NODE;

int main(int argc, char *argv[])
{
    NODE Menu[100] = {};
    char FileLine[200] = {};
    int count = 0;
    char *token = NULL;
    FILE *FH = NULL;

    strcpy(FileLine, argv[1]);
        
    FH = fopen(FileLine, "r");
    if (FH == NULL)
    {
        printf("could not open file\n");
        exit(0);
    }

    while (fgets(FileLine, sizeof(FileLine)-1, FH))
    {
        token = strtok(FileLine, "|");
        Menu[count].category = malloc(strlen(token) * sizeof(char) + 1);
        strcpy(Menu[count].category, token);

        token = strtok(NULL, "|");
        Menu[count].name = malloc(strlen(token) * sizeof(char) + 1);
        strcpy(Menu[count].name, token);

        token = strtok(NULL, "|");
        Menu[count].ingredients = malloc(strlen(token) * sizeof(char) + 1);
        strcpy(Menu[count].ingredients, token);
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        printf("Category    : %s\nName  :%s\nIngredients    :%s\n\n",
                Menu[i].category, Menu[i].name, Menu[i].ingredients);
    }

    for (int i = 0; i < count; i++)
    {
        free(Menu[i].category);
        free(Menu[i].name);
        free(Menu[i].ingredients);
    }
    fclose(FH);    
}
