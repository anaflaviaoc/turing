/*
	Ana Flávia Oliveira Candido - 2015090057
	Ágatha Lemos Batista - 2115200001
	Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int a, b;

	 printf("Digite um número:\n");
	scanf("%d", &a);
	printf("Digite outro número: \n");
	scanf("%d", &b);

	if(a > b)
        {
		printf("O número maior é: %d\n", a);
        }
	else
        {
		printf("O número maior é: %d\n", b);
        }

        return 0;
}
