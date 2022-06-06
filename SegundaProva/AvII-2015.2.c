/*********************** Questão 1 ***********************/
int main()
{
    int i;
    float chico = 1.50;
    float ze = 1.10;
    int anos;

    for(i = 0; ze <= chico ; i++){
        chico = chico + 0.02;
        ze = ze + 0.03;
    }
    printf("O tempo necessário é de : %d anos", i); // O tempo necesário é de 42 anos.
}
