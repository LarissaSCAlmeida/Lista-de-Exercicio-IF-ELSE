/*Juntar os dois exerc�cios anteriores, ou seja, pedir a digita��o das duas notas, caso uma (ou as duas) 
nota seja inv�lida exibir �Nota inv�lida!� e terminar o algoritmo; sen�o, calcular e exibir a m�dia e 
exibir se est� aprovado (vide sa�da do exerc�cio anterior). 
*/
#include<stdio.h>
int main ()
{
	int n1,n2,media;
    	printf("Digite a primeira nota:");
		scanf("%d", &n1);
		printf("Digite a primeira nota:");
		scanf("%d", &n2);
		
	if(n1>=0 && n1<=10){}
	if (n2>=0 && n2<=10){}
	 else 
	 {
		printf("Nota invalida");
	 } 
	 media=(n1+n2)/2;
	if (media>=5 && media<=10)
	{
		printf("Aprovado!! Sua media %d", media);	
	}
	else if (media<=10)
	{
		printf("Reprovado!! Sua media %d", media);
	}
	
}
