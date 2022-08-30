/*

Ághata Lemos Batista - 2115200001
Ana Flávia Oliveira Candido - 2015090057
Emilly Gabrielly de Freitas Lima - 2115200061

*/

#include <stdio.h>
int main(int argc, char** argv)
{
	int num, a;
	printf("Digite um número inteiro: \n");
	scanf("%d", &num);
	if(num >= 0)
	{
		do
		{
			a = num % 10;
			printf("%d", a);
			num /= 10;
		}
		while(num != 0);
		{
			printf(" é o numero invertido\n");
		}
	}
	else
	{
		if(num < 1)
		{
			num = num * -1;
			printf("-");
			do
			{
				a = num % 10;
				printf("%d", a);
				num /=10;
			}
			while(num != 0);
			{
				printf(" é o numero invertido\n");
			}
		}
	}

	return 0;
}
