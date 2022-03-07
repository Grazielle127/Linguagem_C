//1. Calcular o perímetro de uma circunferência recebendo seu raio. C = 2 *  * r (utilizar  = 3.14

#include   <stdio.h>

int main (){
	
	float perimetro, raio;
	
	printf("insira o valor de raio");
	scanf("%f", &raio);
	
	perimetro= 2* 3.14 *raio;
	printf("perimetro=%f", perimetro);
	
	return 0;

}
