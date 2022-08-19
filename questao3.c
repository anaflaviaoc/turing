/*
        Agatha Lemos Batista - 2115200001
        Ana Flávia Oliveira Candido - 2015090057
        Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int a, b, c, maior;

	printf("Digite um número: ");
	scanf("%d", &a);

	printf("Digite outro número: ");
	scanf("%d", &b);

	printf("Digite mais um número: ");
	scanf("%d", &c);

	if(a>b)
	{
		maior = a;

		if(c>maior)
		{
			maior = c;
		}
	}
	else
	{
		maior = b;

		if(c>maior)
		{
			maior = c;
		}
	}

	printf("O %d é o maior número.\n", maior);

	return 0;
}
