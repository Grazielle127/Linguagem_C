/*4. Na Dinamarca todo cidadão tem acesso à educação e saúde de qualidade 
através do pagamento de um imposto único sobre o salário, de 37%. 
Receber o salário bruto (valor do salário sem descontos) de um trabalhador dinamarquês e calcular o salário líquido (valor do salário após os descontos).
*/
#include <stdio.h>

int main(){
	
	float s_bruto, s_liquido, total;
	
	printf("\nSALARIO BRUTO: ");
	scanf("%f", &s_bruto);
	
	s_liquido = (s_bruto*37)/100;
	total = s_bruto - s_liquido;
	
	printf("\nSALARIO LIQUIDO = %2.f", total);
}


