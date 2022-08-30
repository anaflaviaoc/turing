/*

Ághata Lemos Batista - 2115200001
Ana Flávia Oliveira Candido - 2015090057
Emilly Gabrielly de Freitas Lima - 2115200061

*/

#include <stdio.h>
int main(int argc, char** argv)
{
	float n, cont, cont2;

	printf("digite o número de termos: ");
	scanf("%f", &n);

	cont=0;;
	cont2=2;
	printf("H= 1/1 +");

	while(cont2<n)
	{
		printf(" %.0f/%.0f +", cont2, cont+3);
		cont= cont+2;
		cont2= cont2+1;
	}
	printf("%.0f/%.0f \n", n, cont+3);

	return 0;
}
