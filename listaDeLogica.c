#include <stdio.h>

// 01. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro:
int main()
{
    float base;
    float altura;
    float area;
    float perimetro;
    
    printf("Insira a base do seu retângulo:\n");
    scanf("%f", &base);
    printf("Insira a altura do seu retângulo:\n");
    scanf("%f", &altura);
    
    area = base * altura;
    perimetro = 2*(base + altura);
    
    printf("A área cauculada do retângulo é de %.2f\n", area);
    printf("O perimetro cauculado do retângulo é de %.2f\n", perimetro);
}

// 02. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.
int main()
{
    float lado;
    float area;
    float perimetro;
    
    printf("Insira o tamanho do lado do seu quadrado:\n");
    scanf("%f", &lado);
    
    area = lado * lado;
    perimetro = lado * 4;
    
    printf("A área cauculada do quadrado é de %.2f\n", area);
    printf("O perimetro cauculado do quadrado é de %.2f\n", perimetro);
}

// 03. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
int main()
{
    float raio;
    float area;
    const float PI = 3.1416;
    float perimetro;
    
    printf("Insira o tamanho do raio do seu circulo:\n");
    scanf("%f", &raio);
    
    area = PI*(raio*raio);
    perimetro = 2.0*PI*raio;
    
    printf("A área cauculada do circulo é de %.2f\n", area);
    printf("O perimetro cauculado do circulo é de %.2f\n", perimetro);
}

// 04. Dado os três lados de um triângulo determinar o perímetro do mesmo.
int main()
{
    float ladoA;
    float ladoB;
    float ladoC;
    float perimetro;
    
    printf("Insira o tamanho dos 3 lados do seu triângulo:\n");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
    
    perimetro = ladoA + ladoB + ladoC;

    printf("O perimetro cauculado do triângulo é de %.2f\n", perimetro);
}

// 05. Ler um número inteiro e exibir o seu sucessor.
int main()
{
    int numeroDigitado;
    int numeroSucessor;
    
    printf("Insira o número que você deseja conhecer o numero sucessor:\n");
    scanf("%i", &numeroDigitado);
    
    numeroSucessor = numeroDigitado + 1;

    printf("O número sucessor do número digitado é: %i\n", numeroSucessor);
}

// 06. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.
int main()
{
    int primeiroNumero;
    int segundoNumero;
    int quociente;
    int resto;
    
    printf("Insira os números que você deseja que sejam divididos :\n");
    scanf("%i %i", &primeiroNumero, &segundoNumero);
    
    quociente = primeiroNumero / segundoNumero;
    resto = primeiroNumero % segundoNumero;

    printf("O quociente da divisão dos dois numeros é de: %i\n", quociente);
    printf("O resto da divisão dos dois numeros é de: %i\n", resto);
}

// 07. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.
int main()
{
    int idade;
    int meses;
    int dias;
    
    printf("Insira sua idade :\n");
    scanf("%i", &idade);
    
    meses = idade*12;
    dias = idade*365;
    
    printf("Sua idade corresponde a %i anos, %i meses, %i dias\n" , idade, meses, dias);
}

// 08. Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius
int main()
{
    float grausFahrenheit;
    float grausCelcius;
    
    printf("Informe a temperatura em Fahrenheit :\n");
    scanf("%f", &grausFahrenheit);
    
    grausCelcius = (grausFahrenheit - 32)*5/9;
    //OU : grausCelcius = (5.0/9)*(grausFahrenheit - 32);
    
    printf("A temperatura digitada em Fahrenheit foi de: %.2f\n" , grausFahrenheit);
    printf("A temperatura transformada em Celcius é de: %.2f\n" , grausCelcius);
}

// 09. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura.
int main()
{
    float raio;
    float altura;
    const float PI = 3.1416;
    float volume;
    
    printf("Insira o tamanho do raio do seu cilindro:\n");
    scanf("%f", &raio);
    printf("Insira a altura do seu cilindro:\n");
    scanf("%f", &altura);
    
    volume = PI*(raio*raio)*altura;
    
    printf("O volume do seu cilindro é de: %.2f\n" , volume);
}

