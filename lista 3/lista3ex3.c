//3. Receber numerador e denominador. 
//   Calcular e mostrar o resultado da divis�o, desde que poss�vel (denominador diferente de zero).
 //   Se n�o for poss�vel dividir, apenas escreva �n�o existe divis�o por zero�

#include <stdio.h>

int main (){
	
	float numerador, denominador,divisao;
	
	printf("Digite o Numerador:  ");
	scanf("%f", &numerador);
	
	printf("Digite o denominador:  ");
	scanf("%f", &denominador);
	
	
	//os numeros diferentes de zero podem ser divididos, agora igual a 0 n�o
	if (denominador != 0)
	{
		divisao= numerador / denominador;
		printf("O valor da divisao e %.2f ", divisao);	
	}	
	
	else 
	{
		
		printf("Nao existe divisao por 0");	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
