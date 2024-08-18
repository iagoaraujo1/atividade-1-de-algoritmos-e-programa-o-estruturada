#include <stdio.h>

int main() {
    int carrosVendidos;
    float valorTotalVendas, salarioFixo, comissaoPorCarro, salarioFinal;
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite a comissão por carro vendido: ");
    scanf("%f", &comissaoPorCarro);
    salarioFinal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (valorTotalVendas * 0.05);
    printf("O salário final é: %.2f\n", salarioFinal);
    return 0;
}
