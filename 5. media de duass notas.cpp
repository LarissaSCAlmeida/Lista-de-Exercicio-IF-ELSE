/* Dadas duas notas, calcular e exibir a média simples das mesmas.Caso a média seja 
inferior a 5 exibir “Você está reprovado”, senão exibir “Você está aprovado”.*/
#include <stdio.h>
int main ()
{
	float media,n1,n2;
	printf("Digite a primeira nota:");
	scanf("%f", &n1);
	printf("Digite a primeira nota:");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	if (media>=5){
		printf("Aprovado!!");
	}else{
		printf("Reprovado!!");
	}
	
	
}
