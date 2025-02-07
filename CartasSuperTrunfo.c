#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char pais[10];
    char codigo_da_carta[5]; //Definido limite de caracteres, para ficar dentro do padrão proposto.
    char nome_cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Função printf será utilizada sempre antes da captura de cada dado, para orientar usuário de como proceder.
    printf("Digite a sigla do País: \n"); 
    scanf("%s", &pais);

    printf("Lembrete: o código da carta de ser a inicial do País mais o número da carta, ex:B01\n");
    printf("Digite o código da carta: \n"); 
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: \n"); 
    scanf("%s", &nome_cidade);
    printf("Digite a populção dessa cidade: \n"); 
    scanf("%d", &populacao);
    printf("Digite a área dessa cidade: \n"); 
    scanf("%f", &area);
    printf("Digite o PIB dessa cidade: \n"); 
    scanf("%f", &pib);
    printf("Quantos pontos turísticos essa cidade possui: \n"); 
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Nesse bloco a função printf irá mostrar os dados capturados referente aos atributos das cartas.
    printf("País: %s\n", pais);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
