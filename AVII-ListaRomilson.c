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

// 2 - Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba o código e o valor de 
// quinze transações, calcule e mostre:
// a. O valor total das compras à vista;
// b. O valor total das compras a prazo;
// c. O valor total das compras efetuadas; e
// d. O valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.


// 3 - Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando idade igual a zero.


// 4 - Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A-azul; P- preto; V- verde; e C-castanho) e a cor dos cabelos 
// (P-preto; C-castanho; L-louro; e R-ruivo) de seis pessoas, e que calcule e mostre:
// a. A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
// b. A médias das idades das pessoas com altura inferior a 1,50 m;
// c. A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
// d. A quantidade de pessoas ruivas e que não possuem olhos azuis.


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
