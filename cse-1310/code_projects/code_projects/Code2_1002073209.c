// Kyle Moore //
// 1002073209 //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(0));
    int myRandomNumber = rand() % 21;
    int usernumber = 0;
    

    printf("Pick a question to answer\n\n");
    printf("1.  Is my formatting correct?\n");
    printf("2.  Will it rain tommorow?\n");
    printf("3.  Should I use tab or spacebar?\n");
    printf("4.  Are aliens real?\n");
    printf("5.  Can we time travel?\n");
    scanf("%d", &usernumber);

    printf("Your choice : %d\n", usernumber);


    switch (myRandomNumber)
    {
    case 1:
        printf("Reply hazy, try again.\n");
        break;
    case 2:
        printf("It is certain.\n");
        break;
    case 3:
        printf("It is decidedly so.\n");
        break;
    case 4:
        printf("Wihout a doubt.\n");
        break;
    case 5:
        printf("Yes definetly\n");
        break;
    case 6:
        printf("You may rely on it.\n");
        break;
    case 7:
        printf("As I see it, yes.\n");
        break;
    case 8:
        printf("Most likely.\n");
        break;
    case 9:
        printf("Outlook good.\n");
        break;
    case 10:
        printf("Yes.\n");
        break;
    case 11:
        printf("Signs point to yes.\n");
        break;
    case 12:
        printf("Ask again later.\n");
        break;
    case 13:
        printf("Better not tell you now.\n");
        break;
    case 14:
        printf("Cannot predict now.\n");
        break;
    case 15:
        printf("Concentrate and ask again.\n");
        break;
    case 16:
        printf("Dont count on it.\n");
        break;
    case 17:
        printf("My reply is no\n");
        break;
    case 18:
        printf("My sources say no.\n");
        break;
    case 19:
        printf("Outlook not so good.\n");
        break;
    case 20:
        printf("Very doubtful.\n");
        break;
    default:
        printf("Not sure how we got here.\n");
        break;
    }
   printf("%d", myRandomNumber);
}