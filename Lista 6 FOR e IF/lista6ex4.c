//4. Receber 10 números e, ao final, informar qual é o maior e o menor deles. 

#include <stdio.h>

int main(){

	float num,maior=0, menor=0, auxiliar;
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("Digite o numero %i: ",i+1);
		scanf("%f", &num);
	
		if(i==0) //inicialização 
		{
			maior=num;
			menor=num;
		}
		else
		{
			if(num>maior)//  num maior q 0 ** o maior guarda o num anterior
			{	
				//o valor maior é armazenado para comparar com o proximo valor
				
				/*	0
				0 maior q 10 = sim
				10 maior q 3= sim
				10 maior q 20= na0*/
		
				maior=num; // o numero vai ser maior q o guardado na variavel maior (subst o valor)
				
			}
			if(num<menor)
			{
				menor=num;
			
			}
		}		
	}
	
	printf("o menor = %.2f\n\n",menor);
	printf("\n maior= %.2f\n\n", maior);
	
	
	
	
	
	
	
	
	
	return 0;
}
