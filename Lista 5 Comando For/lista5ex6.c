/*6. Implementar um programa que exibe todos os números inteiros
 de 1 a 1000 em ordem inversa i-- (1000, 999, 998, ..., 3, 2, 1). */
 
 #include <stdio.h>

int main (){
	
	int i;
	
	printf("Os numeros inteiros de 1000 a 1");
	
	for(i = 1000 ; i >= 1 ; i--)// o inicio sera 1000, o fim tem que terminar em 1, entao o i tem que ser maior ou igual a 1 ou menor que 0
	{							// i-- decremento é a mesma coisa q i = i - 1  2 = 2 -1 fica igual a 1
		printf("\n%i", i);
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
