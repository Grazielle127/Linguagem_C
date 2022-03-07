/* 5. A velocidade média de um veículo em um percurso é dada através da distância percorrida pelo tempo, 
ou seja, Vm = DS / Dt. Calcular a velocidade média do veículo em uma estrada recebendo esses dois dados do percurso. */


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
