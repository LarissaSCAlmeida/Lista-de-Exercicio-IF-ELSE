/*17.Um professor usa Provas e Atividades para compor a nota AV1. Ele usa 2 provas e 4 atividades (os
valores s�o digitados nesta ordem). A m�dia das provas vale 60% da AV1 enquanto que as
atividades valem 0 ou 1 ponto cada. Considerando que a media � 6,0 fa�a um algoritmo que calcule
a AV1 e mostre a mensagem: �AV1 = X.X, voc� est� acima da m�dia.�, �AV1 = 6.0, voc� est� na
m�dia.� ou �AV1 = X.X, voc� est� abaixo da m�dia.�.*/

#include <stdio.h>
int main ()
{
	float p1,p2,atv1,atv2,atv3,atv4,av1;
	printf("Qual foi a nota da primeira prova:\n ");
	scanf("%f", &p1);
	printf("Qual foi a nota da segunda prova:\n ");
	scanf("%f", &p2);
	printf("Qual foi a nota da primeira atividade:\n ");
	scanf("%f", &atv1);
	printf("Qual foi a nota da segunda atividade:\n ");
	scanf("%f", &atv2);
	printf("Qual foi a nota da terceira atividade:\n ");
	scanf("%f", &atv3);
	printf("Qual foi a nota da quarta atividade:\n ");
	scanf("%f", &atv4);
	av1=(((p1+p2)/2)*0.6)+(atv1+atv2+atv3+atv4);
	
	if(av1>6){
			printf("AV1 = %.2f, voce esta acima da media",  av1);
	} 
	else if(av1==6)
	{
			printf("AV1 = %.2f, voce esta na media.",  av1);
	} 
	else if(av1<6)
	{
		printf("AV1 = %.2f, voce esta abaixo da media.", av1);	
	}
	
	
}
