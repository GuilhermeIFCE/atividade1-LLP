#include <stdio.h>

int main() {
    float horasTrabalhadas, valorRecebidoPorHora, salarioASerRecebido;

    printf("Digite o total de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorRecebidoPorHora);

    salarioASerRecebido = horasTrabalhadas * valorRecebidoPorHora;

    printf("O salário total esperado para você receber é de: %.2f\n", salarioASerRecebido);

    return 0;
}
