// Questão 1
int main()
{
    int decimal, binario;
    int novoDecimal;
    int bUni, bDez, bCem, bMil, bDezMi;
    int nbUni, nbDez, nbCem, nbMil, nbDezMi, nbCemMi;
    int contador = 0;
    
    printf("Digite um decimal de 0 a 31 : \n");
    scanf("%d", &decimal);
    
    bUni = decimal%2;
    bDez = (decimal/2)%2;
    bCem = ((decimal/2)/2)%2;
    bMil = (((decimal/2)/2)/2)%2;
    bDezMi = ((((decimal/2)/2)/2)/2)%2;
    
    if(bUni == 1) contador += 1;
    if(bDez == 1) contador += 1;
    if(bCem == 1) contador += 1;
    if(bMil == 1) contador += 1;
    if(bDezMi == 1) contador += 1;
    
    if (contador % 2 == 0){
        binario = (bUni * 10) + (bDez * 100) + (bCem * 1000) + (bMil * 10000) + (bDezMi * 100000);
        nbUni = binario%10;
        nbDez = ((((binario%100000)%10000)%1000)%100)/10;
        nbCem = (((binario%100000)%1000)%1000)/100;
        nbMil = ((binario%100000)%10000)/1000;
        nbDezMi = (binario%100000)/10000;
        nbCemMi = binario/100000;
        novoDecimal = (nbUni * 1) + (nbDez * 2) + (nbCem * 4) + (nbMil * 8) + (nbDezMi * 16) + (nbCemMi * 32);
        printf("O novo decimal de paridade 0 é %d", novoDecimal);
    } else {
        binario = (bUni * 10) + (bDez * 100) + (bCem * 1000) + (bMil * 10000) + (bDezMi * 100000) + 1;
        nbUni = binario%10;
        nbDez = ((((binario%100000)%10000)%1000)%100)/10;
        nbCem = (((binario%100000)%10000)%1000)/100;
        nbMil = ((binario%100000)%10000)/1000;
        nbDezMi = (binario%100000)/10000;
        nbCemMi = binario/100000;
        novoDecimal = (nbUni * 1) + (nbDez * 2) + (nbCem * 4) + (nbMil * 8) + (nbDezMi * 16) + (nbCemMi * 32);
        printf("O novo decimal de paridade 0 é %d", novoDecimal);
    }
}

// Questão 2