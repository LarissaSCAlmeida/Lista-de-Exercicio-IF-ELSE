/*Dentre três números dados pelo usuário, verificar e exibir o de maior valor.*/
#include<stdio.h>
int main()
{
	float n1,n2,n3;
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &n3);
	if(n1>n2 && n1>n3){
		printf("o numero %.2f e maior!!", n1);
	} else if(n1<n2 && n2>n3){
		printf("o numero %.2f e maior!!", n2);
	} else {
		printf("o numero %.2f e maior!!", n3);
	}
}
