/*
Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas. Para isso, você deve criar uma struct Pessoa com esses dados.

1-Cadastre 5 pessoas com as informações necessárias.
2-Peça para o usuário informar um cpf. Se o cpf existir, imprima o nome e o IMC da pessoa encontrada.

Calculo IMC: peso / (altura * altura)

Entre 18,5 e 24,9 -> Normal
Entre 25,0 e 29,9 -> sobrepeso
Acima de 30,00 -> obesidade
Maior que 40,0 -> obesidade grave
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define usuarios 5

typedef struct
{
	char nome[15];
	float altura;
	float peso;
	char cpf[11];
	char sexo;
}Pessoas;

int main(){
	
	Pessoas cadastro[usuarios];
	float IMC;
	
	for (int i = 0; i < usuarios; i++)
	{
		system("cls");
		
		printf("*** CADASTRO DE USUARIOS ***\n\n");
		
		printf("Informe o nome do usuario [%i]: ", i+1);
		scanf("%s", cadastro[i].nome);
		getchar();
		
		printf("Informe a altura do usuario [%i]: ", i+1);
		scanf("%f", &cadastro[i].altura);
		getchar();
		
		printf("Informe o peso do usuario [%i]: ", i+1);
		scanf("%f", &cadastro[i].peso);
		getchar();
		
		printf("Informe o sexo do usuario [%i] - (M/F): ", i+1);
		scanf("%c", &cadastro[i].sexo);
		getchar();
		
		printf("Informe o CPF do usuario [%i]: ", i+1);
		scanf("%s", cadastro[i].cpf);
		getchar();
	}

	char cpf2[11]; // CPF localizador

	printf("\nInforme um CPF para a busca do cadastro: ");
	scanf("%s", cpf2);
	getchar();
	
	int found = 0;

	for (int i = 0; i < usuarios; i++)
	{
		if (strcmp(cpf2, cadastro[i].cpf) == 0){
			found = 1;
			IMC = cadastro[i].peso / (cadastro[i].altura * cadastro[i].altura);
			printf("\n\nCADASTRO ENCONTRADO\n\n");
			printf("Nome: %s", cadastro[i].nome);
			printf("\nAltura: %.2f", cadastro[i].altura);
			printf("\nPeso: %.2f kg", cadastro[i].peso);
			printf("\nSexo: %c", cadastro[i].sexo);
			printf("\nCPF: %s", cadastro[i].cpf);
			printf("\nIMC: %.2f", IMC);
			if (IMC <= 24.9){
				printf("\nO IMC do usuario esta normal.");
			}
			else if (IMC <= 29.9){
				printf("\nO IMC do usuario esta no nivel: sobrepeso.");
			}
			else if (IMC < 40){
				printf("\nO IMC do usuario esta no nivel: obesidade!");
			}
			else{
				printf("\nO IMC do usuario esta no nivel: obesidade grave.");
			}
			break;
		}
	}

	if (found == 0){
		printf("\nCADASTRO NAO ENCONTRADO!");
	}
	
	return 0;
}