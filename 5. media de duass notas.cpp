/* Dadas duas notas, calcular e exibir a m�dia simples das mesmas.Caso a m�dia seja 
inferior a 5 exibir �Voc� est� reprovado�, sen�o exibir �Voc� est� aprovado�.*/
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
