/*9. Receber um ano e se este ano for bissexto exibir na tela �Ano Bissexto�, sen�o exibir na tela �Ano N�o-Bissexto�. 
    Um ano � bissexto se for divis�vel por 4, mas n�o por 100. 
    Um ano tamb�m � bissexto se for divis�vel por 400. */ 

#include <stdio.h>

int main(){
	int ano;
	
	printf("Informe um numero: ");
	scanf("%i", &ano);	
	
	
	/*		  Teste 1 			    Teste 2				
		    ano % 4 == 0   &&	!(ano % 100 == 0)	    				RESULTADO
				1					  0										0	
				0					  1										0
				1					  1										1
				0					  0										0
	*/
	
	if((ano % 4 == 0 && !(ano % 100 == 0)) || ano % 400 == 0){
		printf("E bissexto.");
	}else{
		printf("Nao e bissexto.");
	}
	
	return 0;
}
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
