/*8. Desenvolver um programa que recebe a quantidade de alunos que estão cursando o 3º semestre. 
   Para cada aluno receber a quantidade de disciplinas que cursou no 2º semestre
    e também a nota final relativa a cada disciplina.
   Calcular e mostrar a média de cada aluno para verificar o aproveitamento do último semestre cursado.*/

 #include <stdio.h>
 int main (){
 	
 	int  i,y,qtd_alunos, qtd_disciplinas;
 	float nota_final, media, soma=0;
 	
 	
 	
 	printf("\nDigite a quantidade de alunos: ");
 	scanf("%i", &qtd_alunos);
 	
 	
 	
 	for(i=0 ; i<qtd_alunos; i++)
	 {
	 	printf("\nDigite a quantidade de disciplinas que cursou no 2 semestre, aluno %i:  ", i+1);
	 	scanf("%i", &qtd_disciplinas);
	 	
	 
	 	
	 	y=0;
		while(y<qtd_disciplinas)
		{
			printf("\nDigite a nota final do aluno na disciplina %i: ", y+1);
	 		scanf("%f", &nota_final);
	 		y++;
	 		
	 		soma=soma+nota_final;
	 		//media=soma/(float)qtd_disciplinas;
		}
		  
			media=soma/qtd_disciplinas;
		
			
			printf("\nA media do aluno e: %.2f",media );
			
			
			soma=0;
			media=0;
			
			printf("\n\n*****************************************************");
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }


