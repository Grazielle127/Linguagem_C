/*4. Na Dinamarca todo cidad�o tem acesso � educa��o e sa�de de qualidade 
atrav�s do pagamento de um imposto �nico sobre o sal�rio, de 37%. 
Receber o sal�rio bruto (valor do sal�rio sem descontos) de um trabalhador dinamarqu�s e calcular o sal�rio l�quido (valor do sal�rio ap�s os descontos).
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


