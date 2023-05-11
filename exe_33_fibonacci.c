#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 0 1 1 2 3 5 8 13… Ex: Se o usuário digitar 6, o valor a ser impresso é 8, que é o sexto valor da sequência.

int main(){
	setlocale(LC_ALL, "Portuguese-brazilian");
	
	int unsigned seq, fib, ant = 0, atual = 1, cont = 0;
	
	printf("Digite a sequência: ");
	scanf("%d", &seq);
	fflush(stdin);
	printf("%d %d ", ant, atual);
	while (cont < (seq-1)){
		fib = ant + atual;
		ant = atual;
		atual = fib;
		printf("%d ", fib);
		cont++;
	}
	return 0;
}