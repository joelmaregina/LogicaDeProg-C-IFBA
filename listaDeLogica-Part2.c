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
    
    for(i = 0; dividendo >= divisor ; i++){
        dividendo = dividendo - divisor;
        resto = dividendo;
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
        for(j = 1; j <= 6 ; j++){
            if (i + j == valor) printf("%d %d \n", i, j);
        }
    }
}

// 51. A série de Fibonacci é formada pela sequencia: • 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Escreva um programa que gere a série de 
// FIBONACCI até o N-ésimo termo (com Nsendo uma entrada do algoritmo). 
int main()
{
    int i;
    int numAtual = 1;
    int numAnterior = 1;
    int valorSequencia = 0;
    int valor;
    
    printf("Digite o valor máximo da sua sequencia: \n");
    scanf("%d", &valor);
    
    printf("A sequência de FIBONACCI para %d termos é de: %d, %d", valor, numAtual, numAnterior);
 
    for (i = 0; i < valor - 2; i++){
        valorSequencia = numAnterior + numAtual;
        numAnterior = numAtual;
        numAtual = valorSequencia;
        printf (", %d", valorSequencia);
    }
}

// 52. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos pelo usuário; a partir daí, os termos são 
// gerados com a soma ou subtração dos dois termos anteriores, ou seja:
// 1. Ai = Ai-1 + Ai-2, para i ímpar
// 2. Ai = Ai-1 - Ai-2, para i par
// Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de FETUCCINE, sabendo-se que para existir esta série serão
//  necessários pelo menos três termos.
int main()
{
    int i;
    int primeiroValor, segundoValor;
    int valorAtual;
    int numTermos;
    
    printf("Digite o primeiro número da sequência: \n");
    scanf("%d", &primeiroValor);
    
    printf("Digite o segundo número da sequência: \n");
    scanf("%d", &segundoValor);
    
    printf("Digite o número de termos da sequência: \n");
    scanf("%d", &numTermos);
    
    if (numTermos < 3){
        printf ("A sequência precisa ter pelo menos 3 termos. Reinicie o programa");
    } else {
        printf("A sequência de FIBONACCI para %d termos é de: %d, %d", numTermos, primeiroValor, segundoValor);
        for (i = 0; i < numTermos - 2; i++){
            if (i % 2 == 0){
                valorAtual = segundoValor - primeiroValor;
            } else {
                valorAtual = segundoValor + primeiroValor;
            }
            primeiroValor = segundoValor;
            segundoValor = valorAtual;
            printf (", %d", valorAtual);
        }
    }
}

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
int main()
{
    int i;
    int valor, teste;
    
    printf("Digite o valor máximo da sua sequencia: \n");
    scanf("%d", &valor);

    for (i = 1 ; i <= valor/3; i++){
        teste = i * (i+1) * (i+2);
        if( valor == teste){
           break;
        }
    }
    
    if (valor == teste){
        printf("O número é triângular");
    } else {
        printf("O número não é triângular");
    }
}

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

    for(i = 2; i <= valor; i++){
        soma += 1.0/(i*i);
    }
    
    printf("O valor da soma é de: %.2f", soma);
}


// 58. O valor aproximado do número π pode ser calculado usando-se a série 𝑆 = 1 − (1/3^3) + (1/5^3) - (1/7^3) + (1/9^3) ... Faça um programa que
// calcule e imprima o valor de π usando os N primeiros termos da série (N sendo informado durante a execução do algoritmo).
int main()
{
    int i;
    int j = 3;
    int valor;
    int potencia;
    float novoTermo;
    float resultado = 1.0;
    
    printf("Digite a quantidade de termos a serem cauculados: \n");
    scanf("%d", &valor);
// O valor gerado pelo código não parece com o valor de PI ?????????????????????????????????????????????????
    for(i = 1; i <= valor; i++){
        if (i > 1){
            potencia = j*j*j;
            j +=2;
            novoTermo = 1.0/potencia;
            if (i % 2 == 0){
                resultado = resultado - novoTermo;
            } else{
                resultado = resultado + novoTermo;
            }
        }
        printf("Para %d termos o valor cauculado é de :%f \n",i, resultado);
    }
    printf("O valor final é de: %f", resultado);
}

