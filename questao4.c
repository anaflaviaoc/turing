/*
        Agatha Lemos Batista - 2115200001
        Ana Flávia Oliveira Candido - 2015090057
        Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>

int main(int argc, char** argv)
{
        int a, b, c, maior, menor;

        printf("Digite um número:\n");
        scanf("%d", &a);

        printf("Digite outro número: \n");
        scanf("%d", &b);

        printf("Digite mais um número: \n");
        scanf("%d", &c);

        if(a > b)
        {
                if(a > c)
                {
                        maior = a;
                }
                else
                {
                        maior = c;
                }
        }
        else
        {
                if(b > c)
		{
                        maior = b;
                }
                else
                {
                        maior = c;
                }
        }
        if(a < b)
        {
                if(a < c)
                {
                        menor = a;
                }
                else
                {
                        menor = c;
                }
        }
        else
        {
                if(b < c)
                {
                        menor = b;
                }
                else
                {
                        menor = c;
                }
        }

	printf("O maior número é: %d\n", maior);
	printf("O menor número é: %d\n", menor);

        return 0;
}
