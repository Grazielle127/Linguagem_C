/*7. Implemente um programa que imprime a figura abaixo: 
A quantidade de linhas da figura abaixo deverá ser informada pelo usuário, 
sendo o máximo de linhas permitido de 20 linhas, 
e o mínimo de 1 linha. 
No exemplo abaixo a quantidade de linhas é de 4.

3x4
   *      1    intervalo de 2 em 2 
  *     3      começa no 1 e termina em 7
 ***    5
***   7*/



 #include <stdio.h>
 int main (){
 
 	int cont_linha,cont_coluna,cont_espaco,num_linhas, num_espaco, estrela=1;
 	
	do
 	{
 	  	printf("\nInforme a quantidade de linhas (de 1 a 20): ");
 		scanf("%i", &num_linhas);

 	} while(num_linhas<0 || num_linhas>20);
 
	 	for(cont_linha=0; cont_linha<num_linhas; cont_linha++) // 4 linhas
		{
	 		printf("\n");
	 		
	 		for(cont_espaco = num_linhas - 1; cont_espaco > cont_linha ; cont_espaco--)
			//os espaços serao com uma uni a menos  ex: 4 linhas, sao pulados 3 espaços
	 		//a linha começa em 0 e vai aumentando de 1 em 1, 3 é maior q 0 é ai imprimo um espaço.
            // decrementando 1
			 {
			 	printf(" ");
			 	
			 }
	 		 
            
            	for(cont_coluna=1; cont_coluna<=estrela; cont_coluna++)// 7 colunas
			{
		 		printf("*");
		 	
			}
		
			estrela+=2;//acrescentar de 2 em 2
		}
		
 	return 0;
 }
