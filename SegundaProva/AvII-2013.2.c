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