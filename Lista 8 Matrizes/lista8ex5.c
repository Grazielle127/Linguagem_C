//5. Faça um programa que recebe uma matriz 4x4 e exibe os elementos da sua diagonal principal.
#include <stdio.h>
#define LIN 4     
#define COL 4
int main(){
	
	int i,j, m[LIN][COL];
	
  	printf("\nDigite Valor para os elementos da matriz\n"); 
	
	for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("\nElemento[%i][%i]=  ", i,j);
			scanf("%i", &m[i][j]);
		}

	}
	
	printf("\n");
	
	printf("\nExibicao da Matriz\n\n");
	
		for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
		
			printf("m[%i][%i]=%i\t", i,j,m[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Valores das Diagonais\n");
	
	for(i=0; i<LIN; i++)//Comando de exibição das Posiçoes da Diagonal Principal 
	{
		
		printf("\nValor Diagonal Principal [%i][%i] = %i\t",i,i,m[i][i]);
		
	
	}
	
	








	return 0;
}
