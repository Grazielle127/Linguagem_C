/*4. Receber uma temperatura em Fahrenheits e convertê-la para Celsius.

Celsius = (Fahrenheit - 32) / 1.8.*/

#include   <stdio.h>

int main (){
	
	float fahrenheit, celsius;
	
	printf("insira o valor de farenheits");
	scanf("%f", &fahrenheit);
	
	celsius= (fahrenheit - 32) / 1.8;
	printf("celsius=%f", celsius);
	
	return 0;

}
