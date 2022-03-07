//Receber três números e mostrar qual é o maior deles.
#include  <stdio.h>

	int main (){

	int num1, num2, num3;

	printf(" Digite o primeiro valor:  ");
	scanf("%i", &num1);
	
	printf("\n Digite o segundo valor:  ");
	scanf("%i", &num2);
	
	printf("\n Digite o terceiro valor:  ");
	scanf("%i", &num3);
	
	// 10 maior 8      10 maior 30 = 0 
	//10 maior 8        10 manior 1 = 1   && -- so coloca verdadeiro, se todas as condiçoes forem verdadeiras
	// teste num1 quando for maior 
	// maior ou igual >= caso o numero for igual ao maior numero, mostrara o numero maior mesmo sendo igual, 
	//	apenas com > ele so vai considerar valores diferentes e nao iguais. 
	
	if(num1 >= num2 && num1 >= num3)
	{
		printf("\n O valor de %i e o numero maior ", num1);	
	}
	else
	{
		if(num2 >= num1 && num2 >= num3)
		{
			printf("\n O valor de %i e o numero maior ", num2);
		}
		else
		{
			printf("\n O valor de %i e o numero maior ", num3);
		}
	}
	







	return 0;
}
