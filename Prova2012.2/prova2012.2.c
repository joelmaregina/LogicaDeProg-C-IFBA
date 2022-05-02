// Questão 1
int main()
{
    int octal, decimal;
    int octal1, octal2, octal3;
    
    printf("Escreva o valor em Octal: \n");
    scanf("%d", &octal);
    
    octal1 = octal/100;
    octal2 = (octal%100)/10;
    octal3 = octal%10;
    
    decimal = (octal1 * 64) + (octal2 * 8) + (octal3 * 1);
    
    printf("O octal transformado em decimal é: %d", decimal);
}

// Questão 2
int main()
{
    int horarioEntrada, horarioSaida;
    int horaInicial, horaFinal, duracaoH, duracaoM;
    int difMinutos;
    int entMinutos, saidMinutos;
    int ini1, ini2, iniM, fim1,fim2, fimM;
    
    printf("Digite o horário inicial e final :\n");
    scanf("%d %d", &horarioEntrada, &horarioSaida);
    
    ini1 = horarioEntrada/1000;
    ini2 = (horarioEntrada%1000)/100;
    iniM = horarioEntrada %100;
    fim1 = horarioSaida/1000;
    fim2 = (horarioSaida%1000)/100;
    fimM = horarioSaida%100;
    
    horaInicial = ((ini1*10) + ini2) *60;
    horaFinal = ((fim1*10) + fim2) *60;
    
    entMinutos = horaInicial + iniM;
    saidMinutos = horaFinal + fimM;
    
    difMinutos = saidMinutos - entMinutos;
    
    duracaoH = difMinutos/60;
    duracaoM = difMinutos%60;
    
    printf ("A duração da aula é de: %d:%d", duracaoH, duracaoM);
}

// Questão 3
int main()
{
    float notaUm, notaDois, notaTres;
    float media, mediaFinal;
    
    printf("Escreva as notas das três avaliações: \n");
    scanf("%f %f %f", &notaUm, &notaDois, &notaTres);
    
    media = (notaUm + notaDois + notaTres)/3;
    
    if(media >7){
        printf("O aluno foi aprovado!");
    } else {
        mediaFinal = ((media*2.0) + 5) / 3;
        printf("O aluno foi reprovado! Precisa tirar pelo menos %.2f na média final para aprovação", mediaFinal );
    }
}

// Questão 4
int main()
{
    int dia, mes;
    int dia1, dia2;
    
    printf("Digite o dia e o mês \n");
    scanf("%d %d", &dia, &mes);
    
    dia1 = dia/10;
    dia2 = dia%10;
    
    switch(dia1){
        case 1:
            if (dia2 == 0) printf ("Dez");
            else if (dia2 == 1) printf ("onze");
            else if (dia2 == 2) printf("Doze");
            else if (dia2 == 3) printf("Treze");
            else if (dia2 == 4) printf("Quatorze");
            else if (dia2 == 5) printf("Quinze");
            else if (dia2 == 6) printf("Dezeseis");
            else if (dia2 == 7) printf("Dezessete");
            else if (dia2 == 8) printf("Dezoito");
        break;
        case 2: printf("Vinte"); break;
        case 3: printf("Trinta"); break;
        case 4: printf("Quarenta"); break;
        case 5: printf("Cinquenta"); break;
        case 6: printf("Sessenta"); break;
        case 7: printf("Setenta"); break;
        case 8: printf("Oitenta"); break;
        case 9: printf("Noventa"); break;
    }
    
    if(dia1 == 0 || dia1 != 1){
        if (dia1 > 1){
            printf(" e ");
        }
      switch(dia2){
            case 1: 
                if(dia1 > 1){
                    printf("Um");
                }else {
                    printf("Primeiro");
                }
            break;
            case 2:  printf ("Dois"); break;
            case 3: printf ("Três"); break;
            case 4: printf ("Quatro"); break;
            case 5: printf ("Cinco"); break; 
            case 6: printf ("Seis"); break;
            case 7: printf ("Sete"); break;
            case 8: printf ("Oito"); break;
            case 9: printf ("Nove"); break;
      }  
    }
    
    printf(" de ");
    
    switch(mes){
        case 1 : printf("Janeiro"); break;
        case 2 : printf("Fevereiro"); break;
        case 3 : printf("Março"); break;
        case 4 : printf("Abril"); break;
        case 5 : printf("Maio"); break;
        case 6 : printf("Junho"); break;
        case 7 : printf("Julho"); break;
        case 8 : printf("Agosto"); break;
        case 9 : printf("Setembro"); break;
        case 10 : printf("Outubro"); break;
        case 11 : printf("Novembro"); break;
        case 12 : printf("Dezembro"); break;
    }
}