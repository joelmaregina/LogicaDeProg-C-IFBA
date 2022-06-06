/*********************** Questão 1 ***********************/
int main()
{
    int i;
    int somaDivi = 0;
    int numAbund = 0;
    int k;
    int num = 1;
    
    printf("Digite a quantidade de números abundantes que você quer que sejam gerados: ");
    scanf("%d", &k);

    printf("Estes são os primeiros %d numeros abundantes são: ", k); 
    while(numAbund < k){
        for(i = 1, somaDivi = 0; i <= num ; i++){
            if(num%i == 0){
                somaDivi = somaDivi + i;
            }
        }
        if(somaDivi > num *2){
            printf("%d ", num);
            numAbund++;
        }
        num++;
    }
}