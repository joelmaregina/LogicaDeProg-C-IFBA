// Como declarar uma String em C:
   int main()
{
    int i;
    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    //ou:
    char str2[] = "Hello";
    
    for(i = 0; str1[i] != '\0' ; i++){
        printf("%c", str1[i]);
    };
    printf("\n");
    for(i = 0; str2[i] != '\0' ; i++){
        printf("%c", str2[i]);
    };
}
    

// 76. Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais existem nesta string.
#define TAM 200
int main()
{
    int i;
    char string[TAM];
    int contador = 0;
    
    printf("Digite a sua entrada: \n");
    fgets(string, TAM, stdin);
    
    for(i = 0; string[i] != '\0' ; i++){
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||string[i] == 'U' ){
            contador++;
        }
    }
    
    printf("O número de vogais é igual a: %i", contador);  
}

// 77. Escreva um programa em C, que leia uma string, gere uma nova string com o texto invertido e imprima esta nova string.
#define TAM 200
int main()
{
    char string[TAM];
    char novaString[TAM];
    int tamanhoOriginal;
    int iOriginal, iInvertido;
    
    printf("Digite a sua entrada: \n");
    fgets(string, TAM, stdin);
    
    for(tamanhoOriginal = 0; string[tamanhoOriginal +1] != '\0'; tamanhoOriginal++); // +1 para que quando chegar q o '/0' não seja contado com o incremento(++)
    //Não esquecer do ponto e virgula acima! Senão fica como se fosse um for dentro de outro for.
    
    for(iInvertido = 0, iOriginal = tamanhoOriginal-1 ; iInvertido < tamanhoOriginal ; iInvertido++ , iOriginal--){
       novaString[iInvertido] = string[iOriginal];
    }
    novaString[tamanhoOriginal] = '\0';
    
    puts(novaString);
    
}

// 78. Escreva um programa em C, que leia uma string e um caracter e conte o número de ocorrências do caracter lido na string.
#define TAM 200
int main()
{
    int i;
    char caracter;
    char string[TAM];
    int contador = 0;
    
    printf("Digite a sua entrada: ");
    fgets(string, TAM, stdin);
    printf("Digite o seu caracter: ");
    scanf(" %c", &caracter);

    
    for(i = 0; string[i] != '\0' ; i++){
        if (string[i] == caracter){
            contador++;
        }
        // printf("%c \n", string[i]);
    }
    
    printf("O número de vogais é igual a: %i", contador);  
}

// 79. Escreva um programa em C, que gere a substring de uma string original, dado a posição inicial e a final da substring.
#define TAM 200
int main()
{
    int i, j;
    int pInicial, pFinal;
    char string[TAM];
    char substring[TAM];
    
    printf("Digite a sua string inicial: ");
    fgets(string, TAM, stdin);
    printf("Digite sua posição inicial: ");
    scanf("%d", &pInicial);
    printf("Digite sua posição final: ");
    scanf("%d", &pFinal);

    for(i = pInicial, j = 0; pInicial <= pFinal; pInicial++, j++){
        substring[j] = string[pInicial];
    }
    substring[pFinal+1] = '\0';
    
    puts(substring);
}

// 80. Escreva um programa em C que leia duas string e informe se a primeira contém a segunda.
// INCOMPLETA - NÃO FUNCIONA
// #define TAM 200
// int main()
// {
//     int i, j, k;
//     char string1[TAM];
//     char string2[TAM];
//     char substring[TAM];
    
//     printf("Digite a sua primeira string : ");
//     fgets(string1, TAM, stdin);
//     printf("Digite a sua segunda string : ");
//     fgets(string2, TAM, stdin);

//     // puts(string1);
//     // puts(string2);
//     for(i = 0; string1[i] != '\0'; i++){
//         printf("%c ", string1[i]);
//         for(j = 0, k = 0 ; string2[j] != '\0'; i++){
//             if(string1[i] == string2[j]){
//                 substring[k] = string2[j];
//                 k++;
//             }
//         }
//     }
//     substring[k] = '\0';
//     puts(substring);
}

