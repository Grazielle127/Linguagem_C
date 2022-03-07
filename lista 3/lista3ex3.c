//3. Receber numerador e denominador. 
//   Calcular e mostrar o resultado da divisão, desde que possível (denominador diferente de zero).
 //   Se não for possível dividir, apenas escreva “não existe divisão por zero”

#include <stdio.h>

int main (){
	
	float numerador, denominador,divisao;
	
	printf("Digite o Numerador:  ");
	scanf("%f", &numerador);
	
	printf("Digite o denominador:  ");
	scanf("%f", &denominador);
	
	
	//os numeros diferentes de zero podem ser divididos, agora igual a 0 não
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
