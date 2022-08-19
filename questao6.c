/*
        Agatha Lemos Batista - 2115200001
        Ana Flávia Oliveira Candido - 2015090057
        Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int a, b, c, maior1, maior2, maior3;

	printf("Digite um número: ");
	scanf("%d", &a);

	printf("Digite outro número: ");
	scanf("%d", &b);

	printf("Digite mais um número: ");
	scanf("%d", &c);

	if(a>b)
	{
		if(a>c)
		{
			maior1 = a;
			if(b>c)
			{
				maior2 = b;
				maior3 = c;
			}
			else
			{
				maior2 = c;
				maior3 = b;
			}
		}
		else
		{
			maior1 = c;
			maior2 = a;
			maior3 = b;
		}
	}
	else if(b>c)
	{
		maior1 = b;
		if(a>c)
		{
			maior2 = a;
			maior3 = c;
		}
		else
		{
			maior2 = c;
			maior3 = a;
		}
	}
	else
	{
		maior1 = c;
		maior2 = b;
		maior3 = a;
	}

	printf("Ordem decrescente: %d > %d > %d\n", maior1, maior2, maior3);

	return 0;
}
