#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("O valor da area do triângulo é: %.2f\n", area);

    return 0;
}
