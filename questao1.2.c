/*
Agatha Lemos Batista- 2115200001;
Ana Flávia Oliveira Candido- 2015090057;
Emilly Gabrielly de Freitas Lima- 2115200061;
*/
#include <stdio.h>
int main(int argc, char** argv)
{
	int num, maior, cont;

	maior=0;
	cont=1;

	while(cont<=5)
	{
		printf("Digite um número \n");
		scanf("%d", &num);

		if(num>maior)
		{
			maior=num;
		}
		cont++;
	}

	printf("\nMaior: %d\n", maior);

	return 0;
} 