// 10. Converter um inteiro informado menor que 32 para sua representação em binário
int main()
{
   int inteiro;
   int binario;
   int bin1, bin2, bin3, bin4, bin5, bin6;
   int divisao = 0;
   
   printf("Digite o número inteiro que você quer transformar em binário: \n");
   scanf("%d", &inteiro);
   
   bin6 = inteiro%2;
   bin5 = (inteiro/2)%2;
   bin4 = ((inteiro/2)/2)%2;
   bin3 = (((inteiro/2)/2)/2)%2;
   bin2 = ((((inteiro/2)/2)/2)/2)%2;
   bin1 = (((((inteiro/2)/2)/2)/2)/2)%2;
   
   binario = bin1*100000 + bin2*10000 + bin3*1000 + bin4*100 + bin5*10 + bin6;
   
   printf("O numero digitado em binário é %d", binario);
}


// 11. Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas.
int main()
{
    float prova1, prova2, prova3, prova4;
    float primeiroBimestre, segundoBimestre;
    float semestre;
    
    printf("Digite as notas das sua 4 provas:\n");
    scanf("%f %f %f %f", &prova1, &prova2, &prova3, &prova4);
    
    primeiroBimestre = (prova1 + prova2)/2.0;
    segundoBimestre = (prova3 + prova4)/2.0;
    
    semestre = (primeiroBimestre + segundoBimestre)/2.0;
    
    printf("A média do semestre é %.2f", semestre);
}

// 12. Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6.
int main()
{
   float valorEmMetros;
   float valorEmKm ;

   printf("Digite a velocidade em m/s: \n");
   scanf("%f", &valorEmMetros);
   
  valorEmKm = valorEmMetros*3.6;
   
   printf("O numero digitado em Km/h é de:  %.2f km/h", valorEmKm);
}


// 13.Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em
// sequência de uma resistência R3. Faça um algoritmo para calcular a resistência
// equivalente desse circuito.
int main()
{
   float resistencia1, resistencia2, resistencia3;
   float resistenciaEquivalente ;

   printf("Digite os valores das resistências: \n");
   scanf("%f %f %f", &resistencia1, &resistencia2, &resistencia3);
   
  resistenciaEquivalente = ((resistencia1*resistencia2)/(resistencia1+resistencia2))+resistencia3;
   
   printf("A resistência equivalente deste circuito é de: %.2f", resistenciaEquivalente);
}

// 14. Questão do semáforo

// 15. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo que seja possível 
// medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e calcular a altura do prédio.
int main()
{
   float alturaPredio, minhaAltura;
   float sombraPredio, minhaSombra;

   printf("Digite o valor da sua altura: \n");
   scanf("%f" , &minhaAltura);
   
   printf("Digite o valor da sua sombra: \n");
   scanf("%f" , &minhaSombra);
   
   printf("Digite o valor da sombra do prédio: \n");
   scanf("%f" , &sombraPredio);
   
    alturaPredio = (sombraPredio/minhaSombra) * minhaAltura;
   
   printf("A altura do prédio é de: %.2f \n", alturaPredio);
   
}

// 16. Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894).
int main()
{
  int numeroNormal, numeroInvertido;
    int centena, dezena, unidade;

    printf("Digite o número que será invertido:\n");
    scanf("%i", &numeroNormal);
   
    centena = numeroNormal/100;
    dezena = (numeroNormal%100)/10;
    unidade = numeroNormal%10;
    numeroInvertido = unidade*100 + dezena*10 + centena;
   
    printf("O número %i invertido é: %i", numeroNormal, numeroInvertido);
}

// 17. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o 
// número de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível critério seria
// o da "distribuição ótima" no sentido de que as notas de menor valor fossem distribuídas em número mínimo possível. Por exemplo,
// se a quantia solicitada fosse R$ 87,00, o programa deveria indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de 
// R$ 5,00 e duas notas de R$ 1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das notas
// de acordo com o critério da distribuição ótima (considere existir notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).
int main()
{
    int valorSaque;
    int nota1 = 0;
    int nota2 = 0;
    int nota5 = 0;
    int nota10 = 0;
    int nota50 = 0;
    int nota100 = 0;
    int valorRestante = 0;
    
    printf("Digite o valor do saque: \n");
    scanf("%i" , &valorSaque);
    
    if (valorSaque >= 100){
        valorRestante = valorSaque - 100;
        if (valorRestante >= 0){
            
        }
        printf ("")
    }
}

// 18. Escreva um programa que permute o valor de duas variáveis inteiras.
int main()
{
   int var1, var2;

   printf("Digite o valor da variável 1: \n");
   scanf("%i" , &var1);
   
   printf("Digite o valor da variável 2: \n");
   scanf("%i" , &var2);
   
   var1 = var1 + var2;
   var2 = var1 - var2;
   var1 = var1 - var2;
   
   printf("O valor de var1 agora é: %i \n", var1);
   printf("O valor de var2 agora é: %i \n", var2);
   
}

