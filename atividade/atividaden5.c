#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;
    printf("Digite o sal�rio atual: ");
    scanf("%f", &salarioAtual);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);
    printf("O novo sal�rio �: %.2f\n", novoSalario);
    return 0;
}
