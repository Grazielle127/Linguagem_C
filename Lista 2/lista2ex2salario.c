/*2. Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. Receber o total de horas 
normais e o total de horas extras trabalhadas por um empregado no mês e calcular o salário dele.

*/

#include <stdio.h>

int main () {
	
	int hora_normal, hora_extra, salario;
	
	printf("digite a quantidade de horas normais trabalhadas..  ");
	scanf("%i", &hora_normal);
	
	printf("digite a quantidade de horas extras trabalhadas..  ");
	scanf("%i", &hora_extra);
	
	salario = 10 * hora_normal + 15 * hora_extra ;
	printf("O seu salario sera de %i reais", salario);
	
	
	
	return 0;
}
