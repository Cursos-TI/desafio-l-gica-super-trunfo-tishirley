#include <stdio.h>

int main() {
        char estado;
        char codigo[3];
        char nome[20];
        int populacaoA = 12325000;
        int populacaoB = 6748000;
        int ponto1 = 50;
        int ponto2 = 30;

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);
  
    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o nome: ");
    scanf("%s", nome);


    if (populacaoA > populacaoB) {
         printf("Cidade 1 tem maior população.\n");
     } else {
        printf("Cidade 2 tem maior população.\n");
     }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}