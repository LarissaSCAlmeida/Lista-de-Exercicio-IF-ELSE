/*Dada a tabela de cálculo do IR:
até 1.710,78 isento 0 
de 1.710,79 até 2.563,91 7,5% -128,31 
de 2.563,92 até 3.418,59 15% -320,60 
de 3.418,60 até 4.271,59 22,5% -577,00 
Acima de 4.271,59 27,5% -790,58*/
#include <stdio.h>
int main ()
{
	float salario,salarioliquido,ir;
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	if(salario<=1710.78)
	{ 	
		ir=0;
		printf("Nao tem desconto no ir!!\nO salario bruto %.3f", salario);	
    }
	else if (salario<=2563.91)
	{	
		ir=salario*0.075-128.31;
		salarioliquido=salario-ir;
		printf("O desconto do ir e %.2f e o salario liquido e %.2f", ir,salarioliquido);
	}
	else if (salario<=3418.59)
	{	
		ir=salario*0.15-320.60;
		salarioliquido=salario-ir;
		printf("O desconto do ir e %.2f e o salario liquido e %.2f", ir,salarioliquido);
	}
	else if (salario<=4271.59)
	{	
		ir=salario*0.225-577.00;
		salarioliquido=salario-ir;
		printf("O desconto do ir e %.2f e o salario liquido e %.2f", ir,salarioliquido);
	}
	else
	{	
		ir=salario*0.275-790.58;
		salarioliquido=salario-ir;
		printf("O desconto do ir e %.2f e o salario liquido e %.2f", ir,salarioliquido);
	}
	
	
	
}
