/*5. Implementar um programa que exibe todos os números pares
 contidos entre 10 e 80.*/
 
 #include <stdio.h>

int main (){
	
	int i;
	
	printf("Os numeros pares entre 10 e 80 sao: \n");
	
	// no for estão as extremidades, 11 e i sendo menor q/ 80 no caso é 79
	// entao do 11 ao 79
	for(i=11 ; i<80 ; i++)
	{
		//resto atraves da porcentagem % 2 para saber se da 0 para ser par
		if(i % 2 == 0 )// %2 representa o resto da divisao de 2 que equivalente a 0, para ser num. par
		{	
			printf("\n\n%i",i);	
		}
		
	}
	
	
	
	
	return 0;
}
