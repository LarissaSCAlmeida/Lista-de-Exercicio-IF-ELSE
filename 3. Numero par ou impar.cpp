/*Dado um número pelo usuário, verificar se ele é “O número é par” ou 
“O número é impar”,exibindo sua respectiva mensagem.*/
#include<stdio.h>
int main ()
{
	float n,div;
	printf("Digite um numero: \n");
	scanf("%f", &n);
	div=n/2;
	if(div==0)
	{
		printf("Seu numero %.f e par!\n", n);
	}else
	 { 
	  	printf("O numero %.f e impar!\n", n);
	 }
}
