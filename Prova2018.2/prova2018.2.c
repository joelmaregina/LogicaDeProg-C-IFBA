// Questão 1
int main()
{
    int inteiro;
    int binario;
    int uni, dez, cem, mil, dezMi, cemMi;
    int contador = 0;
    
    printf ("Digite o número em decimal: \n");
    scanf("%d", &inteiro);
    
    uni = inteiro%2;
    dez = (inteiro/2)%2;
    cem = ((inteiro/2)/2)%2;
    mil = (((inteiro/2)/2)/2)%2;
    dezMi = ((((inteiro/2)/2)/2)/2)%2;
    cemMi = (((((inteiro/2)/2)/2)/2)/2)%2;
    
    if(uni == 1){
        contador += 1;
    }
    if(dez == 1){
        contador += 1;
    }
    if(cem == 1){
        contador += 1;
    }
    if(mil == 1){
        contador += 1;
    }
    if(dezMi == 1){
        contador += 1;
    }
    if(cemMi == 1){
        contador += 1;
    }
    
    printf("%d", contador);
}

// Questão 2
int main()
{
    int base10;
    int setMil, setCem, setDez, setUni;
    int dezCem, dezDez, dezUni;
    int soma7, resto7;
    int digVef;
    
    printf("Digite o número na base10 : \n");
    scanf("%d", &base10 );

    setUni = base10%7;
    setDez = (base10/7)%7;
    setCem = ((base10/7)/7)%7;
    setMil = ((base10/7)/7)/7;

    soma7 = setUni + setDez + setCem + setMil;

    resto7 = soma7 % 7;

    dezCem = base10/100;
    dezDez = (base10%100)/10;
    dezUni = base10%10;
    
    if(base10 >= 100){
        digVef = (dezCem*1000) + (dezDez*100) + (dezUni*10) + resto7;
    } else if (base10 >= 10){
        digVef = (dezDez*100) + (dezUni + 10) + resto7;
    } else{
        digVef = (dezUni * 10) + resto7;
    }
    
    printf("O número do digito verificador é de: %d", digVef);
}