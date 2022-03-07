#include  <stdio.h>

int main (){

	float prova_teo1, prova_teo2, prova_lab1, prova_lab2, nota_final;
	
	float  nota_teoria, nota_lab;
	
	printf("Digite a nota da prova 1 de teoria");
	scanf("%f", &prova_teo1);
	
	printf("Digite a nota da prova 2 de teoria");
	scanf("%f", &prova_teo2);
	
	printf("Digite a nota da prova 1 de lab");
	scanf("%f", &prova_lab1);
	
	printf("Digite a nota da prova 2 de lab");
	scanf("%f", &prova_lab2);
	
	
	nota_teoria = (prova_teo1 + prova_teo2) / 2;
	nota_lab	= (prova_lab1 + prova_lab2) / 2;
	nota_final  = (nota_teoria * 0.6) + (nota_lab * 0.4);

	printf("nota final= %f", nota_final);



    return 0;
    
}
