/*5. Receber 10 números e armazená-los em um vetor.
 Ao final, exibir quais foram os números negativos informados.*/

#include <stdio.h>
#define TAM 10
//O DEFINE- DEFINE O TOTAL DE NUMEROS PARA TODOS OS ESPAÇOS DO VETOR

int main (){

	int i;
	float num[TAM];
	
	//receber os 10 numeros
	printf("**************************");
	for(i=0; i<TAM; i++)
	{
		printf("\n\nDigite o numero:  ");
		scanf("%f", &num[i]);

	}
	
	printf("\n****************************\n");
			
	printf("\nOs numeros negativos sao:  \n");

	
	for(i=0; i<TAM; i++)
	{
		if(num[i]<0)
		{
			printf("\n%.2f", num[i]);
		}
		
	}

		
	return 0;
}
