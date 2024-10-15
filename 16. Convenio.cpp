/*16. Dado o salário de uma pessoa, sexo (1 para Masculino e 2 para Feminino) e idade, verificar 
a tabela abaixo e calcular a devida cobrança de convênio médico sobre o salário informado:
    Idade     Masculino  Feminino
  20 anos      5,34%      3,56% 
20 até 40 anos 8,44%      6,43% 
Acima dos 40 anos 10,12% 8,02%*/
#include<stdio.h>
int main ()
{
	float salario,idade,convenio,genero;
	printf("Qual seria o seu salario:\n");
	scanf("%f", &salario);
	printf("Qual seria o seu genero 1 para masculino e 2 para feminino:\n");
	scanf("%f", &genero);
	printf("Qual seria a idade:\n");
	scanf("%f", &idade);
	
	if(idade<=20 && genero==2)
	{
			convenio=salario*0.0356;
			printf("Valor do convenio:%.2f", convenio);
	}
	else
	{
		if(idade<=20 && genero==1)
		{
			convenio=salario*0.0534;
			printf("Valor do convenio:%.2f", convenio);
		}
	else
	{
		if(idade<=40 && genero==2)
		{
			convenio=salario*0.0643;
			printf("Valor do convenio:%.2f", convenio);
		}
	else
	{
		if(idade<=40 && genero==1)
		{
			convenio=salario*0.0844;
			printf("Valor do convenio:%.2f", convenio);
		}
	else
	{
		if(idade>40 && genero==2)
		{
			convenio=(salario*8.02)/100;
			printf("Valor do convenio:%.2f", convenio);
		}
	else 
	{
		if(idade>40 && genero==1)
		{
			convenio=salario*0.1012;
			printf("Valor do convenio:%.2f", convenio);
		}
	}
	}
	}
	}
	}
}
