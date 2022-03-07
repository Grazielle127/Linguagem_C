/*6. Preencher automaticamente um vetor (colocar o conteudo nos espaços do vetor)
 com todos os números pares 
entre 1 e 100 e depois exibir os números para o usuário.
indice 0 tem que estar preenchido ate o 99*/
	
#include <stdio.h>
#define TAM 100

int main (){

	int i, num[TAM];

	printf("Os numeros pares entre 1 e 100 sao: \n");
	
	//indice, é a posição q o num vai ocupar no vetor.   0 1 2 3 4 5 6 7 8 9 10
	for(i=0 ; i<TAM ; i++)                               
	{
		if(i != 0 )//Para começar em 2, ele ignora o 0, se o i for diferente de 0 fazer oq esta embaixo
		{
			if(i % 2 == 0 )//se o resto da divisão por 2, for igual a 0, o num é par
			//0 é diferente de 0 ? nao/ ele é igual a 0
			//por ser igual e não diferente ele não joga o valor no vetor
			{
		
				num[i]= i;
		
				printf("\n%i",num[i]);
		
			}
		
		}
	
		
	}












	return 0;
}
