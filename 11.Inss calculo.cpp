/*Dada a tabela de cálculo do INSS:*/
#include <stdio.h>
int main ()
{
	float salario,inss,sl;
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	if(salario<=1247.70)
	{
		inss=(salario*0.08);
		sl=salario-inss;
		printf("Ira pagar %.2f de inss \n E o salario liquido %f", inss,sl);
		
	}
	else if(salario<=2079.50)
	{
		inss=(salario*0.09);
		sl=salario-inss;
		printf("Ira pagar %.2f de inss \nE o salario liquido %f", inss,sl);
		
	}
	else if(salario<=4159.00)
	{
		inss=(salario*0.11);
		sl=salario-inss;
		printf("Ira pagar %.2f de inss!! \nE o salario liquido %f", inss,sl);
		
	}
		else 
		{
		inss=468.00;
		sl=salario-inss;
		printf("Ira pagar %.2f de inss \nE o salario liquido %f", inss,sl);
		}
}
