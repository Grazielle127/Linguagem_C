/*7. Declarar um vetor de 10 posi��es j� inicializado
 com os n�meros de 1 a 10 e copi�-los para outro vetor.*/

#include <stdio.h>


int main (){

	int i, vetor_A[] = {1,2,3,4,5,6,7,8,9,10},vetor_B[10];
	
	printf("A: ");
	
	for(i=0; i<10; i++)
	{
		vetor_B[i] = vetor_A[i];
		printf("%i\t", i+1, vetor_A[i]);
	}
	
	printf("\n\n");
	
	printf("B: ");
	
	for(i=0; i<10; i++)
	{
		printf("%i\t", i+1, vetor_B[i]);
	}


	return 0;
}
