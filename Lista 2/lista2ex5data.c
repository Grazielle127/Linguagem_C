

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano, dias;
	
	printf("Calcular quantos dias uma pessoa tem, aproximadamente.");
	printf("\nInsira o ano de nascimento: ");
	scanf("%i",&ano);
	
	dias = ( 2021 - ano ) * 365;
	
	printf("\nVocê tem, aproximadamente, %i dias desde seu nascimento.",dias);
	
	return 0;
}
