#include <stdio.h>

int main() {
    int qtdProdutos;
    float precoProdutos, precoTotal;

    printf("Digite o preço do produto: ");
    scanf("%f", &precoProdutos);

    printf("Digite quantos produtos você comprou: ");
    scanf("%i", &qtdProdutos);

    precoTotal = precoProdutos * qtdProdutos;

    printf("O preço total a se pagar é: %.2f\n", precoTotal);

    return 0;
}
