/*
Agatha Lemos Batista- 2115200001;
Ana Flávia Oliveira Candido- 2015090057;
Emilly Gabrielly de Freitas Lima- 2115200061;
*/
#include <stdio.h>
int main(int argc, char** argv)
{
	int x, n, contador, potencia;

	printf("Digite um número inteiro: \n");
	scanf("%d", &x);
	printf("Digite outro número inteiro e não-negativo: \n");
	scanf("%d", &n);

	potencia=1;
	contador=0;

	while(contador !=n)
	{
		potencia=potencia*x;
		contador= contador+1;
	}

	printf("O valor de %d elevado a %d: %d\n", x, n, potencia);

	return 0;
}

