/*
Crie um sistema de agenda telefônica. Para isto, você deve criar a struct Contato, que possui nome e telefone. Neste sistema, existe um menu com as seguintes opções:

-Inserir um contato
-Visualizar todos os contatos
-Alterar nome ou numero do contato
-Sair
*/

#include <limits.h>
#include <stdio.h>
#include <string.h>

#define pessoas 100

typedef struct
{
	char nome[15];
	char telefone[11];
}Contato;


int main(){
	
	Contato agendaTelefonica[pessoas];
	int contatosCadastrados;
	
	printf("\t*** AGENDA TELEFONICA ***\n\n");
	
	char operation = 0;
	contatosCadastrados = 0;
	
	do{
		
		printf("INSIRA UMA OPERACAO.\n");
		printf("\n1. Inserir um contato.");
		printf("\n2. Visualizar todos os contatos.");
		printf("\n3. Alterar nome ou numero do contato.");
		printf("\n4. Sair.\n");
		scanf("%i", &operation);
		getchar();
		
      char newNome[15];
		
		char anotherContato;
		
		anotherContato = 's';
		
		int i;
		
		switch (operation)
		{
			case 1:
				printf("\nINSERIR UM CONTATO.\n\n");
				char continuar = 's';
				do{
					for (i = 0; i < pessoas; i++){
						printf("Nome: ");
						scanf("%s", agendaTelefonica[i].nome);
						getchar();
						
						printf("Numero de telefone: ");
						scanf("%s", agendaTelefonica[i].telefone);
						getchar();
						
						contatosCadastrados++;
						
						printf("Deseja cadastrar outro contato? (s/n) ");
						scanf("%c", &anotherContato);
						getchar();
						if (anotherContato == 'n'){
							i = pessoas;
							continuar = 'n';
							break;
						}
					}
				} while (continuar == 's');
			break;
			case 2:
				printf("\nVISUALIZAR TODOS OS CONTATOS.\n\n");
				for (i = 0; i < contatosCadastrados; i++){
					printf("Nome: %s",agendaTelefonica[i].nome);
					printf("\nTelefone: %s",agendaTelefonica[i].telefone);
					printf("\n");
				}
			break;
			case 3:
				printf("\nALTERAR DADO DE UM CONTATO.\n\n");
				printf("\nDigite o nome do contato a ser alterado: ");
				fgets(newNome, 15, stdin);
				for (int i = 0; i < contatosCadastrados; i++){
					if (strcmp(newNome, agendaTelefonica[i].nome) == 0){
						printf("\nNome: ");
						scanf("%s", agendaTelefonica[i].nome);
						getchar();
						
						printf("\nNumero de telefone: ");
						scanf("%s", agendaTelefonica[i].telefone);
						getchar();
					}
				}
			break;
			case 4:
				printf("\nSAINDO ... ");
			break;
			default:
				printf("\nOPCAO INVALIDA!\n");
			break;	
		}

	} while (operation != 4);
	
	return 0;
}