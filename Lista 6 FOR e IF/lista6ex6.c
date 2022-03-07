/*6. Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas. 
    Este programa deverá mostrar no final:

 - a menor altura do grupo;
 - a média de altura das mulheres;
 - o número de homens; 
 - o sexo da pessoa mais alta. */
 
 #include <stdio.h>
 int main (){
 	
 	float altura, menor_altura, maior_altura, media_al_mulheres, total_al_mulheres=0;
 	int i,sexo,numero_homens=0, numero_mulheres=0, sexo_maior;
 	
 	for(i=0; i<15 ; i++)
	{
	 	printf("\nDigite a altura da pessoa %i:  ",i+1);
 		scanf("%f", &altura);
 		
 		printf("\nDigite o sexo da pessoa %i \n",i+1);
 		printf("1-Masculino\n2-Feminino\n\n");
 		scanf("%i", &sexo);
 		
 		if(sexo==2)
	    {
	    	numero_mulheres++;
	    	total_al_mulheres+=altura; //soma a altura anterior com a altura informada
		}
		else
		{
			numero_homens++;
		}
 		
 		if(i==0) //inicialização 
		{
			menor_altura=altura;
			maior_altura=altura;
		 	
		}
		else
		{
			if(altura<menor_altura)
			{
				menor_altura=altura;
			}
			if(altura>maior_altura)
			{
				maior_altura=altura;
				
				sexo_maior=sexo; // o sexo_maior vai mostrar o sexo da pessoa que possui a maior altura
			}
			
		}
 		
 	
	}
 	
 	printf("\nA Menor Altura e: %.2f", menor_altura);
 	
 	//printf("\nO total de mulheres e: %i", numero_mulheres);
 	
 	media_al_mulheres= total_al_mulheres/numero_mulheres;
 	
 	
 	printf("\nA media de altura das mulheres e: %.2f", media_al_mulheres);
 	
 	printf("\nO numero de homens e: %i", numero_homens);
 	
 	//printf("\nA maior altura e: %.2f", maior_altura);
 	
 	if(sexo_maior==1)
	{
	 	printf("\nO sexo da pessoa mais alta e o masculino");
	}
 	else
	{
 		printf("\nO sexo da pessoa mais alta e o feminino");
	}
	
 	
 	return 0;
 }
