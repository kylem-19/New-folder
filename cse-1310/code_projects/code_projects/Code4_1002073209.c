// Kyle Moore //
// 1002073209 //
#include <stdio.h>

int GetValue(char startend[], char outmidinn[])
{
    int value;
    printf("Enter %s value for %s loop  ", startend, outmidinn);
    scanf("%d", &value);
    return value;
}

int CheckValues(int start, int end)
{
    if (start > end)
    {
        printf("\n");
        printf("Starting value must be less than ending value. Please reenter\n\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int startout, endout, startmid, endmid, startinn, endinn;
    char mychar;
    printf("What character do you want to use? ");
    scanf("%c", &mychar);

    do
    {
        startout = GetValue("starting", "outer");
        endout = GetValue("ending", "outer");
    } while (CheckValues(startout, endout));
    
    do
    {
        startmid = GetValue("starting", "middle");
        endmid = GetValue("ending", "middle");
    } while (CheckValues(startmid, endmid));
    
    do
    {
        startinn = GetValue("starting", "inner");
        endinn = GetValue("ending", "inner");
    } while (CheckValues(startinn, endinn));

    for (int range = startout; range < endout; range++)
    {
        for (int range2 = startmid; range2 < endmid; range2++)
        {
              for (int range3 = startinn; range3 < endinn; range3++)
              {
                printf("%c", mychar);
              }
              printf("\n");     
        }
        printf("\n");
    }

    return 0;
}