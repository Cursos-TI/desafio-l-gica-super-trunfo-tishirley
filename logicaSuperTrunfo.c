#include <stdio.h>

int main(){
    char estado;
    char codigo[3];
    char nome[20];
    int populacao;
    int populacaoA01 = 12325000;
    int populacaoB01 = 6748000;
    float area;
    float pib;
    int pontos;
    int pontoA01 = 50;
    int pontoB01 = 30;
    int resultado1, resultado2;


    printf("Desafio Mestre: Lógica Super Trunfo\n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: A\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: São Paulo\n");
    printf("População: 12325000\n");
    printf("Área: 1521.11 km²\n");
    printf("PIB: 699.28 bilhões de reais\n");
    printf("Números de Pontos Turísticos: 50\n");
    printf("\n");


    printf("Carta 2:\n");
    printf("Estado: B\n");
    printf("Código: B01\n");
    printf("Nome da Cidade: Rio de Janeiro\n");
    printf("População: 6748000\n");
    printf("Área: 1200.25 km²\n");
    printf("PIB: 300.50 bilhões de reais\n");
    printf("Número de Pontos Turísticos: 30\n");
    printf("\n");

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    return 0;
}