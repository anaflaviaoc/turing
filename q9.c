/*

Ághata Lemos Batista - 2115200001
Ana Flávia Oliveira Candido - 2015090057
Emilly Gabrielly de Freitas Lima - 2115200061

*/

#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	int cont = 1;
	int div = 0;

	printf(" \tPrograma que lê um número e diz se é primo ou não . \n");
	printf("Digite um número inteiro: \n");
	scanf("%d", &n);

	while(cont<=n)
	{
		if(n%cont == 0)
		{
			div = div+1;
		}
		cont = cont+1;
	}
	if(div<=2)
	{
		printf("O numero %d é primo!\n", n);
	}
	else
	{
		printf("O numero %d não é primo! \n", n);
	}

	return 0;
}
