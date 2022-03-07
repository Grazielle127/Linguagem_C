/*7. Define-se como elemento minimax de uma matriz o menor elemento da linha onde se encontra o maior 
elemento da matriz. Faça um programa que recebe uma matriz 4x4 
e mostra qual é seu elemento minimax, bem como sua posição na matriz*/

#include <stdio.h>
#define LIN 4
#define COL 4

int main(){
 
 	int i, j, m[LIN][COL], maior, linha_maior, minimax;
	
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
				linha_maior=i;
				
			}
			
		
		}
			printf("\n");	
	}
	
	minimax=m[linha_maior][0];
	for(j=0; j<COL; j++)
	{
	//	printf("%i\t", m[linha_maior][j]);
		
		if(m[linha_maior][j] < minimax)
		{
			minimax=m[linha_maior][j];
		
		}
	
	}
//	printf("\n\nO maior elemento da matriz e : %i", maior);
//	printf("\n\nA linha que contem o maior valor e: %i ", linha_maior+1);
	printf("\n\no minimax e: %i", minimax);
	
	

















	return 0;

}