// 59. O número e (número de Euler) pode ser representado e calculado por meio da utilização da série de Taylor para e quando x=1, como a soma da 
// seguinte série infinita: 𝑒 = 1 + (1/1!) + (1/2!) + (1/3!) + ... + (1/n!) Escreva um programa, que leia o número de termos da série (n) e imprima
// como saída, o cálculo do número de Euler para cada um dos n primeiros elementos da série.
int main()
{
    int i, j;
    int valor ;
    int fatorial = 1;
    float euler = 1.0;
    
    printf("Digite o número de entrada: \n");
    scanf("%d", &valor);
    
    for(i = 0; i <= valor; i++){
        if (i > 0) {
            fatorial = fatorial * i;
            euler = euler +  1.0/ fatorial;  
        } 
        printf(" %d = %f \n", i, euler);
    }
}

// 60. A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois números primos. Testes foram feitos, mas ainda não se
// achou um contra-exemplo. Escreva um programa mostrando que a afirmação é verdadeira para todo número par entre 500 e 1000. O programa deve 
// imprimir o número par e os dois primos que somados dão o número par.

// 60.1ex. Escreva um código de um sistema de votação dentre três propostas, que encerra a votação quando o usuário digita um valor negativo

int main()
{
    int i;
    int voto;
    int voto0 = 0;
    int voto1 = 0;
    int voto2 = 0;
   
    for(i = 1; i > 0; i++){
        printf("Digite seu voto \n");
        scanf("%d", &voto);
        if(voto == 0){
           voto0++;
        } else if(voto == 1){
            voto1++;
        }  else if(voto == 2){
            voto2++;
        } else if (voto < 0){
            break;  
        }
    }
    printf("O projeto 0 teve %d votos \n", voto0);
    printf("O projeto 1 teve %d votos \n", voto1);
    printf("O projeto 2 teve %d votos \n", voto2);
}

// 60.2ex. Escreva um código de um sistema de votação dentre 500 propostas, que encerra a votação quando o usuário digita um valor negativo
#define QTDE_PROPOSTAS 500

int main()
{
    int i;
    int voto;
    int votos[QTDE_PROPOSTAS];
 
     for(i = 0; i < QTDE_PROPOSTAS; i++){
        votos[i] = 0;
    }
   
    for(i = 1; i > 0; i++){
        printf("Digite seu voto \n");
        scanf("%d", &voto);
        if (voto < 0) break;  
        if (voto <= QTDE_PROPOSTAS) votos[voto]++;
    }
   
    for(i = 0; i < QTDE_PROPOSTAS; i++){
        if (votos[i] > 0) printf("O projeto %d teve %d votos \n", i, votos[i]);
    }
}

// 60.3ex. Escreva um código que caucule o número de fatoriais de 0 até 10, salve seus valores em um array de tamanho pré-definido com o #define, e
// imprima os valores de cada posição do array criado 
#define NUMERO_FATORIAIS 10
int main()
{
    int i;
    int fatorial = 1;
    int fatoriais[NUMERO_FATORIAIS];
   
    for(i = 0; i <= NUMERO_FATORIAIS; i++){
        if (i > 0) {
            fatorial = fatorial * i;
        }
        fatoriais[i] = fatorial;
    }
   
    for(i = 0; i <= NUMERO_FATORIAIS; i++){
        if (fatoriais[i] > 0) printf("O fatorial de %d  é : %d \n", i, fatoriais[i]);
    }
}

//61. Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 para cada elemento. Imprima o vetor em seguida, 
// indicando a posição e o valor na posição (um por linha).
#define TAMANHO_ARRAY 20
int main()
{
    int vetor[TAMANHO_ARRAY];
    int i;
    
    for(i = 0; i < TAMANHO_ARRAY; i++){
        vetor[i] = 0;
    }
    
    for (i = 0; i < TAMANHO_ARRAY; i++){
        printf("O array de posição %d possui valor de: %d \n", i, vetor[i]);
    }
}

//62. Faça um programa em C que leia um array de 10 posições e conte quantos números pares
// são elementos do array. Imprima esta quantidade.
int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6 ,7 ,8, 9, 10};
    int i;
    int par = 0;
    
    for (i = 0; i < 10; i++){
        if (vetor[i] % 2 == 0) par++;
    }
    printf("Este array possui %d numeros pares \n", par);
}

