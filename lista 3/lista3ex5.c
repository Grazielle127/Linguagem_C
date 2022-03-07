//5. Receber dois números e mostrar o maior deles. 

#include <stdio.h>

int main (){
	
	float numero_1, numero_2;
	
	printf("Digite o Primeiro numero:  ");
	scanf("%f", &numero_1 );

	printf("Digite o Segundo numero:  ");
	scanf("%f", &numero_2);	
	
	if( numero_1 > numero_2)
	
	
	{
		printf("O numero %.2f e o maior ",numero_1);	
	}
	else 
	{
		printf(" O numero %.2f e o maior", numero_2);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
