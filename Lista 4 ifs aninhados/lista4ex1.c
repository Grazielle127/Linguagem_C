// 1. Receber um número e informar se ele é positivo, negativo ou nulo.//

#include <stdio.h>

int main () {
	
	int  numero;
	
	
	printf (" Digite um numero ");
	scanf("%i", &numero);
	
	if( numero > 0 )// POSITIVO
	
	{
		printf("O numero e positivo ");
		
	}
    else 
	{
 	   if	(numero < 0) // NEGATIVO
 	   {
 	   		printf("O numero e negativo  ");
	   } 
	   else
	   {
	   		printf("O numero e nulo "); // Nulo
	   }
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
