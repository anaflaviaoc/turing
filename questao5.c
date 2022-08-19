/*
        Agatha Lemos Batista - 2115200001
        Ana Flávia Oliveira Candido - 2015090057
        Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	float a, b, c, menor;

	printf("Digite o valor do primeiro produto: \n");
	scanf("%f", &a);

        printf("Digite o valor do segundo produto: \n");
        scanf("%f", &b);

        printf("Digite o valor do terceiro produto: \n");
        scanf("%f", &c);

        if(a < b)
        {
                menor = a;
                if(c < menor)
                {
                        menor = c;
                }
        }
        else
        {
                menor = b;
                if(c < menor)
                {
			menor = c;
                }
        }

	printf("O produto de menor preço é: %f\n", menor);

        return 0;
}
