/*8. Voc� assina um plano de 50 minutos no celular que custa R$ 50.00 por m�s, independente de utiliz�-los integralmente ou n�o. 
    Por�m, se voc� utilizar mais do que 50 minutos, � cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
    Receber quantos minutos foram gastos no m�s e calcular o valor da conta. */  

#include <stdio.h>

int main (){
	
	float plano_minutos,minutosGasto,minutosTotal;
	
	printf ("\n\nDigite a quantidade de minutos gastos no mes\t:");
	scanf  ("%f", &plano_minutos);


	if(plano_minutos>50)
	{	
		minutosGasto=plano_minutos-50;
		minutosTotal=minutosGasto*1.50+50;
		printf ("\n\nO valor da sua conta este mes e de : %2.f ",minutosTotal);

	}

	else
	{
	    minutosGasto = 50;
		printf("O valor da Sua conta este mes e de: %.2f", minutosGasto);
	}

	
	return 0;
	
} 

	

