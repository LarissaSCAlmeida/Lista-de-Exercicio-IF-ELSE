/*18. Dados 3 numero pelo usu�rio, verificar se s�o diferentes, se forem exibir o numero com valor
intermedi�rio, sen�o (se houver 2 ou 3 n�meros iguais) exibir a mensagem �Os n�meros n�o s�o
diferentes�.*/
#include <stdio.h>
int main ()
{
	float n1,n2,n3;
	printf("Digite o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &n2);
	printf("Digite o terceiro numero:\n");
	scanf("%f", &n3);
	if(n1==n2 && n1==n3)
	{
		printf("Os numeros nao sao diferentes!");
	}
	else
	{
			if(n1==n2 && n1!=n3)
			{
				printf("Os numeros nao sao diferentes!");
			}
	else 
	{
			if(n1!=n2 && n1==n3)
			{
				printf("Os numeros nao sao diferentes!");
			}
	else 
	{
			if(n1!=n2 && n2==n3)
			{
				printf("Os numeros nao sao diferentes!");
			}
	else 
	{
			if(n1>n2 && n1<n3)
			{
				printf("o %f e o intermediario", n1);
			}
	else
	{
			if(n2>n1 && n2<n3)
			{
				printf("O numero %f e o intermediario", n2);
			}
	else 
	{
			if(n3>n1 && n3<n2)
			{
				printf("o %f e o intermediario", n3);
			}
	}
	}
	}
	}
	}
	}
	
}
