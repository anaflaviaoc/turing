/*
Agatha Lemos Batista- 2115200001;
Ana Flávia Oliveira Candido- 2015090057;
Emilly Gabrielly de Freitas Lima-2115200061;
*/
#include <stdio.h>
int valor;
int main( int argc, char** argv)
{
	int n100=0, n50=0, n10=0, n5=0, n1=0;

	printf("Digite o valor do saque: \n");
	scanf("%d", &valor);

	n100= valor/100;
	valor= valor%100;

	n50= valor/50;
	valor= valor%50;

	n10= valor/10;
	valor= valor%10;

	n5= valor/5;
	valor= valor%5;

	n1= valor;

	printf("\nNotas de R$100,00: %d\n", n100);
	printf("\nNotas de R$50,00: %d\n", n50);
	printf("\nNotas de R$10,00: %d\n", n10);
	printf("\nNotas de R$5,00: %d\n", n5);
	printf("\nNotas de R$1,00: %d\n", n1);

	return 0;
}
