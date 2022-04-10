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
    float valorEmKilometros;
    
    printf("Digite a velocidade em m/s que você quer transformar em Km/h\n");
    scanf("%f", &valorEmMetros);
    
    valorEmKilometros = valorEmMetros * 3.6;
    
    printf("A velocidade transformada em Km/h é de: %.2f\n", valorEmKilometros);
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

// 21. Escreva um programa que lê um numero em decimal (que funcione para numeros entre 0 e 512) e o transfome em octal
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

// 22. Escreva um programa que leia um número e exiba se ele é positivo ou negativo.
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

// 24. Escreva um programa que leia um número e imprima se este número é ou não par.
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



