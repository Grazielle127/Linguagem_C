/*2. Receber um intervalo (dois valores) e em seguida um n�mero. 

Informar se o n�mero est� dentro, fora ou nas extremidades do intervalo. VALIDA�OES

 Por exemplo, em um intervalo de 1 a 3, 0 est� fora, 2 est� dentro e 1 est� em uma extremidade do intervalo.*/ 
 
// A variavel de inicio tem que ser menor < ou seja crescente, 

 #include <stdio.h> 
 
 int main (){
 	
 	int	inicio, fim, numero;
 	
 	printf("Digite o comeco do intervalo:   ");
 	scanf("%i", &inicio);
 	
 	printf("\nDigite o fim do intervalo :    ");
 	scanf("%i", &fim);
 	
 	
 	if(inicio > fim)
	{
 		printf("\n O valor do inicio do intervalo tem que ser menor ou igual ao fim");
	}
 	else
	{
 		printf("\nDigite um valor :     ");	
 		scanf("%i", &numero);
 		
 		printf("\n");
 		
		if(numero == inicio || numero == fim )
		{
	 		printf("O numero %i esta em uma das EXTREMIDADES", numero);
	 
		}
 	
 		else
		{
			if (numero > inicio && numero < fim)
			{
				printf("O numero %i esta DENTRO do intervalo", numero);
			}
			else
			{
				printf("O numero %i esta FORA do intervalo", numero);
			}		
		}

	}
	
	
	
	
	
	
	

 			
 	
 
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }

