#include <stdio.h>

int main() {
    float metros, centimetros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("O valor convertido em centímetros fica: %.0f centímetros.\n", centimetros);

    return 0;
}
