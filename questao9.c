/*
        Agatha Lemos Batista - 2115200001
        Ana Flávia Oliveira Candido - 2015090057
        Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
        float a,b,c,delta, r1, r2;

        printf("Informe os coeficientes de uma equação quadrática:\n");
        scanf("%f", &a);

        if(a==0)
        {
                printf("Não é uma equação do segundo grau.\n");
        }
        else
        {
                printf("Coeficiente b: \n");
                scanf("%f", &b);
                printf("Coeficiente c: \n");
                scanf("%f", &c);

                delta = b*b - 4*a*c;

                if( delta<0)
                {
                        printf("Equação não possui raiz quadrática.\n");
                }
 		else
                {
                        r1=(-b + sqrt(delta))/2*a;
                        r2=(-b - sqrt(delta))/2*a;

                        if(r1==r2)
                        {
                                printf("Equação possui apenas uma raiz real: %2.f \n", r1);
                        }
                        else
                        {
                                printf("Equação possui duas raízes reais: %2.f e %2.f \n", r1, r2);
                        }
                }
        }
        return 0;
}
