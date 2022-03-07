/*3. Receber 10 números e armazená-los em um vetor. 
Ao final, exibir o dobro de cada um dos números.*/

#include <stdio.h>
#define TAM 10

int main (){

	int i;
	float num[TAM];
	
	//receber os numeros
	for(i=0; i<TAM ; i++)
	{
		
		printf("Digite um numero %i:  ", i+1);
		scanf("%f", &num[i]);
	}
	
	printf("\n\n****O dobro desses numeros e: ****\n\n");
	
		//mostrar os numeros e o respectivo dobro de cada um
	for (i = 0; i < TAM ; i++)
	{
	
		//printf("\nDigite o numero:  ");
		//	scanf("%f", &num[i]);
		printf("\nO dobro do numero %.2f e %.2f\n", num[i],num[i]*2);
	
		// primeiro mostro o numero q a pessoa digitou e depois o dobro dele 
		// entao depois das aspas, coloco o numero digitado, e entao coloco ele x 2
	
	}

	return 0;
}
