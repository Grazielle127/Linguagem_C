/*9. Receber 10 números e armazená-los em um vetor. 

Copiar os números em outro vetor na ordem inversa 

e mostrar na tela todas as posições em que se tem o mesmo número nos dois vetores.

 Exemplo:


1 2 3 1 2 3 1 2 3 1

1 3 2 1 3 2 1 3 2 1


Posições: 0, 3, 6, 9*/



#include <stdio.h>
#define TAM 10

int main (){

	int i;
	float vet_A[TAM], vet_B[TAM];
	
	for(i=0; i<TAM ; i++)     // for entrada de numeros vetor a
	{
		printf("Digite um numero:  ");
		scanf("%f", &vet_A[i]);
	}
	
	printf("\n");
	
	printf("A: ");
	
	for(i=0; i<TAM ; i++) //for esta exibindo vetor a
	{
		printf("%.2f \t ",vet_A[i]);
	}
	
	
	for(i=9; i>=0; i--)       // for calculo vetor b
	{
		vet_B[i]= vet_A[9-i];	
	}

	printf("\n");
	
	printf("B: ");
	
	for(i=0; i<TAM; i++) 	// for exibição
	{
		printf("%.2f \t ", vet_B[i]);
	}
	
	printf("\n\n");
		
	printf("Posicoes: ");
	
	for(i=0; i<TAM; i++)
	{
		if(vet_A[i] == vet_B[i])
		{
			printf("%i\t",i);
		}
		
		
	}











	return 0;
}
