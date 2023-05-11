#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	
	system("cls");
	
	int age, numberSons, sumSons, minAge, maxAge, fathers = 3;
	float mat[3][fathers], payment, sumPayment, mPayment, sumAge, mAge, mSons;
	
	sumSons = 0;
	mPayment = 0;
	mAge = 0;
	mSons = 0;
	minAge = INT_MAX;
	maxAge = INT_MIN;
	
	for (int i = 0; i < 3; i++)
	{
		if ( i == 0 )
		{
			printf("*** INFORMAR OS SALARIOS DOS PAIS ***\n\n");
		}
		else if ( i == 1 )
		{
			printf("*** INFORMAR AS IDADES DOS PAIS ***\n\n");
	   }
	   else
	   {
	   	printf("*** INFORMAR A QUANTIDADE DE FILHOS DE CADA UM DOS PAIS ***\n\n");
		}
		
		for (int j = 0; j < fathers; j++)
		{
			printf("Digite a informacao do pai [%i]: ", j+1);
			scanf("%f", &mat[i][j]);
		}
		
		printf("\n");
	}
	
	for (int i = 0; i < fathers; i++)
	{
		printf("\nO pai [%i] tem %.0f anos, %.0f filho(s) e recebe R$%.2f.", i+1, mat[1][i], mat[2][i], mat[0][i]);
		
		sumPayment += mat[0][i];
		sumAge += mat[1][i];
		sumSons += mat[2][i];
		
		if (mat[1][i] < minAge)
		{
			minAge = mat[1][i];
		}
		
		if (mat[1][i] > maxAge)
		{
			maxAge = mat[1][i];
		}
	}
	
	mPayment = sumPayment / fathers;
	mAge = sumAge / fathers;
	mSons = sumSons / fathers;
	
	printf("\nA menor idade entre os pais eh: %i", minAge);
	printf("\nA maior idade entre os pais eh: %i", maxAge);
	
	return 0;
}