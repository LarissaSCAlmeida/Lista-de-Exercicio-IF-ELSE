/*8. Dado um n�mero pelo usu�rio, verifique se ele � �Positivo�, �Negativo� 
ou �Nulo�(igual a zero).*/
#include<stdio.h>
int main ()
{
	float n;
	printf("Digite um numero: ");
	scanf("%f", &n);
	if(n>0)
	{
		printf("Numero positivo!");
	} 
	else if(n<0)
	{
		printf("Numero negatico!");
	}
	else
	{
		printf("Nulo!");
	}
}

