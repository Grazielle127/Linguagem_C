
/*3. Receber 10 n�meros e informar se cada um deles
 � negativo, positivo ou nulo. */
 
 #include <stdio.h>

int main (){

    int i, numero;

 
    for(i=0; i<10; i++)
    {
        printf("\n\nNumero:\t");
        scanf("%i", &numero);

        if(numero>0) 
        {
            printf("Positivo");
        }
        else
        {
            if(numero==0)
            {
                printf("Nulo");
            }
            else
            {
                printf("Negativo");
            }
        }


    }




    return 0;
}
