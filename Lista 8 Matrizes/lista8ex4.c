//4. Faça um programa que recebe uma matriz 3x3 e
// gera uma segunda matriz com o dobro de cada valor. No final, exiba a segunda matriz formatada na tela
#include <stdio.h>
#define LIN 3     
#define COL 3
int main(){
	
	int i,j, m[LIN][COL];
	
 	printf("\nDigite Valor para os elementos da Matriz\n\n"); 
	
	for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("\nElemento[%i][%i]=  ", i,j);
			scanf("%i", &m[i][j]);
		}

	}
	
	printf("\n");
	printf("\nMatriz Montada com os Elementos\n\n");
	
	for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
		
			printf("m[%i][%i]=%i\t", i,j,m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\nO Dobro da Primeira Matriz e:\n\n");
		
		
	for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
		
			printf("m[%i][%i]=%i\t", i,j,m[i][j]*2);
		}
		printf("\n");
	}
	

	return 0;
}
