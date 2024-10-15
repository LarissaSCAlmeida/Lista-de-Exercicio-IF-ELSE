/*Nota valida ou não*/
#include<stdio.h>
int main ()
{
	int n;
	printf("Digite a nota: ");
	scanf("%d", &n);
	if(n>=0 && n<=10){
		
		  printf("Nota valida");
		
	}else{
		printf("Nota invalida");
	}
	
}
