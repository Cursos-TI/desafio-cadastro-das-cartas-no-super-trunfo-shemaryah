#include <stdio.h>

int main() {
   
     // Cadastro Carta 1
    char estado[11] = "Pernambuco";
    char codigo_carta[3] = "B30";
    char cidade[6] = "Recife";
    int populacao = 25000;
    float area = 128700;
    float PIB = 9345660;
    int pontos_turisticos = 18;

    

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta);
    printf("O código da carta digitado é: %s \n", codigo_carta);

    printf("Digite o Estado: ");
    scanf("%s", estado);
    printf("O Estado digitado é: %s \n", estado);

    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("O cidade digitada é: %s \n", cidade);

    printf("Digite o número da população: ");
    scanf("%d", &populacao);
    printf("A população digitada é: %d \n", populacao);

    printf("Digite a área da cidade de Recife: ");
    scanf("%f", &area);
    printf("A área da cidade digitada é: %f \n", area);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("O PIB digitado é: %f \n", PIB);

    printf("Digite quantos pontos turísticos tem em Recife: ");
    scanf("%d", &pontos_turisticos);
    printf("A quantidade de pontos turísticos digitada é: %d\n", pontos_turisticos);
    
     // Cadastro Carta 2
    char estado[11] = "Amazonas";
    char codigo_carta[3] = "A09";
    char cidade[6] = "Manaus";
    int populacao = 210000;
    float area = 1652200;
    float PIB = 12976886;
    int pontos_turisticos = 25;

    

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta);
    printf("O código da carta digitado é: %s \n", codigo_carta);

    printf("Digite o Estado: ");
    scanf("%s", estado);
    printf("O Estado digitado é: %s \n", estado);

    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("O cidade digitada é: %s \n", cidade);

    printf("Digite o número da população: ");
    scanf("%d", &populacao);
    printf("A população digitada é: %d \n", populacao);

    printf("Digite a área da cidade de Manaus: ");
    scanf("%f", &area);
    printf("A área da cidade digitada é: %f \n", area);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("O PIB digitado é: %f \n", PIB);

    printf("Digite quantos pontos turísticos tem em Manaus: ");
    scanf("%d", &pontos_turisticos);
    printf("A quantidade de pontos turísticos digitada é: %d\n", pontos_turisticos);
     
    printf("Concluído com sucesso!\n");
     
   return 0;
} 