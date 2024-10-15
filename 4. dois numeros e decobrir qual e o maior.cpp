/*Dados dois números pelo usuário, exibir o de maior valor.*/
#include<stdio.h>
int main()
{
	float n1,n2;
		printf("Digite o primeiro numero:\n");
			scanf("%f", &n1);
		printf("Digite o segundo numero:\n");
			scanf("%f", &n2);
	if(n1>n2)
	{
		printf("%.f", n1);
	}
	else if (n1<n2)
	{
		printf("%.f", n2);	
	} else
	{
		printf("O numero são iguais!");
	}
}
