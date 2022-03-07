/*6. Receber dois números e os apresente em ordem crescente. 
    Utilize apenas a estrutura de decisão if, ou seja, sem o opcional else. */



#include <stdio.h>

int main (){
	
	int numero_1, numero_2, maior, menor;
	
	printf("Digite o Primeiro numero:  ");
	scanf("%i", &numero_1);

	printf("Digite o Segundo numero:  ");
	scanf("%i", &numero_2);	
	
	maior= numero_1;
	menor=  numero_2;
	
	if(maior < menor)
	{
		maior= numero_2; 
		menor= numero_1;
	}

		printf("\n %i  %i", menor, maior);		
  
  
  return 0;
} 
