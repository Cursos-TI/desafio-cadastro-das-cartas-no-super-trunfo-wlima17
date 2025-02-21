#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //Bloco de variáveis dos atributos das cartas

    //Variáveis da carta 1
    char estado_c1[10], codigo_da_carta_c1[5], nome_cidade_c1[30];
    float populacao_c1, area_c1, pib_c1;
    int pontos_turisticos_c1;
    float densidade_populacao_c1;
    float pib_percapita_c1;
    float super_poder_c1; // soma de todos atributos numéricos.

    //Variáveis da carta 2
    char estado_c2[10], codigo_da_carta_c2[5], nome_cidade_c2[30];
    float populacao_c2, area_c2, pib_c2;
    int pontos_turisticos_c2;
    float densidade_populacao_c2;
    float pib_percapita_c2;
    float super_poder_c2; // soma de todos atributos numéricos.

    // Cadastro das Cartas:
  
    //Função printf utilizada sempre antes da captura de cada dado, para orientar usuário de como proceder.
    //Função scanf realiza a captura dos dados que usuário imputou e guarda na variável.

    //Captura de dados da carta 1
    printf("** Cadastro dos dados da carta 1 **\n");
    printf("Digite o Estado: \n"); 
    scanf("%s", &estado_c1);
    printf("Lembrete: o código da carta de ser a inicial do Estado mais o número da carta, ex:B01\n");
    printf("Digite o código da carta: \n"); 
    scanf("%s", &codigo_da_carta_c1);
    printf("Digite o nome da cidade: \n"); 
    scanf("%s", &nome_cidade_c1);
    printf("Digite a populção dessa cidade: \n"); 
    scanf("%f", &populacao_c1);
    printf("Digite a área dessa cidade: \n"); 
    scanf("%f", &area_c1);
    densidade_populacao_c1 = populacao_c1 / area_c1;
    printf("Digite o PIB dessa cidade: \n"); 
    scanf("%f", &pib_c1);
    pib_percapita_c1 = pib_c1 / populacao_c1;
    printf("Quantos pontos turísticos essa cidade possui: \n"); 
    scanf("%d", &pontos_turisticos_c1);
    super_poder_c1 = populacao_c1 + area_c1 + pib_c1 + pontos_turisticos_c1 + pib_percapita_c1; 

    //*******************************
    //Captura de dados da carta 2
    printf("** Cadastro dos dados da carta 2 **\n");
    printf("Digite o Estado: \n"); 
    scanf("%s", &estado_c2);
    printf("Lembrete: o código da carta de ser a inicial do País mais o número da carta, ex:B01\n");
    printf("Digite o código da carta: \n"); 
    scanf("%s", &codigo_da_carta_c2);
    printf("Digite o nome da cidade: \n"); 
    scanf("%s", &nome_cidade_c2);
    printf("Digite a populção dessa cidade: \n"); 
    scanf("%f", &populacao_c2);
    printf("Digite a área dessa cidade: \n"); 
    scanf("%f", &area_c2);
    densidade_populacao_c2 = populacao_c2 / area_c2;
    printf("Digite o PIB dessa cidade: \n"); 
    scanf("%f", &pib_c2);
    pib_percapita_c2 = pib_c2 / populacao_c2;
    printf("Quantos pontos turísticos essa cidade possui: \n"); 
    scanf("%d", &pontos_turisticos_c2);
    super_poder_c2 = populacao_c2 + area_c2 + pib_c2 + pontos_turisticos_c2 + pib_percapita_c2;

    // Exibição dos Dados das Cartas:
    //Nesse bloco a função printf irá mostrar os dados capturados referente aos atributos das cartas.

    printf("*** CARTA 1 ***\n");
    printf("Estado: %s\n", estado_c1);
    printf("Código: %s\n", codigo_da_carta_c1);
    printf("Nome da Cidade: %s\n", nome_cidade_c1);
    printf("População: %.2f\n", populacao_c1);
    printf("Área: %.2f\n", area_c1);
    printf("PIB: %.2f\n", pib_c1);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos_c1);
    printf("Densidade Populacional: %.2f\n", densidade_populacao_c1);
    printf("Pib per Capita: %.2f\n",pib_percapita_c1);
    printf("Super poder: %.2f\n", super_poder_c1);
      
    printf("*** CARTA 2 ***\n");
    printf("Estado: %s\n", estado_c2);
    printf("Código: %s\n", codigo_da_carta_c2);
    printf("Nome da Cidade: %s\n", nome_cidade_c2);
    printf("População: %.2f\n", populacao_c2);
    printf("Área: %.2f\n", area_c2);
    printf("PIB: %.2f\n", pib_c2);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos_c2);
    printf("Densidade Populacional: %.2f\n", densidade_populacao_c1);
    printf("Pib per Capita: %.2f\n",pib_percapita_c2);
    printf("Super poder: %.2f\n", super_poder_c2);

    //Declarei variáveis para armazenaraas cartas vencedoras nos desafios
    int compara_populacao = populacao_c1 > populacao_c2;
    int compara_area = area_c1 > area_c2;
    int compara_pib = pib_c1 > pib_c2;
    int compara_pontosturisticos = pontos_turisticos_c1 > pontos_turisticos_c2;
    int compara_densidadepopulacional = densidade_populacao_c1 < densidade_populacao_c2;
    int compara_pibpercapita = pib_percapita_c1 > pib_percapita_c2;
    int compara_superpoder = super_poder_c1 > super_poder_c2;
     
    printf("*** Comparação de Cartas ***\n");
    //Bloco utilizando a função if e else para apresentar as cartas vencedoras após a comparação
    if (compara_populacao)
    {
        printf("População: Carta 1 venceu.%d\n", compara_populacao);
    }
    else
    {
        printf("População: Carta 2 venceu.%d\n", compara_populacao);
    };
    //*******************************
    if (compara_area)
    {
        printf("Área: Carta 1 venceu.%d\n", compara_area);
    }
    else
    {
        printf("Área: Carta 2 venceu.%d\n", compara_area);
    };
    //*******************************
    if (compara_pib)
    {
        printf("PIB: Carta 1 venceu.%d\n", compara_pib);
    }
    else
    {
        printf("PIB: Carta 2 venceu.%d\n", compara_pib);
    };
    //*******************************
    if (compara_pontosturisticos)
    {
        printf("Pontos Turísticos: Carta 1 venceu.%d\n", compara_pontosturisticos);
    }
    else
    {
        printf("Pontos Turísticos: Carta 2 venceu.%d\n", compara_pontosturisticos);
    };
    //*******************************
    if (compara_densidadepopulacional)
    {
        printf("Densidade Populacional: Carta 1 venceu.%d\n", compara_densidadepopulacional);
    }
    else
    {
        printf("Densidade Populacional: Carta 2 venceu.%d\n", compara_densidadepopulacional);
    };
    //*******************************
    if (compara_pibpercapita)
    {
        printf("PIB per Capita: Carta 1 venceu.%d\n", compara_pibpercapita);
    }
    else
    {
        printf("PIB per Capita: Carta 2 venceu.%d\n", compara_pibpercapita);
    };
    //*******************************
    if (compara_superpoder)
    {
        printf("Super Poder: Carta 1 venceu.%d\n", compara_superpoder);
    }
    else
    {
        printf("Super Poder: Carta 2 venceu.%d\n", compara_superpoder);
    };

    
    return 0;
}
