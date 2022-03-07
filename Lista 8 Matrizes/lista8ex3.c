//3. Faça um programa que recebe uma matriz 5x3 e informa qual é o maior elemento dela

#include <stdio.h>
#define LIN 5    
#define COL 3
int main(){
	
	int i, j, m[LIN][COL], maior;
	
	printf("\nDigite Valor para os elementos da matriz\n\n"); 
	
	for(i=0; i<LIN;  i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("\nElemento[%i][%i]=  ", i,j,m[i][j]);
			scanf("%i", &m[i][j]);
		}
	}

	maior=m[0][0];
	printf("\n");
	
	for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("m[%i][%i]= %i\t", i,j,m[i][j]);
			if(m[i][j] > maior) // i=0 j=1
			{
				maior=m[i][j];
			}
			
		
		}
			printf("\n");	
	}

	printf("\nO maior elemento da matriz e : %i", maior);













	return 0;
}
