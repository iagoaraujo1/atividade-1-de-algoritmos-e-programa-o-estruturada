#include <stdio.h>

int main() {
    int carrosVendidos;
    float valorTotalVendas, salarioFixo, comissaoPorCarro, salarioFinal;
    printf("Digite o n�mero de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);
    printf("Digite o sal�rio fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite a comiss�o por carro vendido: ");
    scanf("%f", &comissaoPorCarro);
    salarioFinal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (valorTotalVendas * 0.05);
    printf("O sal�rio final �: %.2f\n", salarioFinal);
    return 0;
}
