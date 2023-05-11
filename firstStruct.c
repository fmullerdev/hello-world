/*
Escreva um programa que recebe as matrículas, os nomes e as notas das avaliações bimestrais de uma relação de alunos, na seguinte estrutura:

-nome: 30 caracteres;
-matricula: inteiro;
-notas: vetor de 3 reais;
-media: real.

Vetor tem no máximo 60 alunos. O cadastro dos alunos termina quando a matrícula 0 for entrada;

O programa deve emitir um relatório incluindo os nomes e as médias anuais, calculadas como médias aritméticas das avaliações bimestrais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define totAlunos 60

typedef struct
{
	char nome[30];
	int matricula;
	float notas[3];
	float media;
}Aluno;

int main(){
	
	Aluno classRoom[totAlunos];
	int i;
	
	for (i = 0; i < totAlunos; i++)
	{
		printf("\n");
		printf("Digite o nome do aluno [%i]: ", i+1);
		scanf("%s", classRoom[i].nome);
		getchar();
		
		printf("Digite a matricula  do aluno [%i]: ", i+1);
		scanf("%i", &classRoom[i].matricula);
		getchar();
		
		printf("Digite as notas do aluno [%i]: ", i+1);
		scanf("%f %f %f", &classRoom[i].notas[0], &classRoom[i].notas[1], &classRoom[i].notas[2]);
		getchar();
		
	}

	for (int j = 0; j < i; j++)
	{
		printf("O aluno %s na matricula %i tem a media %.2f.", classRoom[j].nome, classRoom[j].matricula, (classRoom[j].notas[0] + classRoom[j].notas[1] + classRoom[j].notas[2]) / 3);
		printf("\n");
	}
	
	
	return 0;
}