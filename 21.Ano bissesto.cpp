/*21. Dado o ano pelo usu�rio, verificar se o ano � bissexto exibindo a mensagem �Ano bissexto� ou
�N�o � ano bissexto�. Sabe-se que o ano bissexto � aquele que � m�ltiplo de 4, exceto os m�ltiplos
de 100 que n�o sejam m�ltiplos de 400. Por exemplo: 1996, 2004, 2008, 2012, 1600, 2000 e 2400
(s�o bissextos); 1700, 1800, 1900 e 2100 (n�o s�o bissextos).*/
#include<stdio.h>
int main()
{
	int ano;
	printf("Qual o ano do seu nascimento:");
	scanf("%d", &ano);
	if((ano%4==0 && ano%100!=0) || (ano%4==0))
	{
		printf("Ano e bissexto!");
	} else{
		printf("Ano nao e bissexto");
	}
}
