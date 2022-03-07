/*4. Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. 
   Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5. */


#include <stdio.h>

int main (){
	
	float prova_1, prova_2, media;
	
	printf("Digite a prova 1:  ");
	scanf("%f", &prova_1);
	
	printf("Digite a prova 2:   ");
	scanf("%f", &prova_2);	
	
	media= (prova_1 + prova_2)/2;
	
	if(media >= 5)
	
	{
	
		printf("aprovado");	
			
	}
	
	else 
	{
     	printf(" Voce nao foi aprovado, faltaram %.2f pontos para atingir a media 5 ", 5 - media);	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
