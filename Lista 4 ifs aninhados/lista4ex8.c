
#include <stdio.h>
int main (){
	
	int idade, sexo;
	float altura, peso,pesoAtual;
	
	printf("Informe a sua idade:  ");
	scanf("%i", &idade);
	
	if (idade > 65 || idade < 12)
	{
		printf("\nNão e possivel calcular");
	}
	else
	{
		printf("\nInforme a sua altura: ");
		scanf("%f", &altura);
		
		printf("\nInforme o seu sexo.. \n(1) Masculino \n(2) Feminino: \n \n ");
		scanf("%i", &sexo);
		
		printf("\nDigite o peso atual\n", pesoAtual);
		scanf("%f", &pesoAtual);
		
		
		
					if(sexo == 1)
					{
						peso = (72.7 * altura) - 62;
						printf("\nO peso ideal e %f", peso);
						if(pesoAtual>peso)
						{
							printf("\n\nVoce esta acima do peso ideal ");
														
						}
						else
						{
							if(pesoAtual==peso)
							{
								printf("\n\nVoce esta no peso ideal");
								
							}
							else
							{
											
								printf("\n\nVoce esta abaixo peso ideal");
								
							}	
						}
					}
					else
					{
						if(sexo == 2)
						{
						peso = (62.1 * altura) - 48.7;
						printf("\nO peso ideal e %f", peso);
				
						}
						
						if(pesoAtual>peso)
						{
							printf("\n\nVoce esta acima do peso ideal ");
														
						}
						else
						{
							if(pesoAtual==peso)
							{
								printf("\n\nVoce esta no peso ideal");
								
							}
							else
							{
											
								printf("\n\nVoce esta abaixo peso ideal");
								
							}	
			}
		}
		}
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