//63. Escreva um programa que leia dois vetores de números reais de mesma dimensão (10 posições), e imprima o vetor resultante da soma destes vetores.
int main()
{
    int vetor1[10] = {1, 2, 3, 4, 5, 6 ,7 ,8, 9, 10}; // Soma: 55
    int vetor2[10] = {0, 1, 2, 6, 7, 9, 10, 16, 25, 27}; // Soma: 103
    int soma1 = 0;
    int soma2 = 0;
    int somaTotal = 0; 
    int i;
    
    for (i = 0; i < 10; i++){
        soma1 += vetor1[i];
    }
    for (i = 0; i < 10; i++){
        soma2 += vetor2[i];
    }
    
    somaTotal = soma1 + soma2;
    
    printf("A soma do 1º array é de: %d \n", soma1);
    printf("A soma do 2º array é de: %d \n", soma2);
    printf("A soma desses 2 arrays é de: %d \n", somaTotal); // 55 + 103 = 158
}

// Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior valor dentre os elementos do array.
int main()
{
    int vetor[20] = {199, 9, 6, 7, 16, 10, 30, 33, 39, 555, 8, 23, 11, 5 , 22, 25, 27, 3, 610, 19};
    int valorMenor = vetor[0];
    int valorMaior = vetor[0]; 
    int i;

    
    for (i = 0; i < 20; i++){
        if (vetor[i] < valorMenor) valorMenor = vetor[i];
        if (vetor[i] > valorMaior) valorMaior = vetor[i];
    }
    
    printf("O menor valor do array é de: %d \n", valorMenor);
    printf("O maior valor do array é de: %d \n", valorMaior);

}

// 65. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior valor dentre os elementos do array, 
// bem como suas respectivas posições.
int main()
{
    int vetor[20] = {9, 6, 7, 16, 10, 30, 33, 39, 8, 23, 11, 5 , 22, 25, 27, 3, 55, 199, 19, 750};
    int valorMenor = vetor[0]; 
    int valorMaior = vetor[0];
    int posicaoMenor = 0;
    int posicaoMaior = 0;
    int i;

    
    for (i = 0; i < 20; i++){
        if (vetor[i] < valorMenor) {
            valorMenor = vetor[i];
            posicaoMenor = i;
        }
        if (vetor[i] > valorMaior){
           valorMaior = vetor[i];
           posicaoMaior = i;
        }
    }
    
    printf("O menor valor do array é de: %d, e ele está na posição %d do array \n", valorMenor, posicaoMenor);
    printf("O maior valor do array é de: %d, e ele está na posição %d do array \n", valorMaior, posicaoMaior);
}

// 66. Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em um segundo vetor e imprima este último.
int main()
{
    int vetor1[10] = {1, 2, 3, 4, 5, 6 ,7 ,8, 9, 10}; 
    int vetor2[10] = {0, 1, 2, 6, 7, 9, 10, 16, 25, 27}; 
    int i;

    
    for (i = 0; i < 10; i++){
        vetor2[i] = vetor1[i];
    }
    
    for (i = 0; i < 10; i++){
        printf("Na posição %d do vetor 2 o valor é de: %d \n", i, vetor2[i]);
    }
}

// 67. Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior valor dos dois em cada posição em um 
// terceiro vetor. Em seguida, imprima este terceiro vetor.
int main()
{
    int vetor1[10] = {10, 5, 55, 34, 22, 30, 155, 48, 6, 16}; 
    int vetor2[10] = {0, 92, 9, 7, 89, 3, 22, 555, 0, 15};
    int vetor3[10];
    int i;

    
    for (i = 0; i < 10; i++){
        if (vetor1[i] > vetor2[i]) vetor3[i] = vetor1[i];
        if (vetor1[i] < vetor2[i]) vetor3[i] = vetor2[i];
    }
    
    for (i = 0; i < 10; i++){
        printf("A posição %d do vetor 3 possui valor de: %d \n", i, vetor3[i]);
    }
}

//68. Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e informe o dia que mais choveu, o dia que menos choveu 
// e as médias pluviométricas de cada uma das duas quinzenas.
#define TAM 30
int main()
{
    int i;
    float vetor[TAM]= {50.5, 60.7, 72.7, 35.8, 95.8, 99.9, 64.3, 25.3, 73.4, 56.1, 83.1, 47.5, 77.7, 89.9, 54.6, 35.9, 16.0, 0.0, 112.1, 5.5, 7.5, 6.1, 16.9, 23.4, 7.9, 1.9, 11.2, 6.2, 115.1, 199.2 };
    float quinzena1 = 0;
    float quinzenas2 = 0;
    float mediaQui1, mediaQui2;
    int maisChoveu, diaMaisChoveu;
    int menosChoveu, diaMenosChoveu;
    
    maisChoveu = vetor[0];
    menosChoveu = vetor[0];
    
    for(i = 0; i < TAM; i++){
        if(menosChoveu > vetor[i]){
            menosChoveu = vetor[i];
            diaMenosChoveu = i+1;
        } 
        if(maisChoveu < vetor[i]){
            maisChoveu = vetor[i];
            diaMaisChoveu = i+1;
        }
        if(i < 15){
            quinzena1 += vetor[i];
            mediaQui1 = quinzena1/15.0;
        } 
        if(i >= 15){
            quinzenas2 += vetor[i];
            mediaQui2 = quinzenas2/15.0;
        } 
    }
    
    printf("O dia que mais choveu foi o dia %d, o dia que menos choveu foi o dia %d. \n A média da primeira quinzena foi de: %.2f \n A média da segunda quinzena foi de: %.2f", diaMaisChoveu, diaMenosChoveu, mediaQui1, mediaQui2);
    
}

