/*2. Receber 10 números e, ao final, 
informar quantos são positivos e quantos são negativos. */

#include <stdio.h>

int main(){
	
	int i,positivo =0, negativo= 0;
	float num;
	
	for(i=0; i<10; i++)
	{
		printf("\nInforme o numero %i :  ", i+1);
		scanf("%f", &num);
		
		while(num == 0)
		{
			printf("\nDigite um numero diferente de 0\n\n Digite o numero novamente: ");
			scanf("%f", &num);
		}
		
		if(num<0)
		{
			negativo++; //se o num. for menor q 0, o negativo vai somar 1 na quant dde negativos
			//printf("\nnegativo= %i  ",negativo);
		}
		else
		{
			positivo++;	
			//printf("\npositivo= %i  ",positivo);
		}
	}
			printf("\n");
		
			printf("\n positivos: %i",positivo);
			printf("\n negativos: %i",negativo);






	return 0;
}
	

	
