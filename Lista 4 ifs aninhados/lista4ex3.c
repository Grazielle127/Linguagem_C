/*3. Calcular o IMC (Índice de Massa Corporal) de uma pessoa através da 
fórmula IMC = Peso (kg) / (Altura * Altura) (m). 
Informe a classificação do IMC na tela de acordo com as regras abaixo:

< 18,5 Abaixo do peso 
De 18,5 a menor que 25,0 Saudável 
De 25,0 a menor que 30,0 Sobrepeso
De 30,0 a menor que 35,0 Obesidade Grau I 
De 35,0 a menor que 40,0 Obesidade Grau II (severa) 
De 40,0 em diante Obesidade Grau III (mórbida)*/

#include <stdio.h>

int main (){
	
	float peso, altura, imc;
	
	printf("Digite o peso: ");
	scanf("%f", &peso);
	
	printf("\nDigite a  Altura: ");
	scanf("%f", &altura);
	
	imc= peso / (altura * altura);
	printf("\nO imc e %.2f", imc);
	
	printf("\n");
	
	if (imc < 18.5)
	{
		printf("Abaixo do peso");	
	}
	else
	{
		if(imc < 25.0)
		{
		
			printf("Saudavel");
		}
		else
		{
			if(imc < 30.0)
			{
				printf("Sobrepeso");	
			}
			else
			{
				if (imc < 35.0)
				{
				printf("Obesidade Grau I");
				}
				else
				{
					if(imc < 40)
					{
						printf("Obesidade Grau II (SEVERA)");	
					}
					else 
					{
						printf("Obesidade Grau III (MORBIDA)");	
					}	
				
				}
		
			}
			
				
			
				
		}
			
			
		
	}
	
	
	
	
	
	
	return 0;
}


