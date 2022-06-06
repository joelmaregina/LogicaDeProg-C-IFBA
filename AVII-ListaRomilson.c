// 1 - Faça um programa que apresente o menu de opções a seguir:
// Menu de opções:
// 1. Média aritmética
// 2. Média ponderada
// 3. Sair
// Digite a opção desejada. Na opção 1: receber duas notas, calcular e mostrar a  média aritmética.
// Na opção 2: receber três notas e seus respectivos pesos,  calcular e mostrar a média ponderada.
// Na opção 3: sair do programa.
int main()
{
    int i;
    int opcao;
    float nota;
    float notaPond = 0;
    float notaFinal = 0;
    int somaPesos = 0;
    int peso;
    float media = 0;
    
    do{
        printf("Escolha o que gostaria de caucular: \n");
        printf("[1] Caucular média aritimética \n");
        printf("[2] Caucular média ponderada \n");
        scanf("%d", &opcao);
        
        if(opcao == 1){
            for(i = 1; i <= 2; i++){
                printf("Digite a sua nota: ");
                scanf("%f", &nota);
                media = (media + nota)/i;
            }
            printf("Sua média é de: %.2f \n", media);
        } else if (opcao == 2){
            for(i = 1; i <= 3; i++){
                printf("Digite a sua nota: ");
                scanf("%f", &nota);
                printf("Digite o peso da nota: ");
                scanf("%d", &peso);
                notaPond = nota * peso;
                notaFinal = notaFinal + notaPond;
                somaPesos = somaPesos + peso;
            } 
            media = notaFinal/ somaPesos;
            printf("A sua média ponderada é de: %.2f ", media);
        }
        
    }while(opcao != 3);
}

// 2 - Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa qu
// a. O valor total das compras à vista;e receba o código e o valor de 
// quinze transações, calcule e mostre:
// b. O valor total das compras a prazo;
// c. O valor total das compras efetuadas; e
// d. O valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.


// 3 - Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas.
// Finalize digitando idade igual a zero.
int main()
{
    int i;
    int opcao;
    int idade;
    int cont = 0;
    float somaIdades = 0;
    float mediaIdades;
    
    do{
        printf("Digite a idade da pessoa %d: ", cont+1);
        scanf("%d", &idade);
        cont ++;
        somaIdades = somaIdades + idade;
        mediaIdades = somaIdades / cont;
        printf("A média da(s) %d idade(s) digitada(s) é igual a: %.3f \n", cont, mediaIdades);
    } while (idade != 0);
}



// 4 - Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A-azul; P- preto; V- verde; e C-castanho) e a cor dos cabelos 
// (P-preto; C-castanho; L-louro; e R-ruivo) de seis pessoas, e que calcule e mostre:
// a. A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
// b. A médias das idades das pessoas com altura inferior a 1,50 m;
// c. A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
// d. A quantidade de pessoas ruivas e que não possuem olhos azuis.
#define TAM 6
int main()
{
    int i, j;
    int idade;
    float peso, altura;
    char corOlho;
    char corCabelo;
    int idades[TAM];
    float pesos[TAM], alturas[TAM];
    char coresOlhos[TAM], coresCabelos[TAM];
    int contA = 0;
    int contB = 0;
    float mediaIdade = 0;
    float olhosAzuis = 0;
    float porcentagem;
    int ruivNaoAzul = 0;

    for(i = 0; i < TAM; i++){
        printf("Digite os dados da %d pessoa \n", i+1);
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite seu peso: ");
        scanf("%f", &peso);
        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        printf("Digite a cor dos seus olhos: ");
        scanf(" %c", &corOlho);
        printf("Digite a cor do seu cabelo: ");
        scanf(" %c", &corCabelo);
        printf("\n");
        for(j = i; j < TAM; j++){
            idades[i] = idade;
            pesos[i] = peso;
            alturas[i] = altura;
            coresOlhos[i] = corOlho;
            coresCabelos[i] = corCabelo;
        }
    }
    for(i = 0; i < TAM; i++){
        //A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
        if(idades[i] > 50 && pesos[i] < 60){
            contA++;
        }
        //A médias das idades das pessoas com altura inferior a 1,50 m;
        if(alturas[i] < 1.50){
            mediaIdade = mediaIdade + idades[i];
            contB++;
        }
        //A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
        if(coresOlhos[i] == 'a'){
            olhosAzuis++;
            porcentagem = (olhosAzuis*100)/TAM;
        }
        //A quantidade de pessoas ruivas e que não possuem olhos azuis.
        if(coresCabelos[i] == 'r' && coresOlhos[i] != 'a'){
            ruivNaoAzul++;
        }
    }
    mediaIdade = mediaIdade/contB;
    // entradas testadas: 
    // idades: (  53 |  64  |  79  |  16  |   33  | 30   )
    // pesos:  (48.5 |  58  |  59  |  65  |  70.2 | 54.1 )
    // altura: (1.48 | 1.35 | 1.49 | 1.65 | 1.78  | 1.65 )
    // olhos:  (  a  |   a  |   p  |   p  |   v   |   c  )
    // cabelos (  r  |   r  |   r  |   p  |   l   |   c  )
    printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d \n", contA); //saída = 3
    printf("A médias das idades das pessoas com altura inferior a 1,50 é igual a: %f \n", mediaIdade); // saída = 65,33...
    printf("A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas é igual a: %f \n", porcentagem); //saída = 33.33...
    printf("A quantidade de pessoas ruivas e que não possuem olhos azuis é igual a: %d \n", ruivNaoAzul); //saída = 1
}

// 5 - Fazer um programa que calcule e escreva a seguinte soma:
//  (2^1/50) + (2^2/49) + (2^3/48) ... (2^50/1)
int main()
{
    int i, j, k;
    long int potencia = 2;
    int expoente = 2;
    int soma = 0;
    
    for(i = 1, j = 50 ; i <= 50; i++, j--){
        for (k = i ; k <= i ; k++){
           potencia = potencia * expoente;
           printf("A potencia cauculada é de : %ld \n", potencia);
        }
        soma += potencia/j;
    }
    printf("A soma dos elementos é igual a: %d", soma);
}