// 69. Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o programa deve ler um valor inteiro e imprimir o número 
// de vezes que este valor ocorre no vetor.
int main()
{
    int i;
    int array[15] = {7, 7, 6, 55, 6, 55, 8, 6, 16, 7, 6, 16, 25, 100, 16};
    int valor;
    int repetido = 0;
    
    printf("Digite o valor que você quer ver quantas vezes se repete no array: ");
    scanf("%d", &valor);
    
    for (i = 0; i < 15; i++){
        if (valor == array[i]) repetido++;
    }

    printf("O valor digitado se repete %d veze(s) no array \n", repetido);
}

//70. Escreva um programa que carregue um array com tamanho variável. O tamanho máximo do array é de 100 posições (carga de array com sentinela).
// 70. Escreva um programa que carregue um array com tamanho variável. O tamanho máximo
#define TAM 100

int main()
{
    int i;
    int vetor[TAM];
    int opcao;
    int entrada;
    int sentinela = 0;
    
    do{
        printf("\n Digite a sua operação: \n");
        printf("[1] Adicionar array \n");
        printf("[2] Imprimir array \n");
        printf("[0] Sair \n");
        scanf("%d", &opcao);
        
            if(opcao == 1){
                printf ("Digite a sua entrada: ");
                scanf("%d", &entrada);
                vetor[sentinela] = entrada;
                sentinela++;
            }else if (opcao == 2){
                for(i = 0; i < sentinela; i++){
                    printf(" %d ", vetor[i]);
               }
            }
    }while(opcao > 0);
    
}

// 71. Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O programa deve informar a primeira posição onde este inteiro
// ocorre no vetor ou -1 caso o valor não ocorra no vetor (Busca Sequencial).
int main()
{
    int vetor[10] = {10, 2, 9, 4, 8, 6, 7, 5, 3, 1};
    int i;
    int entrada;
    int posicao = -1;
   
    printf("Digite sua entrada: ");
    scanf("%d", &entrada);
   
    for (i = 0; i < 10; i++){
        if (entrada == vetor[i]){
          posicao = i;
        }
    }
    printf("A sua entrada está na posição %d do vetor", posicao);
}

// 72. Escreva um programa que leia um vetor de 10 posições ordenados de inteiros e um inteiro. O programa deve informar a primeira posição 
// onde este inteiro ocorre no vetor ou -1 caso o valor não ocorra no vetor (Busca Binária).
#define TAM 10
int main()
{
    int i;
    int vetor[TAM] = {1, 2, 3, 4, 5, 6 ,7 ,8, 9, 10};
    int entrada;
    int posicao = -1;
    int inicio = 0;
    int meio;
    int final = TAM -1;
    
    printf("Digite o valor que você quer conferir a existência no array \n");
    scanf("%d", &entrada);

    while (inicio <= final && posicao < 0){
        meio = ((final - inicio) / 2) + inicio;
        if (vetor[meio] == entrada){
            posicao = meio;
        } else if (vetor[meio] > entrada){
            final = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    printf("O valor digitado está na posição %d do array", posicao);
}

// 73. Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima:
// a. A moda dos elementos no array (elemento mais freqüente).
// b. A mediana dos elementos no array (elemento central)
// c. A média

// 75. Escreva um programa que ordene um array de inteiros de 15 posições utilizando o método da bolha (bubble sort).
#define TAM 15
#define TRUE 1
#define FALSE 0
int main()
{
    int i;
    int vetor[TAM] = {10, 2, 11, 13, 9, 4, 15, 8, 6, 14, 7, 5, 12, 3, 1};
    int trocou, aux;
    
    trocou = TRUE;
   
    while(trocou == TRUE){
        trocou == FALSE;
        for(i = 0; i < TAM - 1; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                trocou = TRUE;
            }
        }
    }
    for (i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }
}