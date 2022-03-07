/*2. Receber 10 números e armazená-los em um vetor. 
Ao final, exibir os números na ordem inversa da que foram recebidos.*/

#include <stdio.h>
#define TAM 10

int main (){


	int i;
	float num[TAM];
	
	for(i=0; i<TAM ; i++)
	{
		
		printf("Digite um numero %i:  ", i+1);
		scanf("%f", &num[i]);
	}
	
	printf ("\n **** A ordem inversa e:**** ");
	for(i=TAM-1; i>=0 ; i--)
	{
		printf("\n%.2f", num[i]);
	}


	return 0;
}
