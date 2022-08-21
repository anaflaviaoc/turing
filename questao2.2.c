/*
Agatha Lemos Batista- 2115200001;
Ana Flavia Oliveira Candido- 2015090057;
Emilly Gabrielly de Freitas Lima- 2115200061;
*/
#include <stdio.h>
int main(int argc, char**  argv)
{
	float soma=0, cont=1, num, med;

	printf("Digite cinco números \n");

	while (cont<=5)
	{
		scanf("%f", &num);
		soma= soma+ num;
		cont++;
	}

	med= soma/5;
	printf("Soma %.2f \n", soma);
	printf("Media %.2f \n", med);

	return 0;
}
