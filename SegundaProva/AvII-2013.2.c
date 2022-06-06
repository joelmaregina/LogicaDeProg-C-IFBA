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

/*********************** Questão 2 ***********************/


/*********************** Questão 3 ***********************/
int main()
{
    int i, j;
    int entradaPrimos;
    int numTest1 = 3;
    int numTest2 = 0;
    int divisivel1 = 0 ;
    int divisivel2 = 0 ;
    int primosGemeos = 0;

    printf("Digite o número de pares de primos (primos gêmeos) que você quer imprimir : ");
    scanf("%d", &entradaPrimos);

    printf("O(s) %d primeiro(s) primo(s) gêmeos: \n", entradaPrimos);

   while(primosGemeos < entradaPrimos){
        for(i = 2, divisivel1 = 0; i <= numTest1; i++){
            if (numTest1 % i == 0){
                divisivel1++;
            }
        }
        numTest2 = numTest1 +2;
        for(j = 2, divisivel2 = 0; j <= numTest2; j++){
            if (numTest2 % j == 0){
                divisivel2++;
            }
        }
        if (divisivel1 == 1 && divisivel2 == 1){
            printf("(%d, %d) ", numTest1, numTest2);
            primosGemeos++;
        }
        numTest1++;
   }
}

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