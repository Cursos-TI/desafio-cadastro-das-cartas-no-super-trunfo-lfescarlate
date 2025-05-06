#include <stdio.h>
#include <string.h>                                    // Necessário para usar o fgets (para ler strings com espaços)

int main()
{
    // Definir as variáveis
    char estado1 , estado2;
    char codigoCarta1[50] = {'\0'};                    // {'\0'} serve para inicializar a string com um valor nulo (Quando estiver retornando 0 no valor)
    char codigoCarta2[50] = {'\0'};                    // {'\0'} serve para inicializar a string com um valor nulo (Quando estiver retornando 0 no valor)
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numPontosTuristicos1, numPontosTuristicos2;

    printf("Carta 1\n");
    printf("Estado: %c", estado1);
    scanf(" %c", &estado1);                           // O espaço antes do %c é para ignorar o caractere de nova linha que pode ter sido deixado no buffer de entrada

    printf("Código da carta: %s", codigoCarta1);
    scanf(" %s", codigoCarta1); 

    printf("Nome da cidade: %s", nomeCidade1);        // scanf(" %s", nomeCidade); Não funciona corretamente para nomes com espaços
    getchar();                                        // Solução para limpar o buffer de entrada para evitar problemas com fgets
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);   // Usar o fgets para conseguir ler o nome da cidade corretamente, incluindo espaços

    printf("População: ");                            // Sem usar a variavel populacao(1,2), pois retornava um valor inicial "0"
    scanf("%d", &populacao1);

    printf("Área (em km²): ");                         // Sem usar a variavel area(1,2), pois retornava um valor inicial "0"
    scanf("%f", &area1);

    printf("PIB (em bilhões de R$): ");                // Sem usar a variavel pib(1,2), pois retornava um valor inicial "0"
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos1);

    printf("\n\n");                                   // Comando para pular linha com o intuito de separar as cartas

    printf("Carta 2\n");
    printf("Estado: %c", estado2);
    scanf(" %c", &estado2);                           

    printf("Código da carta: %s", codigoCarta2);
    scanf(" %s", codigoCarta2); 

    printf("Nome da cidade: %s", nomeCidade2);        
    getchar();                                        
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);   

    printf("População: ");                            
    scanf("%d", &populacao2);

    printf("Área (em km²): ");                         
    scanf("%f", &area2);

    printf("PIB (em bilhões de R$): ");                
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    return 0;
}