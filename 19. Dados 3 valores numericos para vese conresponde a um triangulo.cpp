/*19. Dados 3 valores num�ricos correspondentes a eventuais lados de tri�ngulo, verificar se esses
valores formam um tri�ngulo (para cada lado, a soma dos outros dois lados deve ser maior do que
ele). Se formar, exibir a mensagem �Forma um tri�ngulo�, sen�o �N�o forma um tri�ngulo�.*/
#include<stdio.h>
int main()
{
	float ld1,ld2,ld3;
	printf("Digite o primeiro lado:\n");
	scanf("%f", &ld1);
	printf("Digite o primeiro lado:\n");
	scanf("%f", &ld2);
	printf("Digite o primeiro lado:\n");
	scanf("%f", &ld3);
	if(ld1+ld2>ld3 && ld1+ld3>ld2 && ld2+ld3>ld1)
	{
				printf("Forma um triangulo");
	}
		else 
		{
				printf("Nao Forma um triangulo");
		}
	
}

