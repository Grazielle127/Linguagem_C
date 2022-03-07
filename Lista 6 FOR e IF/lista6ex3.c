/*3. Solicitar quantos números o usuário deseja informar, 
receber cada um deles e mostrar a média aritmética dos valores positivos no final. */

#include  <stdio.h> 

int main(){

	int   quant,i,positivo=0;
	float  numero,soma=0, media;

	printf("Digite a quantidade de numeros: ");
	scanf("%i", &quant);
	
	if(quant <= 0)
	{
		printf("\nA quantidade deve ser maior que zero");
	}
	else
	{
		for(i=0 ; i<quant ;i++ )
		{
			printf("\nInforme o numero %i :  ",i+1);
			scanf("%f", &numero);
			
			if(numero>0)
			{
				soma+=numero;
				positivo++;
			}
			//soma= soma + numero
			//soma+=numero soma de numero em numero
		  	//printf("\n\nSoma dos valores: %.2f ",soma);
		  	
		  	
		}
	
		media= soma/positivo;
		printf("A media e %.2f", media);
	
	}


	return 0;
}