// 19. Escreva um programa que calcule a raiz de uma equação do primeiro grau.


// 20. Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior do que ou igual às duas prestações, 
// as quais devem ser iguais, inteiras e as maiores possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas
// prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são a iguais 
// a R$ 100,00. Escreva um programa que receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de acordo com 
//as regras acima. Observe que uma justificativa para a adoção desta regra é que ela facilita a confecção e o consequente pagamento dos
// boletos das duas prestações.
int main()
{
    float valorCompra;
    float valorEntrada;
    float valorPrestacao;
    
    printf("Digite o valor da compra: \n");
    scanf("%f" , &valorCompra);
    
    valorPrestacao = valorCompra/3.0;
    valorEntrada = valorPrestacao + (valorCompra % 3.0);
    
    printf("O valor da entrada é de: %.2f e o valor das prestações é de: %2.f \n", valorEntrada, valorPrestacao);

}

// 21. Escreva um programa que leia um número e exiba se ele é positivo ou negativo.
int main()
{
    float valor;
    
    printf("Digite o numero que você quer avaliar se é positivo ou negativo\n");
    scanf("%f", &valor);
    
    if (valor > 0){
        printf("O valor digitado é positivo");
    } else if (valor <0){
        printf("O valor digitado é negativo");
    }
}

// 21ex. Escreva um programa que lê um numero em decimal (que funcione para numeros entre 0 e 512) e o transfome em octal
int main()
{
    int numeroDecimal;
    int unidade, dezena, centena;
    int numeroOctal;

    printf("Digite o número que será convertido:\n");
    scanf("%i", &numeroDecimal);
   
    unidade = numeroDecimal%8;
    dezena = (numeroDecimal/8)%8;
    centena = ((numeroDecimal/8)/8)%8;
   
    numeroOctal = unidade + dezena*10 + centena*100;
   
    printf("O número decimal %i convertido para octal é de: %i", numeroDecimal, numeroOctal);
}

// 22. Escreva um programa que leia um número e exiba o seu módulo.
int main()
{
    float valor, modulo;
    
    printf("Digite o numero que você quer colocar em módulo\n");
    scanf("%f", &valor);
    
    if (valor >= 0){
        modulo = valor;
    } else {
        modulo = (valor)*-1;
    }
    
    printf("O módulo é %.2f: ", modulo);
}

// 23. Escreva um programa que leia um número e imprima se este número é ou não par.
int main()
{
    int valor;
    
    printf("Digite o numero que você quer avaliar se é par ou impar\n");
    scanf("%d", &valor);
    
    if (valor % 2 == 0 ){
        printf("O valor digitado é par");
    } else{
        printf("O valor digitado é impar");
    }
}

//24. Escreva um programa que leia três números e mostre o maior entre eles.
int main()
{
    float valorA, valorB, valorC;
    
    printf("Digite 3 numeros para descobrir o maior dentre eles\n");
    scanf("%f %f %f", &valorA, &valorB, &valorC);
    
    if(valorA > valorB && valorA > valorC){
        printf ("O maior número é %.2f", valorA);
    } else if ( valorB > valorA && valorB > valorC){
        printf ("O maior número é %.2f", valorB);
    } else{
        printf ("O maior número é %.2f", valorC);
    }
}

// 25.Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês.
int main()
{
    int mes31 = 31;
    int mes30 = 30;
    int mes28 = 28;
    int numeroMes;
    
    printf("Digite o numero do mês que você quer descobrir a quantidade de dias:\n");
    scanf("%d", &numeroMes);
    
    if(numeroMes == 4 || numeroMes == 6 || numeroMes == 9 || numeroMes == 11 ){
        printf ("A quantidade de dias do mês é %d", mes30);
    } else if (numeroMes == 2){
        printf("A quantidade de dias do mês é %d", mes28);
    } else if (numeroMes > 12 || numeroMes <=0){
        printf("Número de mês inválido, digite um valor entre 1 e 12");
    } else{
        printf("A quantidade de dias do mês é %d", mes31);
    }
}

// 26. Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.
int main()
{
    float valorA, valorB, valorC;
    float soma;
    
    printf("Digite 3 numeros para descobrir a soma dos dois maiores\n");
    scanf("%f %f %f", &valorA, &valorB, &valorC);
    
    if(valorC < valorB && valorC < valorA){
        soma = valorA + valorB;
        printf ("A soma dos dois maiores é de %.2f", soma);
    } else if ( valorB < valorA && valorB < valorC){
        soma = valorA + valorC;
        printf ("A soma dos dois maiores é de %.2f", soma);
    } else{
        soma = valorB + valorC;
        printf ("A soma dos dois maiores é de %.2f", soma);
    }
}

