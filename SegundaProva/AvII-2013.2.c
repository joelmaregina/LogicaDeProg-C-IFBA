/*********************** Questão 1 ***********************/
int main()
{
    int sub = 0;
    int i, entrada;
    int impar = 1;
    
    printf("Digite o número que você quer descobrir a raiz: ");
    scanf("%d", &entrada);
    
    do{
        entrada -= impar;
        sub++;
        impar +=2;
    } while (entrada > 0);
    
    printf("A raiz do número digitado é: %d", sub);
}

/*********************** Questão 3 ***********************/


/*********************** Questão 4 ***********************/
#define TAM 50
int main()
{
    int i, j;
    int array[TAM];
    int arrayFreq[TAM] = {0};
    int matricula;
    int cont = 0;
    
    for(i = 0 ; i < TAM; i++){
        printf("Adcione sua matricula: ");
        scanf("%d", &matricula);
        array[i] = matricula;
    }
    
    for(i = 0; i < TAM; i++){ 
        for(j = i; j < TAM; j++){
            if (array[i] == array[j]) arrayFreq[i]++;
        }
    }
    for (i = 0; i < TAM; i++){
        if(arrayFreq[i] == 1){
            printf("O aluno %d esteve presente na aula \n", array[i]);
            cont++;
        }
    }
    printf("O número total de alunos presentes na aula foi de: %d aluno(s)", cont);
}
