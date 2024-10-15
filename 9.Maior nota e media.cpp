/*Dadas três notas (AV1, AV2 e AV3), fazer um algoritmo que calcule a media.
 A média consiste em descartar a menor nota entre as 3 médias calculando a 
 média simples das outras duas.
 Exibir se o aluno está “Aprovado” ou “Reprovado” (média menor do que 6).   */
 #include<stdio.h>
 int main ()
 {
 	float av1,av2,av3,media;
 	printf("Digite a avaliacao 1: ");
 	scanf("%f", &av1);
 	printf("Digite a avaliacao 2: ");
 	scanf("%f", &av2);
 	printf("Digite a avaliacao 3: ");
 	scanf("%f", &av3);
 	
 	if(av1>av2 && av2>av3)
	 {
	 	media=(av1+av2)/2;
	 } 
	 else if(av1<av2 && av2<av3)
	 {
	 	media=(av2+av3)/2;
	 }
	 else
	 {
	 	media=(av1+av3)/2;
	 }
	 if(media>=6)
	 {
	 	printf("Aprovado!! Sua nota foi %.f!!", media);
	 }
	 else if(media<6){
	 	printf("Reprovado!! Sua nota foi %.f!!", media);
	 }
 }
