/*Dados 3 valores num�ricos correspondentes a eventuais lados de tri�ngulo, verificar se esses
valores formam um tri�ngulo (para cada lado, a soma dos outros dois lados deve ser maior do que
ele). Em caso afirmativo, informar ao usu�rio se o tri�ngulo � equil�tero (tr�s lados iguais)
is�sceles (dois lados iguais) ou escaleno (tr�s lados diferentes). Em caso negativo, exibir
 �N�o forma um tri�ngulo�.*/
#include<stdio.h>
int main()
{
	float ld1,ld2,ld3;
	printf("Digite o primeiro lado:\n");
	scanf("%f", &ld1);
	printf("Digite o segundo lado:\n");
	scanf("%f", &ld2);
	printf("Digite o terceiro lado:\n");
	scanf("%f", &ld3);
	
    if((ld1+ld2>ld3)&& (ld2+ld3>ld1)&& (ld1+ld3>ld2))
	{  
	if (ld1==ld2 && ld1==ld3)
	{
		printf("triangulo equilatero!!\n");
	}
	// | ou preciso de pelo umas das afirma��o abaixo seja verdadeira
	else
	{
		if(ld1==ld2 || ld1==ld3 || ld2==ld3)
		{
			printf("triangulo isosceles!!\n");
		}
		else
		{
			printf("triangulo escaleno!!\n");
		}
	}
    }
		else
		{
			printf("Nao forma um triangulo!!");
		}
	
}
