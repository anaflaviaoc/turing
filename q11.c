/*

Ághata Lemos Batista - 2115200001
Ana Flávia Oliveira Candido - 2015090057
Emilly Gabrielly de Freitas Lima -2115200061

*/

#include <stdio.h>
int main(int argc, char** argv)
{
	int n, contador, fatorial;

	printf("\n\tCálculo do fatorial de um numero \n");
	printf("Digite um numero inteiro não-negativo; \n");
	scanf("%d", &n);

	fatorial = 1;
	contador = 2;

		while (contador <= n)
		{
			fatorial = fatorial * contador;
			contador = contador + 1;
		}
		printf("O valor de %d!: %d\n", n, fatorial);
	return 0;
}
