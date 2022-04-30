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
