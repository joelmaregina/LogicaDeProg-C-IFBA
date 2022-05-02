//Questão 1
int main()
{
    float salario;
    float desconto;
    
    printf("Digite o valor do salário: \n");
    scanf("%f", &salario);
    
    desconto = salario * 0.11;
    
    if (desconto > 570.88){
        printf("O seu desconto previdênciário é de: 570.88");
    } else{
        printf("O seu desconto previdênciário é de : %.2f", desconto);
    }
}

// Questão 2
int main()
{
    int dia, mes, ano, diaS, mesS, anoS;
    
    printf("Digite o dia, mês e ano \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    diaS = dia + 1;
    mesS = mes;
    anoS = ano;
    
    if(mes == 12){
        mesS = 1;
        anoS = ano + 1;
    }
    
    if (diaS == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
        diaS = 1;
        mesS = mes + 1;
    } else if (diaS == 32 && mes != 12){
        diaS = 1;
        mesS = mes + 1;
    } else if (diaS == 32 && mes == 12){
        diaS = 1;
        mesS = 1;
    } else if (diaS == 30 && mes == 2 && ((ano % 4 == 0)  && (ano % 100 != 0) || (ano % 400 == 0))){
        diaS = 1;
        mesS = mes + 1;
    } else if (diaS == 29  && mes == 2 && ((ano % 4 != 0) || (ano % 100 == 0) && (ano % 400 != 0))){
        diaS = 1;
        mesS = mes + 1;
    }

    printf("A próxima data é %d / %d / %d", diaS, mesS, anoS);

}

// Questão 3
int main()
{
    int classe;
    float comp, larg;
    float area;
    float numLamp;
    
    printf("Escreva a classe do cômodo : \n");
    scanf("%d", &classe);
    printf ("Escreva a largura e comprimento do cômodo : \n");
    scanf("%f %f", &comp, &larg);
    
    area = comp * larg;
    
    switch(classe){
        case 1: 
            numLamp = (area * 12)/60;
        break;
        case 2:
            numLamp = (area * 15)/60;
        break;
        case 3:
            numLamp = (area * 20)/60;
    }
    
    printf ("Serão necessárias no mínimo %.0f lâmpada(s)", numLamp);
}
