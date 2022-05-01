// Questão 1
int main(){
    int numTernario;
    int trit0, trit1, trit2, trit3;
    int base;
    int numDecimal = 0;
    
    printf("Informe um valor no sistema ternario balanceado :\n");
    scanf("%d", &numTernario);
    
    trit3 = numTernario / 1000;
    trit2 = (numTernario % 1000) / 100;
    trit1 = (numTernario % 100) / 10;
    trit0 = numTernario % 10;
    
    if(numTernario >999){
        base = 27;
        if(trit3 == 2)
            numDecimal += base;  // numDecimal = numDecimal + base;
        else if(trit3 == 0)
            numDecimal -= base; // numDecimal = numDecimal - base;
    }
    if (numTernario >99){
        base = 9;
        if(trit2 == 2)
            numDecimal += base;  
        else if(trit2 == 0)
            numDecimal -= base;
    }
    if (numTernario >9){
      base = 3;
      if(trit1 == 2)
        numDecimal += base;  
      else if(trit1 == 0)
        numDecimal -= base;
    }
    base = 1;
    if(trit0 == 2)
        numDecimal += base;  
    else if(trit0 == 0)
        numDecimal -= base;
    
    printf("O numero em decimal: %d\n", numDecimal);          
}

// Questão 2
int main()
{
    int numCartao, horas;
    int cartao1, cartao2, cartao3,cartao4;
    int horas1, horas2, horas3, horas4;
    int maior1, maior2, maior3, maior4;
    int menor1, menor2, menor3, menor4;
    int maior, menor;
    int subtracao;
    int sub1, sub2, sub3, sub4;
    int subtracaoInv;
    
    printf("Digite os 4 números do seu cartão : \n");
    scanf("%d", &numCartao);
    
    printf("Digite a hora atual : \n");
    scanf("%d", &horas);
    
    cartao1 = numCartao/1000;
    cartao2 = (numCartao%1000)/100;
    cartao3 = ((numCartao%1000)%100)/10;
    cartao4 = numCartao%10;
    
    horas1 = horas/1000;
    horas2 = (horas%1000)/100;
    horas3 = ((horas%1000)%100)/10;
    horas4 = horas%10;
    
    if (cartao1 > horas1){
        maior1 = cartao1;
        menor1 = horas1;
    } else {
        maior1 = horas1;
        menor1 = cartao1;
    }
    
    if (cartao2 > horas2){
        maior2 = cartao2;
        menor2 = horas2;
    } else {
        maior2 = horas2;
        menor2 = cartao2;
    }
    
    if (cartao3 > horas3){
        maior3 = cartao3;
        menor3 = horas3;
    } else {
        maior3 = horas3;
        menor3 = cartao3;
    }
    
    if (cartao4 > horas4){
        maior4 = cartao4;
        menor4 = horas4;
    } else {
        maior4 = horas4;
        menor4 = cartao4;
    }
    
    maior = (maior1*1000)+(maior2*100)+(maior3*10)+ maior4;
    menor = (menor1*1000)+(menor2*100)+(menor3*10)+ menor4;
    
    subtracao = maior - menor;
    
    sub1 = subtracao/1000;
    sub2 = (subtracao%1000)/100;
    sub3 = ((subtracao%1000)%100)/10;
    sub4 = subtracao%10;
    
    subtracaoInv = (sub4 * 1000) + (sub3 * 100) + (sub2 * 10) + sub1;
    
    printf("O código de confirmação é: %d", subtracaoInv);
}
