/*
Agatha Lemos Batista- 2115200001;
Ana Flávia Oliveira Candido- 2015090057;
Emilly Gabrielly de Freitas Lima-2115200061;
*/
#include <stdio.h>

int main(int argc, char** argv)
{
	float a;

	printf("Insira um número entre o intervalo de 0 a 10! \n");
	scanf("%f", &a);

	while(a>10 || a<0)
	{
		printf("Número inválido \n");
		printf("Insira um número entre o intervalo de 0 a 10! \n");
		scanf("%f", &a);
	}
	return 0;
}
