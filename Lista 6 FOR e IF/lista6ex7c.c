/*7. Implemente um programa que imprime a figura abaixo: 
A quantidade de linhas da figura abaixo dever� ser informada pelo usu�rio, 
sendo o m�ximo de linhas permitido de 20 linhas, 
e o m�nimo de 1 linha. 
No exemplo abaixo a quantidade de linhas � de 4.

3x4
   *      1    intervalo de 2 em 2 
  *     3      come�a no 1 e termina em 7
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
			//os espa�os serao com uma uni a menos  ex: 4 linhas, sao pulados 3 espa�os
	 		//a linha come�a em 0 e vai aumentando de 1 em 1, 3 � maior q 0 � ai imprimo um espa�o.
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
