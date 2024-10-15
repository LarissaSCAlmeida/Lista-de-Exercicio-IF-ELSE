/*Dados três números pelo usuário, exibi-los em ordem crescente*/
#include <stdio.h>
int main ()
{
	float n1,n2,n3;
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &n3);
	if (n1<n2 & n2<n3)
	{
		printf("%.f %.f %.f", n1,n2,n3);
	} 
	else
	{
		 if (n1<n2 && n1<n3)
		{
		printf("%.f %.f %.f", n1,n3,n2);
		}
	else 
	{
		if (n1>n2 && n2<n3)
		{
		printf("%.f %.f %.f", n2,n1,n3);
		}
	else 
	{
		 if (n1>n2 && n2<n3)
		{
		printf("%.f %.f %.f", n2,n3,n1);
		}
	else 
	{
		 if (n3<n1 && n2>n1)
		{
		printf("%.f %.f %.f", n3,n1,n2);
		}
		else if(n3<n2 && n3<n1)
		{
		printf("%.f %.f %.f", n3,n2,n1);
		}
	}
	}
	}	
	}
	
	

}
