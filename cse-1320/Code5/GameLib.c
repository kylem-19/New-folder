/* GameLib Template */

#include "GameLib.h"
#include <string.h>
#include <stdlib.h>

void StartGame(char ChosenPhrase[])
{
	#include "PhraseBank.txt"
	char DashPhrase[MAX_INPUT] = {};
	int i = 0;
	int Choice = 0;
		
	

	printf("\n\nWelcome to %d STRIKES - YOU'RE OUT - the CSE version\n\n", STRIKES);
	
	printf("Please pick a phrase from the following menu\n\n");
	
	while(strcmp(PhraseBank[i], "") != 0)/* while PhraseBank[i] is not empty "" */
	{
		CheckPhrase(PhraseBank[i]);/* Call CheckPhrase with PhraseBank[i] */
		DashIt(PhraseBank[i], DashPhrase);/* Call DashIt with PhraseBank[i] and DashPhrase */
		printf("%d.\t%s\n", i+1, DashPhrase);
		i++;
	}
	
	printf("\nEnter choice : ");
	scanf("%d", &Choice);
	
	while (Choice < 1 || Choice > i)/* create a while condition that is true when Choice is less than 1 or greater than i */
	{
		printf("You entered an invalid choice.\nPlease reenter ");
		scanf("%d", &Choice);
	}
	
	strcpy(ChosenPhrase, PhraseBank[Choice -1]);/* copy the phrase from PhraseBank based on Choice into ChosenPhrase */ 	
}

void CheckPhrase(char *Phrase)
{
	char *FindDash = NULL;/* Declare a char pointer named FindDash and initialize it to NULL */
	 
	FindDash = strchr(Phrase, '-');/* call strchr() with Phrase and a dash and store the result in FindDash.  If that */
	if (FindDash != NULL)/* value is not NULL, then you found a dash                                        */
	{
		printf("\n\"%s\" contains a dash in position %d!!\n", Phrase, abs(Phrase-FindDash)+1);
		printf("\nYou broke the rules.  We can't play.  BYE!!\n\n");
		exit(0);/* exit the program */
	}
}

int GuessALetter(char Phrase[], char DashedPhrase[], char upperPhrase[])
{
	char Guess;
	char *FindGuess = NULL;
	char UpperPhraseCopy[MAX_INPUT];
	int FoundALetter = 0;
	
	strcpy(UpperPhraseCopy, upperPhrase);/* copy UpperPhrase into UpperPhraseCopy */
		
	printf("\n\n%s", DashedPhrase);	
	printf("\n\nGuess a letter : ");
	scanf(" %c", &Guess);
	getchar();
	toupper(Guess);/* uppercase Guess */

	FindGuess = strchr(UpperPhraseCopy, Guess);/* Use strchr() to look for Guess in UpperPhraseCopy.  Store the result of strchr() */
	/* in FindGuess                                                                     */
	
	while (FindGuess != NULL)/* while FindGuess is not NULL */
	{
		FoundALetter = 1;
		DashedPhrase[FindGuess - UpperPhraseCopy] = Phrase[FindGuess - UpperPhraseCopy];
		*FindGuess = '-';/* Dereference FindGuess and set it to a dash */

		FindGuess = strchr(UpperPhraseCopy, Guess);/* Call strchr() again */
	}
	
	return FoundALetter;
}

void DashIt(char *Phrase, char DashPhrase[])
{
	char *ReplaceIt;
	char Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (i = 0; i < MAX_INPUT; i++)
	{
		DashPhrase[i] = toupper(Phrase[i]);
	}
	DashPhrase[strlen(DashPhrase)] = '\0';
	
	ReplaceIt = strpbrk(DashPhrase, Alphabet);

	while (ReplaceIt != NULL)/* while ReplaceIt is not NULL */
	{
		*ReplaceIt = '-';/* Dereference ReplaceIt and set it to a dash */
		ReplaceIt = strpbrk(DashPhrase, Alphabet);/* Call strpbrk() again */
	}
}
