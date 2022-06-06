// Um número primo é um número que possui somente dois divisores: ele mesmo e o número 1. Um número primo p é um número primo de Chen 
// se o próximo número ímpar (p + 2) é primo ou o produto de dois primos (subprimo).

//Escreva um programa em C, que leia um número e verifique se ele é um número primo de Chen.

// Por exemplo, 2 é um primo de Chen, pois 2+2 = 4 e 4 é subprimo (2*2).
// 3 é um primo de Chen, pois 3+2 = 5 e 5 é primo.

#define TRUE 1 
#define FALSE 2
int main()
{
    //QUESTÃO NÃO FINALIZADA:
    int i, j;
    int entradaNumero;
    int numTest1 = 3;
    int numTest2 = 0;
    int divisivel1 = 0 ;
    int divisivel2 = 0 ;
    int primosGemeos = 0;
    int num = 2;
    int divisivel = 0 ;
    int ePrimo = FALSE;
    
    printf("Digite o número para descobrir se ele é um número de Chen : ");
    scanf("%d", &entradaNumero);
    
    for(i = 2; i <= num || num > 1000 ; i++, num ++){
        if (num % i == 0){
            divisivel++;
            ePrimo = TRUE;
        }
    }
    if (entradaNumero == ePrimo ) {};
    for(i = 2, divisivel1 = 0; i <= entradaNumero; i++){
        if (entradaNumero % i == 0){
            divisivel1++;
        }
    }
    if(divisivel1 == 1){
        if (entradaNumero * ePrimo ){};
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
