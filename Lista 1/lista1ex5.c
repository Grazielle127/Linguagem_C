/* 5. A velocidade m�dia de um ve�culo em um percurso � dada atrav�s da dist�ncia percorrida pelo tempo, 
ou seja, Vm = DS / Dt. Calcular a velocidade m�dia do ve�culo em uma estrada recebendo esses dois dados do percurso. */


#include   <stdio.h>

int main (){
	
	float distancia, tempo, velocidade;
	
	printf(" insira o valor da distancia");
	scanf("%f", &distancia);
	
	printf(" insira o valor do tempo");
	scanf("%f", &tempo);
	
	velocidade= distancia/tempo;
	printf("velocidade=%f", velocidade);
	
	
	
	

 	return 0;



}
