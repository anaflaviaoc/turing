/*

Ághata Lemos Batista - 2115200001
Ana Flávia Oliveira Candido - 2015090057
Emilly Gabrielly de Freitas Lima - 2115200061

*/

#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	float termo, resultado=0,contr=1;

	printf("Digite o número de termos: ");
	scanf("%d", &n);

	printf("H = ");

	while(contr <= n)
	{
		termo = 1/contr;
		if(contr>1)
		{
			printf("1/%.0f", contr);
		}
		else
		{
			printf("1");
		}
		if((n-contr)>0)
		{
			printf("+");
		}
		resultado= resultado+termo;
		contr++;
	}
	printf("\nResultado de H =%2.f \n", resultado);

	return 0;
}

