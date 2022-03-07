/*7. Para 30 alunos da turma de Algoritmos e Programação, 
receber a média de teoria e a média de laboratório, 
calcular a média final (final = teoria * 0.6 + laboratório * 0.4) e informar */

#include <stdio.h>

int main (){
	
	float media_teo, media_lab,final;
	int	alunos;
	

	for(alunos = 1 ; alunos <= 30 ; alunos++)
	{
		printf(" *Aluno %i* \n", alunos);
	
		printf("\nDigite a media de teoria: ");
		scanf("%f", &media_teo);
		
		while(media_teo < 0 || media_teo > 10 ) //nem menor q 0 e nem maior q 10
		{
			printf("A media da teoria deve ser de 0 a 10\n\n Digite novamente a media da teoria:  ");
			scanf("%f", &media_teo);
		}
		
		printf("\nDigite a media de laboratorio: ");
		scanf("%f", &media_lab);
	   
	    while(media_lab < 0 || media_lab > 10 ) 
		{
			printf("\n A media do laboratorio deve ser de 0 a 10\n\n Digite novamente a media do laboratorio:  ");
			scanf("%f", &media_lab);
		}
		
		final = media_teo * 0.6 + media_lab * 0.4;
		printf("\nA media final e %.2f\n", final);
		
			
		if(final >= 7)                  //nota 7 pra cima aluno foi bem
		{
			printf("\nO aluno foi bem");  //de 5 a menor q 7 aluno foi razoavel, maior ou igual a 5 e menor q 7
			
										//  se a media final for menor q 5, ele foi ruim
		}
		else
		{
			if(final >= 5 && final <7 )
			{
				printf("\nO aluno foi razoavel"); 
			}
			else
			{
				printf("\nO aluno foi ruim");
			}
			
		}
		printf ("\n\n");
	}


	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
