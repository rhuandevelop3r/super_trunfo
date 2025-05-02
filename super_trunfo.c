#include <stdio.h>


// Funcao principal
int main(){

    // Declaracao das variaveis da carta 1
    char letra_estado_01[2];
    char codigo_carta_01[4];
    char nome_cidade_01[50];
    int numero_habitantes_01;
    float pib_01;
    int quantidade_pontos_turisticos_01;


    // Declaracao da variaveis da carta 2
    char letra_estado_02[2];
    char codigo_carta_02[4];
    char nome_cidade_02[50];
    int numero_habitantes_02;
    float pib_02;
    int quantidade_pontos_turisticos_02;



    printf("\n\n--------------------- Digite as informacoes das cartas ---------------------\n");

    // Entrada de dados da carta 01
    printf("Carta 01\n");
    printf("Digite a letra do Estado: ");
    scanf("%s", &letra_estado_01);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo_carta_01);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade_01);

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%i", &numero_habitantes_01);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib_01);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%i", &quantidade_pontos_turisticos_01);

     // Entrada de dados da carta 02
    printf("\nCarta 02\n");
    printf("Digite a letra do Estado: ");
    scanf("%s", &letra_estado_02);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo_carta_02);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade_02);

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%i", &numero_habitantes_02);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib_02);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%i", &quantidade_pontos_turisticos_02);

    printf("\n\n--------------------- Exibindo informacoes das cartas ---------------------\n");

    // Exibicao das informacoes da carta 01
    printf("\nCarta 01\n");
    printf("Letra do Estado: %s\n", letra_estado_01);
    printf("Codigo da cidade: %s\n", codigo_carta_01);
    printf("Nome da cidade: %s\n", nome_cidade_01);
    printf("Populacao da cidade: %i\n", numero_habitantes_01);
    printf("PIB da cidade: %f\n", pib_01);
    printf("Numero de pontos turisticos da cidade: %i\n", quantidade_pontos_turisticos_01);

    // Exibicao das informacoes da carta 02
    printf("\nCarta 02\n");
    printf("Letra do estado: %s\n", letra_estado_02);
    printf("Codigo da cidade: %s\n", codigo_carta_02);
    printf("Nome da cidade: %s\n", nome_cidade_02);
    printf("Populacao da cidade: %i\n", numero_habitantes_02);
    printf("PIB da cidade: %f\n", pib_02);
    printf("Numero de pontos turisticos da cidade: %i\n", quantidade_pontos_turisticos_02);

    printf("\n\n----------------------------- FIM DO PROGRAMA -----------------------------\n");

    // Impede da tela fechar quando executa o "super_trunfo.exe";
    getchar();
    getchar();

    // Retorna 0(zero) caso o programa seja executado corretamente
    return 0;
}
