#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    
    // Carta 1

    // Variáveis carta 01


    char estado;
    char codigodacarta[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turismo;
    
    /* 
    Ex:
    Inicial do estado: A
    Cidigo da carta: A01
    Cidade: Manaus
    População: 2434640
    Área: 11.401 km²
    PIB: 103,2 bilhões
    Pontos turístico:15 
    */


    // Captura de dados do usuário Carta 01

    printf("Insira os dados da carta 1:\n");

    printf("Inicial do Estado (A-H):");
    scanf(" %c", &estado);
    
    printf("Digite o Codigo:");
    scanf("%s", codigodacarta);
    
    printf("Digite a Cidade:");
    scanf("%s", cidade);
    
    printf("Digite a População:");
    scanf("%d", &populacao);
    
    printf("Digite Área:");
    scanf("%f", &area);
    
    printf("Digite PIB:");
    scanf("%f", &pib);
    
    printf("Digite n° de pontos turisticos:");
    scanf("%d", &turismo);

    
 
    // Impressão carta 01

   
    printf("\n");
    printf("Carta1:\n");
    printf("Estado:%c\n", estado);
    printf("Codigo da carta:%s\n", codigodacarta);
    printf("Cidade:%s\n", cidade);
    printf("População:%d Milhões\n", populacao);
    printf("Área:%.3f km²\n", area);
    printf("PIB do estado:%.3f Bilhões de reias\n", pib);
    printf("Pontos turístico:%d\n", turismo);



    // Carta 02

    // Variáveis carta 02


    char estado2;
    char codigodacarta2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    /*
    ex:
    Estado:B
    Codigo:B02
    Cidade:Salvador
    População:2418005 Milhões 
    Área:692.818 km²
    Pib:62.954 bilhões
    Pontos turisticos:20
    */


    // Captura de dados do usuario Carta 02.

    printf("\n");
    printf("Insira os dados da carta 2:\n");

    printf("Inicial do Estado(A-H):");
    scanf(" %c", &estado2);
    
    printf("Digite o Codigo:");
    scanf("%s", codigodacarta2);
    
    printf("Digite a Cidade:");
    scanf("%s", cidade2);
    
    printf("Digite a População:");
    scanf("%d", &populacao2);
    
    printf("Digite Área:");
    scanf("%f", &area2);
    
    printf("Digite PIB:");
    scanf("%f", &pib2);
    
    printf("Digite n° de pontos turisticos:");
    scanf("%d", &turismo2);


   // Impressão carta 02

    printf("\n");
    printf("Carta2:\n");
    printf("Estado:%c\n", estado2);
    printf("Codigo da carta:%s\n", codigodacarta2);
    printf("Cidade:%s\n", cidade2);
    printf("População:%d Milhões\n", populacao2);
    printf("Área:%.3f km²\n", area2);
    printf("PIB do estado:%.3f Milhões de reias\n", pib2);
    printf("Pontos turístico:%d\n", turismo2);




    return 0;
}
