// 41. Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a 100.
int main()
{
    int i;
    
    for(i = 1; i <=100; i++) printf("%d \n", i);   
}

// 42. Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem decrescente).
int main()
{
    int i;
    
    for(i = 100; i > 0; i--) printf("%d \n", i);   
}

// 43. Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 100.
int main()
{
    int i;
    
    for(i = 2; i <= 100 ; i += 2) printf("%d \n", i);
 
}

// 44. Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma de todos eles.
int main()
{
    int i;
    int soma = 0;
    
    for(i = 1; i <= 100 ; i++){
      printf("%d \n", i);
      soma += i;
    } 
    
    printf("A soma é: %i", soma);
}

// 45. Escreva um programa que leia 5 números, e imprima a média entre eles.
int main()
{
    int i;
    float nota;
    float media = 0;
    
    for(i = 0; i <= 4 ; i++){
      printf("Digite a sua nota: \n" );
      scanf("%f", &nota);
      media += nota;
    }
    
    media /= i;
    
    printf("A média das notas é de : %.2f", media);
}

// 46. Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e positivos), ou seja, A / B, através de subtrações 
// sucessivas. Esses dois valores são passados pelo usuário através do teclado.
// Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e
// positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são
// passados pelo usuário através do teclado.
int main()
{
    int i;
    int dividendo, divisor;

    printf ("Digite o dividendo: \n");
    scanf("%d", &dividendo);
    printf ("Digite o divisor: \n");
    scanf("%d", &divisor);
    
    for(i = 0; dividendo >= 0 ; i++){
        dividendo = dividendo - divisor;
    }
    
    if (dividendo < 0) i -= 1;
    
    printf("O quociente é de: %d \n", i);
}

// 47. Escreva um programa que calcule o resto da divisão de A por B (número inteiros e positivos), ou seja, A % B, através de subtrações
// sucessivas. Esses dois valores são passados pelo usuário através do teclado.
int main()
{
    int i;
    int dividendo, divisor;
    int resto;

    printf ("Digite o dividendo: \n");
    scanf("%d", &dividendo);
    printf ("Digite o divisor: \n");
    scanf("%d", &divisor);
    
    for(i = 0; dividendo > divisor ; i++){
        dividendo = dividendo - divisor;
        if(dividendo == 0){
            resto = 0;
        } else{
            resto = dividendo;
        }
    }
    
    printf("O resto é de: %d \n", resto);
}

// 48. Escreva um programa que determine se um dado número N (digitado pelo usuário) é primo ou não.
// 49. Escreva um programa que determine se um dado número N (digitado pelo usuário) é primo ou não.
int main()
{
    int i;
    int num;
    int divisivel = 0 ;
    
    printf("Digite o numero que você quer avaliar se é primo : \n");
    scanf("%d", &num);


    for(i = 2; i <= num ; i++){
        if (num % i == 0){
            divisivel++;
        }
    }
    
    if (divisivel == 1){
        printf("O número é primo");
    } else {
        printf("O número não é primo");
    }
}

// 50. Escreva um programa que leia um valor e imprima todas as possíveis combinações em que o lançamento de um par de dados tenha como
// resultado da soma dos valores dos dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve imprimir as seguintes 
//combinações:
// • 1 6
// • 2 5
// • 3 4
// • 4 3
// • 5 2
// • 6 1
int main()
{
    int i, j;
    int valor;
    
    printf("Digite o valor que você quer descobrir as combinações possíveis: \n");
    scanf("%d", &valor);
    
    for(i = 1; i <= 6 ; i++){
        if (i + 1 == valor) printf ("1 %d \n", i);
        if (i + 2 == valor) printf ("2 %d \n", i);
        if (i + 3 == valor) printf ("3 %d \n", i);
        if (i + 4 == valor) printf ("4 %d \n", i);
        if (i + 5 == valor) printf ("5 %d \n", i);
        if (i + 6 == valor) printf ("6 %d \n", i);
    }
}

// 51. A série de Fibonacci é formada pela sequencia: • 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Escreva um programa que gere a série de 
// FIBONACCI até o N-ésimo termo (com Nsendo uma entrada do algoritmo). 
int main()
{
    int i, iAnterior;
    int numSequencia;
    int valor;
    
    printf("Digite o valor máximo da sua sequencia: \n");
    scanf("%d", &valor);
    //??????????????????????????????????????????????????????????
    for (i = 0; i > valor; i++){
    }
}

