/*
Escreva um programa que simule contas bancárias, com as seguintes especificações:

-Ao iniciar o programa vamos criar contas bancárias para três clientes.
-Cada conta cliente terá o nome, CPF.
-Cada conta terá número da conta, cpf do cliente e saldo;
-No ato da criação da conta o cliente precisará fazer um depósito inicial.
-Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas. OBS: Crie um menu com essas opções.
-Para fazer qualquer operação, o cliente deverá informar o número da conta e o valor.
-Sempre que uma operação de saque ou depósito for realizada, o sistema deverá imprimir o nome do titular e o saldo final da conta.

*/

#include <stdio.h>
#include <stdlib.h>

#define totClientes 3

typedef struct
{
	char nome[15];
	char cpf[11];
    int numConta;
	float saldo;
}ContaCliente;

int main(){
	
	ContaCliente cadCont[totClientes];
	float deposito;
	
	deposito = 0;
	
	for (int i = 0; i < totClientes; i++){ // gerar um numero sequencial para cada novo cliente que for cadastrado.
		cadCont[i].numConta = i+1;
	}
	
	printf("*** CADASTRO DE CONTA BANCARIA ***\n\n");
	
	for (int i = 0; i < totClientes; i++){ // cadastrando a conta
		printf("Digite o nome do cliente: ");
		scanf("%s", cadCont[i].nome);
		getchar();
		
		printf("Informe o CPF do cliente: ");
		scanf("%s", cadCont[i].cpf);
		getchar();
		
		printf("Informe o valor a ser depositado: ");
		scanf("%f", &deposito);
		getchar();
		
		cadCont[i].saldo = deposito;

		printf("Numero da conta do cliente: %i", cadCont[i].numConta);
		printf("\n");
	}
	
	char opcao = 'n';
	int operation;
	float saque;
	int buscaConta;
	
	saque = 0;
	
	do{
		printf("\n*** ESCOLHA A OPERACAO ***\n"); // menu de operacoes
		printf("\t1. SAQUE\n");
		printf("\t2. DEPOSITO\n");
		scanf("%i", &operation);
		getchar();
		
		switch (operation){
			case 1:
				printf("\nVc selecionou *SAQUE*");
				printf("\n\nInforme o numero da conta e o valor a ser retirado: ");
				scanf("%i %f", &buscaConta, &saque);
				getchar();
				
				for (int i = 0; i < totClientes; i++){
					if (buscaConta == cadCont[i].numConta){
						cadCont[i].saldo -= saque;
						printf("\nNome: %s", cadCont[i].nome);
						printf("\nSaldo atual: %.2f", cadCont[i].saldo);
						break;
					}
				}
				break;
				case 2:
				printf("\nVc selecionou *DEPOSITO*");
				printf("\n\nInforme o numero da conta e o valor a ser depositado: ");
				scanf("%i %f", &buscaConta, &deposito);
				getchar();
				
				for (int i = 0; i < totClientes; i++){
					if (buscaConta == cadCont[i].numConta){
						cadCont[i].saldo += deposito;
						printf("\nNome: %s", cadCont[i].nome);
						printf("\nSaldo atual: %.2f", cadCont[i].saldo);
						break;
					}
				}
				break;
				default:
					printf("\nOPERACAO INVALIDA!");
				break;
		}
	printf("\nDeseja continuar a operacao? (s/n) ");
	scanf("%c", &opcao);
	getchar();
	}while (opcao == 's');
	
	return 0;
}