#include <stdio.h>
int main ()
{
	float salario,salariol,inss,ir;
	printf("Digite o salario: \n");
	scanf("%f", &salario);
	if(salario<=1247.70)
	{
		inss=salario*0.08;
		printf("o desconto do inss e %.2f\n", inss);
	} 
	else
	{
		if(salario<=2079.50)
		{
			inss=salario*0.09;
			printf("o desconto do inss e %.2f\n", inss);
		} 
	else 
	{
		if(salario<=4159.00)
		{
			inss=salario*0.11;
			printf("o desconto do inss e %.2f\n", inss);
		}
	else 
	{
		if(salario>4159.00)
		{
			inss=salario-468.00;
			printf("o desconto do inss e %.2f\n", inss);
		}
	}
	}	
		
	}
	if (salario<=1710.78)
	{
		ir=0;
		printf("O desconto do imposto de renda e %.2f\n", ir);
	}
	else 
	{
		if (salario<=2563.91)
		{
			ir=salario*0.08-128.31;
			printf("O desconto do imposto de renda e %.2f\n", ir);
		}
	else 
	{
		if (salario<=3418.59)
		{
			ir=salario*0.15-320.60;
			printf("O desconto do imposto de renda e %.2f\n", ir);
		}
	else
	{
		if (salario<=4271.59)
		{
			ir=salario*0.225-577.00;
			printf("O desconto do imposto de renda e %.2f\n", ir);
		}
	else
	{
		if (salario>4271.59)
		{
			ir=salario*0.275-790.58;
			printf("O desconto do imposto de renda e %.2f\n", ir);
		}
	}
	}
	} 
	}
	salariol=salario-(inss+ir);
	printf("Salario liquido e %.2f\n", salariol);
}
