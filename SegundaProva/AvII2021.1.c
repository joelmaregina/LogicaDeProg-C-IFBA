/*********************** Questão 1 ***********************/
#define TRUE 1
#define FALSE 0
int main()
{
    int i, j;
    int array1[]= {2, 3, 4, 5, 6, 12, 1, 23, 11, 32};
    int array2[]= {2, 31, 4, 51, 16, 12, 1, 23, 111, 323};
    int arrayResultado[10];
    int soma1 = 0;
    int soma2 = 0;
    int divisivel = 0;
    int aux;
    int igual;
    
    for(i = 0 ; i < 10; i++){
        igual = FALSE;
        aux = array1[i];
        for(j = 0;  j < 10; j++){
            if(aux == array2[j]) igual = TRUE;
        }
        //**********DESAFIO 1***********
        if(igual == FALSE) printf("%d ", array1[i]);
        //**********DESAFIO 2***********
        arrayResultado[i] = array1[i] + array2[i];
    }
    
    printf("\n Array Resultado:");
    printf("\n");
    for(i = 0; i < 10; i++){
        printf("%d ", arrayResultado[i]);
    }
    
    //**********DESAFIO 3***********
    printf("\n Números primos do array 1: \n");
     for(i = 0; i < 10; i++){
        aux = array1[i];
        for (j = 2; j <= aux; j++){
            if (aux % j == 0) divisivel++;
         }
        if (divisivel == 1) printf("%d ", aux);
        divisivel = 0;
    }
    printf("\n Números primos do array 2: \n");
     for(i = 0; i < 10; i++){
        aux = array2[i];
        for (j = 2; j <= aux; j++){
            if (aux % j == 0) divisivel++;
         }
        if (divisivel == 1) printf("%d ", aux);
        divisivel = 0;
    }
    printf("\n Números primos do array Resultado: \n");
     for(i = 0; i < 10; i++){
        aux = arrayResultado[i];
        for (j = 2; j <= aux; j++){
            if (aux % j == 0) divisivel++;
         }
        if (divisivel == 1) printf("%d ", aux);
        divisivel = 0;
    }
}

/*** Questão 2 --> 3ª Prova ***/