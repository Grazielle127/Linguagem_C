/*6. Faça um programa que recebe uma matriz 3x4 e mostra a soma dos elementos de uma linha escolhida pelo usuário.
    0   1  2  3
 0	[] [] [] []
 1  [] [] [] []
 2  [] [] [] []
*/

#include <stdio.h>
#define LIN 3
#define COL 4

int main(){

	int i,j, m[LIN][COL], linha,soma=0;
	
	printf("\nDigite Valor para os elementos da matriz\n\n"); 
	
	for(i=0; i<LIN; i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("\nElemento[%i][%i]=  ", i,j);
			scanf("%i", &m[i][j]);
		}
	}
	
	for(i=0; i < LIN ; i++)  
	{
		
		for(j=0; j < COL; j++)  
		{
			printf("m[%i][%i]= %i\t", i,j, m[i][j]);
		}
		printf("\n");
	}	
	
	
	printf("***************************************************");
	printf("\nInforme o numero da Linha:\n exemplo 1 para Primeira Linha...\n\n " );
	scanf("%i",&linha);

	while(linha<1 || linha>3 )
	{
		printf("A linha nao existe, digite novamente:  ");
		scanf("%i",&linha);
	}
	
	linha=linha -1;// o indice começa em 0, se o usuario digitar 2 vai ser a linha 1, ent 2-1 vai se tornar 1
	
	for(j=0; j<COL; j++)//a linha n muda, o que muda é  COLUNA
	{
		//printf("%i\t", m[linha][j]);
		soma+=m[linha][j];
		
	}

	printf("\n\nA soma da linha %i e: %i ",linha+1,soma);














	return 0;

}


