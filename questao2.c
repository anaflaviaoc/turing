/*
        Agatha Lemos Batista - 2115200001
        Ana Flávia Oliveira Candido - 2015090057
        Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int a;

	printf("Digite um número: ");
	scanf("%d", &a);

	if(a>0)
	{
		printf("O número %d é positivo.\n", a);
	}
	else
	{
		printf("O número %d é negativo.\n", a);
	}

	return 0;
}
