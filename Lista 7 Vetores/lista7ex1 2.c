/*1. Receber 10 n�meros e armazen�-los em um vetor. 
Ao final, exibir os 10 n�meros na ordem que foram recebidos.*/

#include <stdio.h>
#define TAM 10

int main (){

	int i;
	float num[TAM];
	
	for(i=0; i<TAM ; i++)
	{
		printf("Digite um numero:  ");
		scanf("%f", &num[i]);
	}
	for(i=0; i<TAM ; i++)
	{
		printf("\n%.2f", num[i]);
	}



	return 0;
}
