#include <stdio.h>

int main() {
    float num1, num2, soma;

    printf("Digite o número 1: ");
    scanf("%f", &num1);

    printf("Digite o número 2: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("O resultado da soma dos dois números é: %.2f\n", soma);

    return 0;
}
