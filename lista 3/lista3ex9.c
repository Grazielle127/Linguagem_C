/*9. Receber um ano e se este ano for bissexto exibir na tela “Ano Bissexto”, senão exibir na tela “Ano Não-Bissexto”. 
    Um ano é bissexto se for divisível por 4, mas não por 100. 
    Um ano também é bissexto se for divisível por 400. */ 

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
