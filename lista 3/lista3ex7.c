/*7. Implemente um programa que calcule aumento de salário no ano corrente. 
    Se o salário for de até R$ 1000.00 deve ser calculado o novo salário com aumento de 5%, para um salário maior que R$ 1000.00 o aumento é de 7%.  */


#include <stdio.h>

int main (){
	
	float salario_atual , novo_salario;
	
	printf("Digite o seu Salario:   ");
	scanf("%f", &salario_atual);
	
	if (salario_atual <= 1000)
	{
		novo_salario= salario_atual * 0.05 + salario_atual;
		// ou salario_atual * 1.05
			
	}
	
	else
	{
		novo_salario= salario_atual * 0.07 + salario_atual;
		
	}
	
	printf("O seu novo salario e : %.2f ", novo_salario);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