// 81. Escreva um programa em C que normalize uma string lida, em uma nova string. Normalizar uma string é o processo de remover os espaços 
// excedentes que separam as palavras.
#define TAM 100
#define BRANCO 32
int main()
{
    int iOriginal, iSemEspaco;
    char string[TAM];
    char stringSemEspaco[TAM];
    
    printf("Digite a string : ");
    fgets(string, TAM, stdin);
    
    for(iOriginal = 0, iSemEspaco =0 ; string[iOriginal] != '\0'; iOriginal++){
        if(string[iOriginal] != BRANCO){
            stringSemEspaco[iSemEspaco] = string[iOriginal];
            iSemEspaco++;
        }
    }
    stringSemEspaco[iSemEspaco] = '\0';
    puts(stringSemEspaco);
}

// 83. é igual a 79.

// 91. Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5. Você deverá criar adicionalmente dois vetores de 5 elementos:
// somaLinhas e somaColunas. Em cada posição do vetor somaLinhas deverá ser armazenada a soma da linha correspondente na matriz A. Da mesma forma,
// em cada posição do vetor somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A.
#define TAM 5
int main()
{
    int i, j;
    int matriz[TAM][TAM] = {{1, 2, 3, 4, 5}, //15
                            {2, 4, 6, 8, 10}, //30
                            {5, 4, 3, 3, 1}, //16
                            {10, 8, 6, 4, 2}, //30
                            {1, 3, 5, 7, 9}}; //25
                           //19 21  25 26 27
    int somarLinhas[TAM];
    int somarColunas[TAM];
    int posicao;
    
    for(i = 0; i < TAM; i++){
        somarLinhas[i] = 0;
        somarColunas[i] = 0;
    }
    
    for(i = 0; i < TAM ; i++){
        for(j = 0 ; j < TAM; j++){
            somarLinhas[i] += matriz[i][j]; //00 01 02 03 04
            somarColunas[i] += matriz[j][i]; //00 10 20 30 40
        }
    }

    for(i = 0; i < TAM; i++){
        printf("%d \t", somarLinhas[i]);
    }
    printf("\n");

    for(i = 0; i < TAM; i++){
        printf("%d \t", somarColunas[i]);
    }
}

// 93Ex. Faça um programa em C para ler valores e armazená-los em uma matriz D 3 x 3. A seguir o programa deverá calcular a multiplicação dos valores 
// que compõem a diagonal principal e a soma dos valores da diagonal secundária da matriz.
#define DIM 3
int main()
{
    int matriz[DIM][DIM] = {{3, 4, 5},
                            {1, 5, 2},
                            {5, 7, 10}};
    int i, j;
    int soma = 0;
    int multiplicacao = 1;
  
    // for(i = 0; i < DIM; i++){
    //     for(j = 0; j < DIM; j++){
    //         if(i == j) multiplicacao *= matriz[i][j];
    //     }
    // }
    //OU :
    for(i = 0; i < DIM; i++){
        multiplicacao *= matriz[i][i];
    }
   
    // for (i = 0; i < DIM; i++){
    //     for(j = 0; j < DIM; j++){
    //         if (i + j == DIM-1){
    //             soma += matriz[i][j];
    //         }
    //     }
    // }
    //OU
    for(i = 0; i < DIM; i++){
        soma += matriz[i][DIM - i - 1]; // 3-0-1 = 2 | 3-1-1 = 1 | 3-2-1 = 0
    }
   
    printf("Multiplicação : %d \n", multiplicacao); //150
    printf("Soma : %d ", soma); // 15
}

