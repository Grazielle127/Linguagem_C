/*7. Um triângulo pode ser classificado de acordo com as medidas de seus lados: 

- Um triângulo equilátero possui "todos os lados de mesma medida." 

- Um triângulo isósceles possui "dois lados de mesma medida." 

- Um triângulo escaleno possui as medidas dos "três lados diferentes".

Receber os três lados de um triângulo em qualquer ordem 
(chame de lado1, lado2 e lado3) 

e classificá-lo em equilátero, isósceles ou escaleno.*/

#include <stdio.h> 

int main (){
	
	int lado_1, lado_2, lado_3;
	
	printf("Digite o lado 1:  ");
	scanf("%i", &lado_1);
	
	printf("\nDigite o lado 2:  ");
	scanf("%i", &lado_2);
	
	printf("\nDigite o lado 3:  ");
	scanf("%i", &lado_3);
	
	if (lado_1 == lado_2 && lado_1 == lado_3)
	{
		printf("\nTRIANGULO EQUILATERO");
	}
	else 
	{
	
		if(lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3)
		{
			printf("\nTRIANGULO ISOSCELES");
		}
		else
		{
			printf("\nESCALENO");
		}
			
	}
	
	
	
	return 0;
}
