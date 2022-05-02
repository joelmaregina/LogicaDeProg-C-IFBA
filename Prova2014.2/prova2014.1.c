// Questão 1

// Questão 2
int main()
{
    float graus, minutos, segundos;
    float grausDecimais;
    
    printf("Digite os graus, minutos e segundos \n");
    scanf("%f %f %f", &graus, &minutos, &segundos);
    
    grausDecimais = (graus) + (minutos/60) + ((segundos/60)/60);
    
    printf("Estes valores representam %f graus decimais", grausDecimais);
    
}

// Questão 3
int main()
{
    int ladoA, ladoB, ladoC;
    
    
    printf("Digite os lados do triângulo : \n");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);
    
    if ((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoC + ladoB > ladoA)){
        printf("Os 3 lados podem formar um triângulo!");
    } else {
        printf("Os 3 lados NÃO podem formar um triângulo!");
    }
}

// Questão 4
