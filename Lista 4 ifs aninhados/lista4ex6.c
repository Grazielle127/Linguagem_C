/*6. Implementar uma calculadora onde o usu�rio digita dois n�meros
 e uma op��o, que deve ser
  1 para adi��o,
  2 para subtra��o,
   3 para multiplica��o
    e 4 para divis�o.
 Mostrar na tela caso seja informada uma op��o inv�lida.*/

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
