#include <stdio.h>

int main() {
    int anos, meses, dias, idadeEmDias;
    printf("Digite sua idade (anos, meses, dias): ");
    scanf("%d %d %d", &anos, &meses, &dias);
    idadeEmDias = (anos * 365) + (meses * 30) + dias;
    printf("Sua idade em dias é: %d\n", idadeEmDias);
    return 0;
}
