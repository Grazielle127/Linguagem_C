//2. Faça um programa que recebe uma matriz 3x4 e mostrar a soma dos elementos dela.
/*  0   1  2  3
 0	[] [] [] []
 1  [] [] [] []
 2  [] [] [] []
*/
#include <stdio.h>
#define LIN 3     
#define COL 4
int main(){
	
	int i,j, m[LIN][COL], soma=0;
	

 	printf("\nDigite Valor para os elementos da matriz\n\n"); 
	
	for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("\nElemento[%i][%i]=  ", i,j);
			scanf("%i", &m[i][j]);
		}

	}
	
	printf("\n");
	
	for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
			soma+=m[i][j];
			printf("m[%i][%i]=%i\t", i,j,m[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n");
	printf("\nA soma dos elementos da matriz e de : %i", soma);
  









	return 0;
}
