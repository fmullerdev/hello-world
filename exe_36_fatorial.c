#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese-brazilian");
	
	int num, cont = 1;
	float fat = 1;
	printf("Digite um número a ser fatorado: ");
	scanf("%d", &num);
	fflush(stdin);

	do {
		fat = fat * cont;
		cont++;
	} while (cont <= num);
	
	printf("\nO fatorial de %d é %f\n", num, fat);
	
	return 0;
}