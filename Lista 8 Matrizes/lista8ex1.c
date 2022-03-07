/*.1- Faça um programa que recebe uma matriz 4x3 e exibe ela formatada na tela.*/
#include <stdio.h>
#define LIN 4
#define COL 3
int main(){
	

	int m[LIN][COL];
	int i,j;

 
 /*	m[0] [0] = 10;   m[0] [1] = 50;  m[0] [2] = 90;
	m[1] [0] = 20;   m[1] [1] = 60;  m[1] [2] = 100;
	m[2] [0] = 30;   m[2] [1] = 70;  m[2] [2] = 110;
	m[3] [0] = 40;   m[3] [1] = 80;  m[3] [2] = 120;*/
	
/*	printf("\ti ",  m[0][0]);
	printf("\t%i ", m[0][1]);
	printf("%i ",   m[0][2]);
	printf("%i ",   m[1][0]);
	printf("\t%i ", m[1][1]);
	printf("\n%i ", m[1][2]);
	printf("\n%i ", m[2][0]);
	printf("\n%i ", m[2][1]);
	printf("\n%i ", m[2][2]);
	printf("\n%i ", m[3][0]);
	printf("\n%i ", m[3][1]);
	printf("\n%i ", m[3][2]); */
	
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
	
	
	for(i=0; i < LIN ; i++)  //4 = 0,1,2,3
	{
	
		for(j=0; j < COL; j++)  //3 =  0,1,2 
		{
			printf("m[%i][%i]= %i\t", i,j, m[i][j]);
		}
	
		printf("\n");
		
	}	
	
/* REPETIÇAÕ COLUNAs e LINHAS         

   1 repetiçaõ i=0 j=0      i=1 j=0      i=2 j=0   i=3 j=0   
   2 repetiçao i=0 j=1      i=1 j=1      i=2 j=1   i=3 j=1
   3 repetiçao i=0 j=2      i=1 j=2      i=2 j=2   i=3 j=2*/
   
   


	
	


	return 0;
}
