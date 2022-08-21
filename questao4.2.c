/*
Agatha Lemos Batista- 2115200001;
Ana Flávia Oliveira Candido- 2015090057;
Emilly Gabrielly de Freitas Lima- 2115200061;
*/
#include <stdio.h>

int main(int argc, char** argv)
{
	int x, y;

	printf("Digite o número superior\n");
	scanf("%d", &x);
	printf("Digite o número inferior\n");
	scanf("%d", &y);

	if(y>x)
	{
		printf("Erro! Digite novamente \n");
	}
	else
	{
		printf("O intervalo entre os dois números é: \n");
	}

	while(y<x)
	{
		y=y+1;

		if(y<x)
		{
			printf("%d \n", y);
		}
	}

	return 0;
}
