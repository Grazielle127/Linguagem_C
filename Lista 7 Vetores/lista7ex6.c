/*6. Preencher automaticamente um vetor (colocar o conteudo nos espa�os do vetor)
 com todos os n�meros pares 
entre 1 e 100 e depois exibir os n�meros para o usu�rio.
indice 0 tem que estar preenchido ate o 99*/
	
#include <stdio.h>
#define TAM 100

int main (){

	int i, num[TAM];

	printf("Os numeros pares entre 1 e 100 sao: \n");
	
	//indice, � a posi��o q o num vai ocupar no vetor.   0 1 2 3 4 5 6 7 8 9 10
	for(i=0 ; i<TAM ; i++)                               
	{
		if(i != 0 )//Para come�ar em 2, ele ignora o 0, se o i for diferente de 0 fazer oq esta embaixo
		{
			if(i % 2 == 0 )//se o resto da divis�o por 2, for igual a 0, o num � par
			//0 � diferente de 0 ? nao/ ele � igual a 0
			//por ser igual e n�o diferente ele n�o joga o valor no vetor
			{
		
				num[i]= i;
		
				printf("\n%i",num[i]);
		
			}
		
		}
	
		
	}












	return 0;
}
