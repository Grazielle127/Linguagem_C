/*6. Implementar uma calculadora onde o usuário digita dois números
 e uma opção, que deve ser
  1 para adição,
  2 para subtração,
   3 para multiplicação
    e 4 para divisão.
 Mostrar na tela caso seja informada uma opção inválida.*/

#include <stdio.h>

int main (){
	
	float num1, num2;
	int opcao;
	
	
	printf(" Digite o primeiro valor:  ");
	scanf("%f", &num1);
	
	printf("\n Digite o segundo valor:  ");
	scanf("%f", &num2);
	
	printf("\n Escolha uma das opcoes\n");
	printf(" opcao 1: Adicao\n");
	printf(" opcao 2: Subtracao\n");
	printf(" opcao 3: Multiplicacao\n");
	printf(" opcao 4: Divisao\n\n  ");
	scanf ("%i", &opcao);
	printf("\n");
	
	if(opcao == 1)
	{
		printf(" A soma e %.2f", num1 + num2 );
	}
	else
	{
		if(opcao == 2)
		{
			printf(" A subtracao e %.2f", num1 - num2);
		}
		else
		{
			if(opcao == 3 )
			{
			printf(" A multiplicao e %.2f", num1 * num2 );	
			}
			else
			{
				if(opcao == 4)
				{
					
					if(num2 == 0)
					{
						printf("Nao existe divisao por 0 ");
					}
					else
					{
						printf(" A divisao e %.2f", num1 / num2);	
					}	
				}
				else
				{
					printf(" Opcao invalida");	
				}
			}
		}	
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
