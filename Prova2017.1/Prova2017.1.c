// Questão 1
int main()
{
    int portaP, portaQ, portaR;

    printf("Digite a posição das portas P, Q e R respectivamente: \n");
    scanf("%d %d %d", &portaP, &portaQ, &portaR);
    
    
    if(portaQ == 0 && portaR == 1){
        printf("A bolinha cairá pelo caminho C");
    } else if (portaQ == 0 && portaR == 0){
        printf("A bolinha cairá pelo caminho D");
    } else if (portaQ == 1 && portaP == 1){
        printf("A bolinha cairá pelo caminho A");
    } else if (portaQ == 1 && portaP == 0){
        printf("A bolinha cairá pelo caminho B");
    }
}

// Questão 2
int main()
{
    float valorAposta;
    int numAposta, numSorteio;
    float premio;
    int uniA, dezA, cemA, milA;
    int uniB, dezB, cemB, milB;

    printf("Digite o valor da sua aposta :\n");
    scanf("%f", &valorAposta);

    printf("Digite o seu número apostado :\n");
    scanf("%d", &numAposta);

    printf("Digite o seu número sorteado:\n");
    scanf("%d", &numSorteio);

    uniA = numAposta%10;
    dezA = (((numAposta%10000)%1000)%100)/10;
    cemA = ((numAposta%10000)%1000)/100;
    milA = (numAposta%10000)/1000;
    
    uniB = numSorteio%10;
    dezB = (((numSorteio%10000)%1000)%100)/10;
    cemB = ((numSorteio%10000)%1000)/100;
    milB = (numSorteio%10000)/1000;
    
    if(uniA == uniB && dezA == dezB && cemA == cemB && milA == milB){
        premio = valorAposta * 3000;
        printf("Parabéns, você ganhou! Seu prêmio será de: %.2f", premio);
    } else if (uniA == uniB && dezA == dezB && cemA == cemB){
        premio = valorAposta * 500;
        printf("Parabéns, você ganhou! Seu prêmio será de: %.2f", premio);
    } else if (uniA == uniB && dezA == dezB){
        premio = valorAposta * 50;
        printf("Parabéns, você ganhou! Seu prêmio será de: %.2f", premio);
    } else if (dezA <= (dezB + 3)){
        premio = valorAposta * 16;
        printf("Parabéns, você ganhou! Seu prêmio será de: %.2f", premio);
    } else {
        printf("Infelizmente você não ganhou, tente numa próxima vez!");
    }
}

// Questão 3
int main()
{
    float peso1, peso2;
    float comprimento1, comprimento2;

    
    printf("Digite os pesos das crianças: \n");
    scanf("%f %f", &peso1, &peso2);
    
    printf("Digite os comprimento de cada lado da gangorra: \n");
    scanf("%f %f", &comprimento1, &comprimento2);
    
    if((peso1 * comprimento1) == (peso2 * comprimento2)){
        printf("A gangorra ficará equilibrada");
    } else if ((peso1 * comprimento1) > (peso2 * comprimento2)){
        printf("A gangorra ficará deseequilibrada e com o peso pendente para a 1º pessoa");
    } else if ((peso1 * comprimento1) < (peso2 * comprimento2)){
        printf("A gangorra ficará deseequilibrada e com o peso pendente para a 2º pessoa");
    };
}