// 52. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos pelo usuário; a partir daí, os termos são 
// gerados com a soma ou subtração dos dois termos anteriores, ou seja:
// 1. Ai = Ai-1 + Ai-2, para i ímpar
// 2. Ai = Ai-1 - Ai-2, para i par
// Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de FETUCCINE, sabendo-se que para existir esta série serão
//  necessários pelo menos três termos.


// 53. Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7.000.000 de habitantes e uma taxa 
// de natalidade de 2% ao ano, escreva um programa, que imprima o tempo necessário para que a população do país A ultrapasse a população do país B.
int main()
{
    int i;
    int paisA = 5000000;
    int paisB = 7000000;

    for(i = 1; paisA <= paisB ; i++){
        paisA = paisA + (paisA*0.03);
        paisB = paisB + (paisB*0.02);
    }
    
    printf("O tempo necessário é de : %d anos", i); // 36 ???????????????????????????????????????????
}

// 54. Construa um programa que receba um número e verifique se ele é um número triangular. (Um número é triangular quando é resultado do 
// produto de três números consecutivos. Exemplo: 24 = 2 x 3 x 4)


// 55. Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores próprios do outro. Os divisores próprios de um 
// número positivo N são todos os divisores inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e 220, pois
// os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. Efetuando a soma destes números obtemos o resultado 284 
// (1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142, efetuando a soma destes números 
// obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220). Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e 18416 
// são amigos, por exemplo).
int main()
{
    int i, j;
    int valor1, valor2;
    int soma1 = 0;
    int soma2 = 0;
    
    printf("Digite o 2 valores para descobir se eles são números amigos : \n");
    scanf("%d %d", &valor1, &valor2);
    
    for (i = 1; i < valor1; i++){
        if(valor1 % i == 0) soma1 += i;
    }
    
    for (j = 1; j < valor2; j++){
        if(valor2 % j == 0) soma2 += j;
    }
    
    if (soma1 == valor2 || soma2 == valor1) printf("Os números digitados são amigos!");
    else printf ("Os números digitados não são amigos.");
}

// 56. Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores próprios de um número positivo N são todos os divisores 
// inteiros positivos de N exceto o próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é igual à 6 (1 + 2 + 3 = 6).
// Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).
int main()
{
    int i;
    int valor;
    int soma = 0;
    
    printf("Digite o valor para descobir se ele é perfeito : \n");
    scanf("%d", &valor);
    
    for (i = 1; i < valor; i++){
        if(valor % i == 0) soma += i;
    }
    
    if (soma == valor) printf("O digitado número é perfeito!");
    else printf ("O número digitado não é perfeito.");
}


//57. Sendo 𝑆 = 1 + (1/2^2) + (1/3^3) + (1/4^4) + (1/5^5) + ... + (1/N^n) +, um somatório de N (informado pelo usuário) termos, escreva um programa para
// calcular S para um número N.
int main()
{
    int i;
    int valor;
    float soma = 1.0;
    
    printf("Digite o valor : \n");
    scanf("%d", &valor);
    // Não esta funcionado! -> ??????????????????????????????????????????????????
    if(valor > 1) {
        for(i = 2; i <= valor; i++){
            soma += 1/(i*i);
        }
    }
    printf("O valor da soma é de: %f", soma);
}


// 58. O valor aproximado do número π pode ser calculado usando-se a série 𝑆 = 1 − (1/3^3) + (1/5^3) - (1/7^3) + (1/7^3) ... Faça um programa que
// calcule e imprima o valor de π usando os N primeiros termos da série (N sendo informado durante a execução do algoritmo).


// 59. O número e (número de Euler) pode ser representado e calculado por meio da utilização da série de Taylor para e quando x=1, como a soma da 
// seguinte série infinita: 𝑒 = 1 + (1/1!) + (1/2!) + (1/3!) + ... + (1/n!) Escreva um programa, que leia o número de termos da série (n) e imprima
// como saída, o cálculo do número de Euler para cada um dos n primeiros elementos da série.


// 60. A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois números primos. Testes foram feitos, mas ainda não se
// achou um contra-exemplo. Escreva um programa mostrando que a afirmação é verdadeira para todo número par entre 500 e 1000. O programa deve 
// imprimir o número par e os dois primos que somados dão o número par.