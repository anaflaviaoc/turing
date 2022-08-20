/*
        Agatha Lemos Batista - 2115200001
        Ana Flávia Oliveira Candido - 2015090057
        Emilly Gabrielly de Freitas Lima - 2115200061
*/

#include <stdio.h>

int main(int argc, char** argv)
{
        float ap1, ap2, pf, media, medfinal;

        printf("Digite sua nota da AP1: ");
        scanf("%f", &ap1);

	printf("Digite sua nota da AP2: ");
	scanf("%f", &ap2);

        media = (ap1 + ap2)/2;

	if(media<8)
	{
		printf("Reprovado(a). Sua média foi: %.2f\n", media);

		printf("Digite sua nota da PF: ");
		scanf("%f", &pf);

		medfinal = ((2*media) + pf)/3;

		if(medfinal<6)
		{
			printf("Reprovado(a). Sua média final foi: %.2f\n", medfinal);
		}
		else
		{
			printf("Aprovado(a). Sua média final foi: %.2f\n", medfinal);
		}
	}
	else
	{
		printf("Aprovado(a). Sua média foi: %.2f\n", media);
	}

        return 0;
}
