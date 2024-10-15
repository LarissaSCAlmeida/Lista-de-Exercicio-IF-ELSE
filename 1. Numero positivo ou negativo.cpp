/*Dado um número pelo usuário, verificar se ele é positivo,
 exibindo a mensagem “O numero é positivo” ou “O numero não é positivo”.*/
 #include<stdio.h>
 int main()
 {
 	int n;
 	printf("Digite um numero:\n");
 	scanf("%d", &n);
 	if (n>=0)
	 {
		printf("O Seu numero e positivo!");
	 }
	 else
	 	{
	 	
		printf("O Seu numero e negativo!");	 
	 	}
	 

 }
