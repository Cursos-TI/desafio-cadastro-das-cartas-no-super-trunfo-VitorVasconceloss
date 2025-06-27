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
    unsigned long int populacao;
    float area;
    float pib;
    int turismo;
    float densidadepou;
    float pibpercapita;
    float superpoder;
    float inverso_densidade; // variavel criada para armazenar o inverso da densidade (poder do jogo) 
    /* 
    Ex:
    Inicial do estado: A
    Cidigo da carta: A01
    Cidade: Manaus
    População: 2434640 Milhões
    Área: 11401.09 km²
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
    scanf("%lu", &populacao);
    
    printf("Digite Área:");
    scanf("%f", &area);
    
    printf("Digite PIB:");
    scanf("%f", &pib);
    
    printf("Digite n° de pontos turisticos:");
    scanf("%d", &turismo);

    // Cálculos para Carta 01
    
    densidadepou = (float) populacao / area; // Densidade populacional (pessoas/km²)
    pibpercapita = (pib * 1000000000.0) / populacao; // A multiplicação em 1000000000.0 faz a conversão do PIB abreviado digitado pelo usuario para bilhões.
 

    inverso_densidade = (float) 1 / densidadepou; // Operação para descubrir o inverso da densidade populacional ( quanto menos a densidade maior o poder)
    superpoder = (float) area + pib + turismo + pibpercapita + inverso_densidade; // soma dos atrinutos

    // Impressão carta 01

   
    printf("\n");
    printf("Carta 01:\n");
    printf("Estado:%c\n", estado);
    printf("Codigo da carta:%s\n", codigodacarta);
    printf("Cidade:%s\n", cidade);
    printf("População:%lu Milhões\n", populacao);
    printf("Área:%.3f km²\n", area);
    printf("PIB do estado:%.3f Bilhões de reias\n", pib);
    printf("Pontos turístico:%d\n", turismo);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadepou);
    printf("PIB per Capita: R$ %.2f Reais\n", pibpercapita);
    printf("Super Poder: %.2f\n", superpoder);
    printf("\n");

    

    // Carta 02

    // Variáveis carta 02


    char estado2;
    char codigodacarta2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidadepou2;
    float pibpercapita2;
    float superpoder2;
    float inverso_densidade2;


    /*
    ex:
    Estado:B
    Codigo:B02
    Cidade:Bahia
    População:14850513 Milhões
    Área:564760.42 km²
    Pib:352.618 bilhões
    Pontos turisticos:13
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
    scanf("%lu", &populacao2);
    
    printf("Digite Área:");
    scanf("%f", &area2);
    
    printf("Digite PIB:");
    scanf("%f", &pib2);
    
    printf("Digite n° de pontos turisticos:");
    scanf("%d", &turismo2);
    
    
    // Cálculos para Carta 02

    densidadepou2 = (float) populacao2 / area2; // Densidade populacional (pessoas/km²)
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2; // A multiplicação em 1000000000.0 faz a conversão do PIB abreviado digitado pelo usuario para bilhões.
 
    inverso_densidade2 = (float) 1 / densidadepou; // Operação para descubrir o inverso da densidade populacional ( quanto menos a densidade maior o poder)
    superpoder2 = (float) area2 + pib2 + turismo2 + pibpercapita2 + inverso_densidade2; // soma dos atrinutos


   // Impressão carta 02

    printf("\n");
    printf("Carta 02:\n");
    printf("Estado:%c\n", estado2);
    printf("Codigo da carta:%s\n", codigodacarta2);
    printf("Cidade:%s\n", cidade2);
    printf("População:%lu Milhões\n", populacao2);
    printf("Área:%.3f km²\n", area2);
    printf("PIB do estado:%.3f Bilhões de reias\n", pib2);
    printf("Pontos turístico:%d\n", turismo2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadepou2);
    printf("PIB per Capita: R$ %.2f Reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");



    // Comparações de atributos entre Carta 01 e Carta 02.


    unsigned long int compa_populacao; 
    int compa_area;
    int compa_pib;
    int compa_turismo;
    int compa_densidade_inversa; // Nesse trecho usaremos a densiadade inversa para comparar as cartas. A carta com menor valor vence.
    int compa_pib_per_capita;
    int compa_super_poder;

    compa_populacao = populacao > populacao2;
    compa_area = area > area2;
    compa_pib = pib > pib2;
    compa_turismo = turismo > turismo2;
    compa_densidade_inversa = inverso_densidade < inverso_densidade2;
    compa_pib_per_capita = pibpercapita > pibpercapita2;
    compa_super_poder = superpoder > superpoder2;







    // Quando resultado for (1) Carta 01 é a vencedora, resultado (0) vencedora Carta 02.
    printf("Resultado (1) = Carta 01 vencedor\n");
    printf("Resultado (0) = carta 02 vencedor\n");
    printf("\n");




    printf("--- QUE VENÇA O MELHOR---\n");
    printf("\n");
    printf("--Comparando as Cartas--\n");
    printf("\n");
    printf("População: %d Vencedor\n", compa_populacao);
    printf("Área: %d Vencedor\n", compa_area);
    printf("PIB: %d Vencedor\n", compa_pib);
    printf("Pontos Turísticos: %d Vencedor\n", compa_turismo);
    printf("Densidade Populacional: %d Vencedor\n", compa_densidade_inversa);
    printf("PIB per Capita: %d Vencedor\n", compa_pib_per_capita);
     printf("Super Poder: %d Vencedor\n", compa_super_poder);


    








    return 0;
}