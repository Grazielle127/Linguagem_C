//2. Receber um número e verificar se ele esta na faixa de 0 à 9. 
//  Se sim, mostre uma mensagem afirmativa, caso contrário mostre uma mensagem indicando que o número não se encontra na faixa

#include <stdio.h>

int main (){
	
	float numero;
	
	printf("Digite o numero:  ");
	scanf("%f", &numero);
	
	if(numero >=0 && numero <= 9)
	
	{
		
		printf("\nO numero %.2f esta na faixa de 0 a 9 ", numero);	
	
	}
	
	else
	{
		printf("O numero %.2f nao se encontra na faixa de 0 a 9", numero);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
