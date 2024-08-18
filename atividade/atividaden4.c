#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    float percBrancos, percNulos, percValidos;
    printf("Digite o número total de eleitores: ");
    scanf("%d", &totalEleitores);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &votosBrancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &votosNulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votosValidos);
    percBrancos = (votosBrancos * 100.0) / totalEleitores;
    percNulos = (votosNulos * 100.0) / totalEleitores;
    percValidos = (votosValidos * 100.0) / totalEleitores;
    printf("Percentual de votos brancos: %.2f%%\n", percBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);
    printf("Percentual de votos válidos: %.2f%%\n", percValidos);
    return 0;
}
