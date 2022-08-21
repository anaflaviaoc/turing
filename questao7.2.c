/*
Agatha Lemos Batista- 2115200001;
Ana Flávia Oliveira Candido- 2015090057;
Emilly Gabrielly de Freitas Lima- 2115200061;
*/
#include <stdio.h>
int main(int argc, char**  argv)
{
	int n, par, imp, num;

	n=1;
	par=0;
	imp=0;

	printf("\t Programa que lê 10 números inteiros. \n");

	while(n<=10)
	{
		printf("Digite o %d  número inteiro:", n);
		scanf("%d", &num);

		n= n+1;
		if(num%2 ==0)
		{
		 	par = par+1;
		}
		else
		{
			imp = imp+1;
		}
	}
	printf("A quantidade de números pares: %d \n", par);
	printf("A quantidade de números impares: %d \n", imp);

	return 0;
}
