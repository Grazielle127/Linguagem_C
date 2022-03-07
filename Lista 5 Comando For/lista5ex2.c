//2. Receber um número e mostrar sua tabuada do 1 ao 10.

#include <stdio.h>
#include <locale.h>

int main (){
	
	int numero,contador,resposta;
	do
	{
	
		//a linha abaixo configura o idioma, possibilitando utilizar sinais de pontuaçao
		setlocale(LC_ALL,"Portuguese");
		
		//a linha abaixo configura a COR
		/*Código das cores:
		o primeiro codigo refere-se ao background e o segundo a letra
	
		0- preto
		1- azul
		2- verde
		3- verde agua
		4- vermelho
		5- roxo
		6- amarelo
		7- branco
		8- cinza
		9- azul claro
		A- verde claro
		B- verde-agua claro 
		C- vermelho claro
		D- lilas
		E- amarelo claro
		F- branco brilhante*/
	

     
		system("color 90");
		printf ("\nTABUADA\n");
		printf ("\nDigite o número da tabuada:  ");
		scanf("%i", &numero);
		
		//for (inicio;fim;incremento) 
		
		for(contador=1;contador<=10;contador++)	
		{
			printf("\n%i x %i = %i   ",numero,contador, numero*contador);
		}	
		 
			printf("\n");
		
		//menu de opções
		
		printf("\nMenu de opções");
		printf("\n\n(1) Novo calculo\n");
		printf("\n(2) Sair\n");
		printf("\n\nDigite a opção desejada: ");
		scanf("%i", &resposta);
		
		while(resposta != 1 && resposta != 2)
		{
			printf("\n\nA opção deve ser 1 ou 2\n\n");
			printf("\nMenu de opções");
			printf("\n\n(1) Novo calculo\n");
			printf("\n(2) Sair\n");
			printf("\n\nDigite a opção desejada: ");
			scanf("%i", &resposta); // coloca o scanf para  nao ficar infinita a msg que a opçao deve ser 1 ou 2
		}
		//enquanto essa resposta for diferente do 2 (SAIR) é verdade, ou seja ele vai repetir.

	}while(resposta != 2 );
	printf ("\nObrigada por utilizar a tabuada!!!");
	
	
	return 0;
}
