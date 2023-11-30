

// int main(int argc, char *argv[])
// {
//     int count = 0;

//     if (argc > 1)
//     {
//         for (int i = 1; i < argc; i++)
//         {
//             if (!strcmp(argv[i], "TEXT"))
//             {
//                 count++;
//             }
            
//         }
        
//     }
//     printf("%d\n", count);
//     return 0;
// }

// int main()
// {
//     enum lksjd
//     {
//         oilkjs, jlksie=1, qleke, lkadjf3=15, alkdsj3l
//     };

//     printf("%d", oilkjs+jlksie-qleke+lkadjf3-alkdsj3l);

//     return 0;
// }


// struct car
// {
//     int price;
//     float miles;
//     char model;
//     char brand[20];
// };
// struct car mycar = {};



// int main()
// {
//     char alpha[] = "Supercalifragilisticexpialidocious";
//     printf("%c", *(alpha+15));
//     printf("%c", *(strpbrk(alpha, "xzq")+9));
//     printf("%c", (int)strlen(alpha)*3);
//     printf("%d", abs(strstr(alpha, "pial")-alpha));
// }

#include <stdio.h>
int main()
{
    FILE *original, *copy;
    char FileLine[80] = {};

    original = fopen("makefile", "r+");
    copy = fopen("makecopy", "w");

    while (fgets(FileLine, sizeof(FileLine-1), original))
    {
        fprintf(copy, "%s", FileLine);
    }
    return 0;
}