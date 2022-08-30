/*

Ághata Lemos Batista - 2115200001
Ana Flávia Oliveira Candido - 2015090057
Emilly Gabrielly de Freitas Lima -2115200061

*/

#include <stdio.h>
int main(int argc, char ** argv)
{
	float n, cont, cont2, soma;

	printf("digite o numero de termos: ");
	scanf("%f", &n);

	cont=0;
	cont2=2;
	soma=1;
	printf("H= 1/1 +");

	while(cont2<n)
	{
		printf("%.0f/%.0f +", cont2, cont+3);
		soma=soma+(cont2/(cont+3));
		cont= cont+2;
		cont2= cont2+1;
	}
	printf("%.0f/%.0f \n", n, cont+3);
	printf("A soma é: %f \n", soma + n/(cont+3));

	return 0;
}
