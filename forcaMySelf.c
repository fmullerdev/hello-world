#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
	
	char secretWord[20], dica[30], checkSecretWord[20];
	int totTents, totRights, sizeWord;
	
	system("cls");
	
	printf("\tInforme a palavra secreta: ");
	fgets(secretWord, 20, stdin);
	system("cls");
	
	sizeWord = 0;
		
	sizeWord = strlen(secretWord);
	totRights = 0;
	totTents = (sizeWord-1) * 2;
	
	printf("\tInforme a dica: ");
	fgets(dica, 30, stdin);
    system("cls");
   
   for (int i = 0; i < sizeWord-1; i++) // imprimindo os "underlines" na tela
	{
		for (int j = 0; j < sizeWord-1; j++)
		{
			checkSecretWord[i] = '_';
		}
	}

    
	while ( ( totTents > 0 ) && ( totRights < (sizeWord-1)) )
	{
				
		printf("\n\nDica => %s\nNumero de letras %i", dica, sizeWord-1);
	   printf("\nTentativas => %i\n\n", totTents);
	   
	   for (int i = 0; i < sizeWord-1; i++) // validando se as letras sao correspondentes
		{
			printf("%c ", checkSecretWord[i]);
	   }
	   printf("\nACERTOS -> %i", totRights);
		
		char letter = ' ';
		
		printf("\nDigite uma letra: ");
		scanf("%c", &letter);
		getchar();
		

		int allRight = 0; // controlar se letra existe
		
		for (int i = 0; i < sizeWord-1; i++) // validando se as letras sao correspondentes
		{
			if (letter == secretWord[i])
			{
				checkSecretWord[i] = toupper(letter);
				allRight = 1;
			}
	   }
	   
	   if ( allRight == 0 )
	   {
	   	totTents--;
	   	printf("\n *** ERROU! ***\n");
		}
		else
		{
			totRights++;
		}
		
		
	}
	
	printf("totRights -> %i", totRights);
	printf("\ntotTents -> %i", totTents);
	printf("\nsizeWord-1 -> %i", sizeWord-1);
	
	if ( (totRights) == (sizeWord-1) )
	{
		printf("\n *** PARABENS, VC ACERTOU! ***");
	}
	else
	{
		printf("\n *** NAO FOI DESSA VEZ! ***");
	}
}