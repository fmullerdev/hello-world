#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

int main(){
	srand(time(NULL));
	
	int matrizA[6][6], matrizB[6][6], matrizC[6][6];
	
	// Preencher Matriz A
	printf("MATRIZ A\n");
	for (int l = 0; l < 6; l++)
	{
		for (int c = 0; c < 6; c++)
		{
			matrizA[l][c] = rand() % 10;
			printf("%i ", matrizA[l][c]);
		}
		printf("\n");
	}
	
	printf("\nMATRIZ B\n");
	// Preencher Matriz B
	for (int l = 0; l < 6; l++)
	{
		for (int c = 0; c < 6; c++)
		{
			matrizB[l][c] = rand() % 10;
			printf("%i ", matrizB[l][c]);
		}
		printf("\n");
	}
	
	printf("\nMATRIZ C\n");
	// Preencher Matriz C	
	for (int l = 0; l < 6; l++)
	{
		for (int c = 0; c < 6; c++)
		{
			matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
			printf("%i ", matrizC[l][c]);
		}
		printf("\n");
	}
	
	int menor = INT_MIN, maior = INT_MAX;
	
	printf("menor=>%i:  / maior=>%i", menor, maior);
	
	return 0;
}