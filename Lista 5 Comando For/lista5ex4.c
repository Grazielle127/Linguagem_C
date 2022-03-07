//4. Receber 2 números inteiros e exibir todos os números inteiros existentes entre eles.(inicio e o fim) 

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int inicio,fim,i;
	
	printf("Digite o início do intervalo:  ");
	scanf("%i", &inicio);
	 
	printf("Digite o fim do intervalo:  ");
	scanf("%i", &fim);
	

	
	if(inicio >= fim) // 1 a 10 inicio maior que o fim nao 10 maior q 1
	{
		printf("\nERRO\n o incio nao pode ser maior ou igual que o fim");
	}
	else
	{
		printf("\nO intervalo entre esses numeros é: \n");
	
		//no caso o i= inicio, o valor que for dado na variavel inicio sera i= inicio  +1 para o prox valor
		// + 1 para ñ pegar a extremidade inicial, para pegar o valor apos a extremidade
		for(i=inicio + 1 ; i<fim ; i++)
		{
			printf("\n%i", i);
		}
			// i < fim pois se caso o fim for 80 i sendo menor que fim o i vai ser 79
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
