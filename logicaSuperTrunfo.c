#include <stdio.h>

int main(){
    char estado;
    char codigo[3];
    char nome[20];
    unsigned long int populacao = 12325000;
    unsigned long int populacao2 = 6748000;
    float area = 1521.11;
    float area2 = 1200.25;
    double pib = 699279999988.00;
    double pib2 = 300500000000.00;
    int ponto1 = 50;
    int ponto2 = 30;
    float densidade;
    float pibpercapta;
    float reais;
    float superPoder1 = populacao + area + pib + ponto1;
    float superPoder2 = 8102.64 + 5622.16;
    float superPoder3 = populacao2 + area2 + pib2 + ponto2;
    float superPoder4 = 56736.71 + 44531.71;
    float superPoderCarta1 = superPoder1 + superPoder2;
    float superPoderCarta2 = superPoder3 + superPoder4;
    float resultadodp1 = 8102.64;
    float resultadodp2 = 5622.16;
    float resultadopp1 = 56736.71;
    float resultadopp2 = 44531.71;
    float quociente = (float) populacao / area; // 'populacao' é implicitamente convertido para float
    double quociente2 = (float) pib / populacao; // 'populacao' é implicitamente convertido para float

    float quociente3 = (float) populacao2 / area2; // 'populacao' é implicitamente convertido para float
    double quociente4 = (float) pib2 / populacao2; // 'populacao' é implicitamente convertido para float

    printf("Carta 1:\n");
    printf("Estado: (SP)\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: São Paulo\n");
    printf("População: 12325000\n");
    printf("Área: 1521.11 km²\n");
    printf("PIB: 699.28 bilhões de reais\n");
    printf("Números de Pontos Turísticos: 50\n");
    printf("Densidade Populacional: %.2f hab/km²\n", quociente);
    printf("PIB per Capita: %.2f reais\n", quociente2);

    
    printf("\n");


    printf("Carta 2:\n");
    printf("Estado: (RJ)\n");
    printf("Código: B01\n");
    printf("Nome da Cidade: Rio de Janeiro\n");
    printf("População: 6748000\n");
    printf("Área: 1200.25 km²\n");
    printf("PIB: 300.50 bilhões de reais\n");
    printf("Número de Pontos Turísticos: 30\n");
    printf("Densidade Populacional: %.2f hab/km²\n", quociente3);
    printf("PIB per Capita: %.2f reais\n", quociente4);

    printf("\n");

    printf("Desafio Lógica - Nível Novato\n");
    printf("\n");
    printf("Comparação de Cartas:\n");
    printf("\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", ponto1 > ponto2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadodp1 < resultadodp2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadopp1 > resultadopp2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderCarta1 > superPoderCarta2);

    return 0;
}
