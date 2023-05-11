#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese-brazilian");
	
	int num, i=1;
	// Fatoração retorna numeros grandes que não cabem em 2 bites
	float fator;
	
	printf("Digite o numero que deseja calcular o fatorial: ");
	scanf("%d", &num);
	fator=1;
	
	do{
	fator=fator * i;
	i++;
	} while (i<=num);
	
	printf("O resultado eh %f", fator);
	return 0;
}