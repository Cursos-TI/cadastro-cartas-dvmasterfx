#include <stdio.h>

// Protótipo da função de limpeza do buffer
void limparBuffer() {
    int c;
    // Este loop consome e descarta todos os caracteres restantes no buffer
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char state1[20], state2[20];
    char cardCode1[3], cardCode2[3];
    char cityName1[20], cityName2[20];
    
    int population1, population2;
    int touristPoints1, touristPoints2;
    
    // Usamos float para área, PIB, densidade e super poder
    float area1, area2;
    float pib1, pib2;
    float density1, density2;
    float p_superpower1, p_superpower2;
    float superpower1, superpower2;

    printf("========================================================\n");
    printf("         ENTRADA DE DADOS - CARDÃS DE CIDADE          \n");
    printf("========================================================\n\n");

    // --- BLOCO DE ENTRADA DE DADOS PARA CIDADE 1 ---
    printf("[--- DADOS PARA A CIDADE 1 ---\n");
    printf("Informe o nome da cidade: ");
    scanf(" %s", state1);
    printf("Informe o ano de fundação (ou usar um número de exemplo): ");
    // Não é necessário ler o ano de fundação para o cálculo, mas mantemos o prompt.
    
    printf("Informe a população: ");
    scanf("%f", &population1);

    printf("Informe a área em Km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%f", &p_superpower1);
    printf("\n");


    // --- BLOCO DE ENTRADA DE DADOS PARA CIDADE 2 ---
    printf("[--- DADOS PARA A CIDADE 2 ---\n");
    printf("Informe o nome da cidade: ");
    scanf(" %s", state2);
    printf("Informe o ano de fundação (ou usar um número de exemplo): ");
    
    printf("Informe a população: ");
    scanf("%f", &population2);

    printf("Informe a área em Km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%f", &p_superpower2);
    printf("\n");


    // ================================================================
    //                        PROCESSAMENTO E CÁLCULOS
    // ================================================================
    
    // 1. Cálculo do Superpoder (Métrica composta)
    // Fórmula: (População * Área * PIB) / (Pontos Turísticos + 1)
    
    // Cuidado com divisão por zero, por isso adicionamos +1 no denominador.
    superpower1 = (population1 * area1 * pib1) / (p_superpower1 + 1);
    superpower2 = (population2 * area2 * pib2) / (p_superpower2 + 1);

    // 2. Cálculo do Índice de Desenvolvimento Humano (IDH)
    // Fórmula simplificada: (População / Área) * (PIB / População) = PIB / Área
    // Usaremos o PIB por Área (renda por km²)
    p_superpower1 = pib1 / area1; 
    p_superpower2 = pib2 / area2; 


    // ================================================================
    //                            RESULTADOS
    // ================================================================

    printf("\n\n========================================================\n");
    printf("              ANÁLISE COMPARATIVA DE CIDADES             \n");
    printf("========================================================\n");

    // 1. Tabela de Métricas
    printf("\n[--- 📊 MÉTODAS DE ANÁLISE ---\n");
    printf("Métrica | %s | %s\n", state1, state2);
    printf("----------------------------------------------------\n");
    printf("Superpoder (Pop*Área*PIB/Pontos+1): | %.2f | %.2f\n", superpower1, superpower2);
    printf("IDH (PIB/Área):                    | %.2f | %.2f\n", p_superpower1, p_superpower2);
    
    // 2. Comparação e Vencedor
    printf("\n[--- 🏆 CONCLUSÃO COMPARATIVA ---\n");
    
    // Comparação do Superpoder
    if (superpower1 > superpower2) {
        printf("🏅 SUPERPODER: %s leva vantagem (%.2f vs %.2f)\n", state1, superpower1, superpower2);
    } else if (superpower2 > superpower1) {
        printf("🏅 SUPERPODER: %s leva vantagem (%.2f vs %.2f)\n", state2, superpower2, superpower1);
    } else {
        printf("🏅 SUPERPODER: Ambas as cidades têm um nível semelhante.\n");
    }

    // Comparação do IDH
    if (p_superpower1 > p_superpower2) {
        printf("💡 IDH (PIB/Área): %s demonstra maior desenvolvimento (%.2f vs %.2f).\n", state1, p_superpower1, p_superpower2);
    } else if (p_superpower2 > p_superpower1) {
        printf("💡 IDH (PIB/Área): %s demonstra maior desenvolvimento (%.2f vs %.2f).\n", state2, p_superpower2, p_superpower1);
    } else {
        printf("💡 IDH (PIB/Área): Ambas as cidades têm níveis de desenvolvimento comparáveis.\n");
    }
}