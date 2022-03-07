//1. Receber 10 números e mostrar o dobro de cada um deles. 

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, indice;
	
	//for (inicio;fim;incremento) 
	for (indice = 1; indice <= 10 ; indice++)
	{
	
		printf("\nDigite o numero: ");
		scanf("%i", &num);
		printf("\nO dobro do numero %i é %i\n", num,num*2);
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
