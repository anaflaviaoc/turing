/*

Ághata Lemos Batista - 2115200001
Ana Flávia Oliveira Candido - 2015090057
Emilly Gabrielly de Freitas Lima - 2115200061

*/

#include<stdio.h>

int main()
{
    int n, cont=0, i, j=2, nDiv=0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    while(j<n)
    {
        i=1;
        while(i<=j)
        {
            if(j%i==0)
            {
                cont++;

            }
            i++;
        }
        if(cont==2)
        {
            printf("%d\n", j);
        }
        cont=0;
        j++;
        nDiv++;
    }
    printf("Numero de divisoes: %d\n", nDiv);
    return 0;
}
