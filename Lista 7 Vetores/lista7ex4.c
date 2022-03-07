/*4. Receber 10 números e armazená-los em um vetor.
 Ao final, exibir a quantidade de números positivos informados.*/

#include <stdio.h>
#define TAM 10

int main (){

	int i, positivo = 0 ;
	float num[TAM];
	
	

	for(i=0; i<TAM; i++)
	{
		printf("\nInforme o numero %i :  ", i+1);
		scanf("%f", &num[i]);
		
		
		if(num[i]>0)
		{
			positivo++; //se o num. for maior q 0, o positivo vai somar 1 na quant de positivos
			//printf("\npositivo= %i  ",positivo);
		}
	
	}
		printf("\n");
		
		printf("\n positivos: %i ",positivo);
		

	


	return 0;
}
