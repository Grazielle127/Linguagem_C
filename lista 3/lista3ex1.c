//1. Receber um n�mero e informar se ele � negativo ou n�o � negativo. 
#include <stdio.h>

int main (){
	
	float numero;
	
	printf("Digite o numero:  ");
	scanf("%f", &numero);
	
	if (numero >= 0)
	{
		printf("O numero %.2f nao e negativo ", numero);
	}

	else
	{
		printf("O numero %.2f e negativo", numero);
	}
	
	
	
	
	
	
	
	
	return 0;
}