// 93. Faça um programa em C para ler valores e armazená-los em uma matriz D 5 x 5. A seguir o programa deverá calcular a soma dos valores que compõem 
// a diagonal principal e a diagonal secundária da matriz.
#define DIM 5
int main()
{
    int matriz[DIM][DIM] = {{3, 4, 5, 6, 8},
                            {1, 5, 2, 7, 9},
                            {1, 2, 1, 2, 1},
                            {6, 16, 9, 10, 4},
                            {5, 7, 10, 5, 5}};
    int i;
    int soma1 = 0; // 00 11 22 33 44
    int soma2 = 0; // 04 13 22 31 40
  
    for(i = 0; i < DIM; i++){
        soma1 += matriz[i][i];
    }
   
    for (i = 0; i < DIM; i++){
        soma2 += matriz[i][DIM - i - 1]; // 5 - 0 - 1 = 4 | 5 - 1 - 1 = 3 | 5 - 2 - 1 = 2 (...)
    }
   
    printf("Soma Principal : %d \n", soma1); //24
    printf("Soma Secundária: %d ", soma2); // 37
}

// 94. Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores inteiros 6 por 6 e um valor inteiro qualquer, posteriormente
// multiplicar a matriz pelo valor lido e colocar o resultado na própria matriz.
#define DIM 6
int main()
{
    int matriz[DIM][DIM] = {{3, 4, 5, 6, 8, 2},
                            {1, 5, 2, 7, 9, 6},
                            {1, 2, 1, 2, 1, 3},
                            {6, 16, 9, 5, 4, 9},
                            {0, 6, 9, 7, 8, 10},
                            {5, 7, 10, 5, 5, 8}};
    int i, j;
    int entrada;
    
    printf("Escreva o inteiro que será o multiplicador: ");
    scanf("%d", &entrada);
    
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            matriz[i][j] = matriz[i][j] * entrada;
        }
    }
    printf("\n********************************************************** \n \n");
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
}

// 95. Escrever um algoritmo e implementá-lo em linguagem C que linearize uma matriz de 6 por 6, colocando os valores contidos nela em um vetor 
// de 36 elementos e mostrar o conteúdo do vetor.
#define DIM 6
int main()
{
    int matriz[DIM][DIM] = {{3, 4, 5, 6, 8, 2}, //0   1   2   3   4   5
                            {1, 5, 2, 7, 9, 6}, //6   7   8   9  10   11
                            {1, 2, 1, 2, 1, 3}, //12  13 14  15  16  17
                            {6, 16, 9, 5, 4, 9},//18  19 20  21  22  23
                            {0, 6, 9, 7, 8, 10},//24  25 26  27  28  29
                            {5, 7, 10, 5, 5, 8}};//30 31 32  33  34  35 
    int array[DIM*DIM];
    int i, j;
    int contador = 0;
    
    // for(i = 0; i < DIM; i++){
    //     for(j = 0; j < DIM; j++, contador++){
    //         array[contador] = matriz[i][j];
    //     }
    // }
    // OU :
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            array[i * DIM + j] = matriz[i][j];
        }
    }
    for(i = 0; i < DIM*DIM; i++){ 
        printf("%d ", array[i]);
    }
}

// 96. Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes de valores inteiros 3 por 4 e crie uma terceira matriz,
// que seja a soma das duas primeiras, e uma quarta, que seja a diferença entre a primeira e a segunda. Mostrar as matrizes lidas e calculadas.
#define LIN 3
#define COL 4
int main()
{
    int matriz1[LIN][COL] = {{3, 4, 5, 8},
                            {1, 9, 2, 6},
                            {20, 9, 50, 18}};
                            
    int matriz2[LIN][COL] = {{3, 6, 14, 81},
                            {15, 0, 17, 86},
                            {14, 1, 30, 0}};
    int matriz3[LIN][COL];
    int matriz4[LIN][COL];
    int i, j, k;

    
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            matriz4[i][j] = matriz1[i][j] - matriz2[i][j];
        }
        printf("\n");
    }
    
    printf("\n Matriz 1 : \n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%d \t", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n Matriz 2 : \n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%d \t", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n Matriz 3 - SOMA : \n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%d \t", matriz3[i][j]);
        }
        printf("\n");
    }
    printf(" \n Matriz 4 - SUBTRACÃO : \n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%d \t", matriz4[i][j]);
        }
        printf("\n");
    }
}