/*8. Declarar um vetor de 10 posições já inicializado com os números de 1 a 10
 e copiá-los para outro vetor na ordem inversa.*/

#include <stdio.h>

int main (){

	int i, vetor_A[] = {1,2,3,4,5,6,7,8,9,10}, vetor_B[10];

	printf("A: ");

	for(i=0; i<10; i++)
	{
		printf("%i\t",vetor_A[i]);// i mostra a posição
		
	}
	
	printf("\n");
	
	printf("B: ");
	for(i=9; i>=0; i--)
	{
		vetor_B[i]=vetor_A[9-i];
	
	}

	
	for(i=0; i<10; i++)
	{
		printf("%i\t",vetor_B[i]);// i mostra a posição
		
	}
	








	return 0;
}
