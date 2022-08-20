/*
        Agatha Lemos Batista - 2115200001
        Ana Flávia Oliveira Candido - 2015090057
        Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>

int main(int argc, char** argv)
{
        float a, b, c;

        printf("Informe o primeiro lado do triângulo: ");
        scanf("%f", &a);

	printf("Informe outro lado do triângulo: ");
	scanf("%f", &b);

	printf("Informe o último lado do triângulo: ");
	scanf("%f", &c);

        if(a+b>c && a+c>b && b+c>a)
        {
                if(a==b && a==c)
                {
                	printf("É um triângulo equilátero!\n");
                }
                else
                {
                        if(a==b || a==c || b==c)
                        {
                                printf("É um triângulo isósceles!\n");
                        }
                        else
                        {
                                printf("É um triângulo escaleno!\n");
                        }
                }
	 }
        else
        {
                printf("Não pode ser um triângulo.\n");
        }

        return 0;
}
