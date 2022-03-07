/*5. A prefeitura de uma cidade de [15 habitantes]
 fez uma pesquisa coletando salário e número de filhos de cada um. 
    A prefeitura deseja saber: 
   
   - média do salário da população; 
   - média do número de filhos; 
   - maior salário; 
   - percentual de pessoas com salário até R$ 500,00.  if */  
   
#include <stdio.h>

	int main (){
	
//variaveis
	int	i, filhos, qtd_hab500= 0, total_filhos=0;
	float salario, total_salarios= 0,maior_salario= 0, percent_500, media_salario, media_filhos;

	for(i=0 ; i<15 ; i++)
	{
		printf("\ndigite o salario %i : ",i+1);
		scanf("%f", &salario);
		

		
		while(salario <= 0)
		{
			printf("\nDigite um salario acima de 0\n\n Digite o salario novamente: ");
			scanf("%f", &salario);
		}
		
		printf("\ndigite o numero de filhos %i : ",i+1);
		scanf("%i", &filhos);
		
		if(salario<=500) 
		{
			qtd_hab500++;
		
		}
		
									/* 0          0              +100= 100
									 100       100               +300= 400
									 400       400               +500= 900
									 900       900              +1000= 1900*/
									 
		total_salarios += salario; // total salarios = total salarios + salario [valor atual + salario] += de 1 em 1
		//printf("\nTotal salarios: %.2f \n\n",total_salarios);
		
		
									//	salario digitado -> maior salario -> novo maior salario = salario
		if(salario > maior_salario) //  cont=0  100 > 0   v = 100  salario o usuario digita | o maior salario começa com 0
									// cont=1  300  > 100 v = 300
									// cont=2  50   > 300 f = 300
		{   // ex maior_salario = 100
			maior_salario = salario; // atualiza o valor do maior salario entre os salarios digitados comparando-os 
			
		}
	
		total_filhos += filhos;
		//printf("informe o numero de filhos");
		//scanf("%i", &filhos);
	}

	media_salario= total_salarios/15;
	
	media_filhos= (float)total_filhos/15;
	
	percent_500= ((float)qtd_hab500/15)*100; //casting tranform. de int em float
	
	//printf("\nQuantidade de pessoas com salario ate 500: %i \n",qtd_hab500);
	
	printf("\n*******************************************************************\n");
	printf("\nA media de filhos e: %.2f\n",media_filhos);  
	
	printf("\nO percentual de pessoas com salario ate R$ 500,00 e: %.2f%% \n",percent_500);
	
	printf("\nA media do salario da populacao e: %.2f",media_salario);
	
	printf("\n\nO maior salario e: %.2f\n\n",maior_salario);
	
	





















	return 0;	
	}