// 27. Escreva um programa que leia 3 números e calcule a média ponderada entre eles.
// Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.
int main()
{
    float valorA, valorB, valorC;
    float mediaPonderada;
    
    printf("Digite 3 numeros para realizar a média ponderada\n");
    scanf("%f %f %f", &valorA, &valorB, &valorC);
    
    if(valorC > valorB && valorC > valorA){
        mediaPonderada = ((valorC*5.0) + (valorA*2.5) + (valorB*2.5))/10;
        printf ("A média ponderada é de %.2f:", mediaPonderada);
    } else if ( valorB > valorA && valorB > valorC){
        mediaPonderada = ((valorB*5.0) + (valorA*2.5) + (valorC*2.5))/10;
        printf ("A média ponderada é de %.2f:", mediaPonderada);
    } else{
        mediaPonderada = ((valorA*5.0) + (valorB*2.5) + (valorC*2.5))/10;
        printf ("A média ponderada é de %.2f:", mediaPonderada);
    }
}

// 28. Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante..
int main()
{
    char letra;

    printf("Digite a letra para saber de ela é vogal ou consoante\n");
    scanf("%c", &letra);
    
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf ("A letra digitada é uma vogal");
    } else{
        printf ("A letra digitada é uma consoante");
    }
}

// 29. Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de
// desconto é 334,29, o que seja menor
int main()
{
    float salario;
    float desconto;
    float descontoMaximo = 334.29;

    printf("Digite o salario a se cauculado o desconto previdenciário:\n");
    scanf("%f", &salario);
    
    desconto = salario*0.11;
    
    if(desconto >= descontoMaximo){
        printf ("O desconto é de %.2f", descontoMaximo);
    } else{
        printf ("O desconto é de %.2f", desconto);
    }
}

// 30. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
// ALCOOL: Até 25 litros, desconto de 2% por litro | Acima de 25 litros, desconto de 4% por litro
// GASOLINA: Até 25 litros, desconto de 3% por litro | Acima de 25 litros, desconto de 5% por litro
// Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
// (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
// pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro
// do álcool é R$ 1,90.

int main()
{
    float litros;
    char tipoCombustivel;
    float valorASerPago;
    float precoAlcool = 1.90;
    float precoGasolina = 2.70;

    printf("Digite quantos litros e o tipo de combustível (A/G): \n");
    scanf("%f %c", &litros, &tipoCombustivel);
    
    
    if(tipoCombustivel == 'A' && litros <= 25){
        valorASerPago = (litros * precoAlcool)*0.98;
        printf("O valor a ser pago é de: %.2f", valorASerPago);
    } else if (tipoCombustivel == 'A' && litros > 25){
        valorASerPago = (litros * precoAlcool)*0.96;
        printf("O valor a ser pago é de: %.2f", valorASerPago);
    } else if (tipoCombustivel == 'G' && litros <= 25){
        valorASerPago = (litros * precoGasolina)*0.97;
        printf("O valor a ser pago é de: %.2f", valorASerPago);
    } else if (tipoCombustivel == 'G' && litros > 25){
        valorASerPago = (litros * precoGasolina)*0.95;
        printf("O valor a ser pago é de: %.2f", valorASerPago);
    }   
}

// 35. Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, sendo domingo o dia de número 1. Se o número
//  não corresponder a um dia da semana, mostre uma mensagem de erro.
int main()
{
    int dia;
    
    printf("Digite numero indicando o dia da semana: \n");
    scanf("%i" , &dia);
    
    switch(dia){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terça-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sábado");
            break;
        default: 
            printf("Numero inválido, digite um valor de 1 a 7");
    }
}

// 38. Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366 dias, um dia a mais do que os anos normais de 365 dias, 
// ocorrendo a cada quatro anos. Escreva um programa que verifique se um ano é bissexto. Um ano é bissexto se ele é divisível por 4. Entretanto,
// se o ano é divisível por 100, ele não é bissexto. Mas, se ele for divisível por 400, ele volta a ser bissexto.
int main()
{
    int ano;
    
    printf("Digite o ano para saber se ele é bisexto ou não: \n");
    scanf("%i" , &ano);
    
    if ((ano % 4 == 0)  && (ano % 100) != 0 || (ano % 400 == 0)){
        printf ("O ano %i é um ano bisexto", ano);
    } else {
        printf ("O ano %i não é um ano bisexto", ano);
    }
}






