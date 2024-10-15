/*Dados três números pelo usuário, analisá-los e exibir a mensagem “3 números diferentes”, 
“2 dos 3 são iguais” ou “3 números iguais”. */
#include<stdio.h>
int main()
{
	float n1,n2,n3;
	printf("Digite o primeiro numero: \n");
	scanf("%f", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &n2);
	printf("Digite o terceiro numero: \n");
	scanf("%f", &n3);
		if (n1==n2 && n1!=n3)
		{
		printf("2 dos 3 sao iguais n1 e n2");
		}
	else
	{
		if (n1!=n2 && n1==n3)
		{
		printf("2 dos 3 sao iguais n1 e n3");
		}
		else
	{
		if (n1!=n2 && n2==n3)
		{
		printf("2 dos 3 sao iguais n2 e n3");
		}
	
	else
	{
		if (n1==n2 && n1==n3)
		{
		printf("Todos sao iguais");
		}
	else 
	{
		if (n1!=n2 && n1!=n3)
		{
		printf("Todos os numeros sao diferente");
		}
	}
	}
	}
	}
	
}
