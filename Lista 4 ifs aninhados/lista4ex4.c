/*4. Receber tr�s n�meros e dizer se existe algum n�mero repetido entre eles. Em caso afirmativo, 
mostre qual o n�mero esta repetido.*/

#include <stdio.h>

int main (){

	int num1, num2, num3;

	printf(" Digite o primeiro valor:  ");
	scanf("%i", &num1);
	
	printf("\n Digite o segundo valor:  ");
	scanf("%i", &num2);
	
	printf("\n Digite o terceiro valor:  ");
	scanf("%i", &num3);
	
	if(num1 == num2 || num1 == num3)
	{
		printf("\nO numero %i se repete", num1);	
		
	}
	else
	{
		if(num2 == num3)
		{
			printf("\nO numero %i se repete", num2);
		}
		else
		{
			printf("\nNenhum numero se repete");	
		}	
	}
	return 0;
}

	
	
	
	





