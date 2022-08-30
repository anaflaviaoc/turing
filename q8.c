/*
 
Ághata Lemos Batista - 2115200001
Ana Flávia Oliveira Candido - 2015090057 
Emilly Gabrielly de Freitas Lima - 2115200061

*/

#include <stdio.h>

int main(int agrc, char** argv)
{
	int a, ultimo, penultimo, count, termo; 
	printf("Digite  um numero: \n");
	scanf("%d", &a);

	ultimo= 1;
	penultimo= 1;

	if(a==1 || a==2)
	{
		printf(" 1 \n");
	}
	else
	{
		printf("Termo %d\n", penultimo);
		printf("Termo %d\n", ultimo);
		count=3;
		while(count<=a)
		{
			termo= ultimo + penultimo;
			penultimo= ultimo;
			ultimo= termo;
			count += 1;
			printf("Termo %d\n", termo);
		}
	}
	return 0;
}
