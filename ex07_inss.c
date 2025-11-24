#include <stdio.h>

int main() {
    float salario, valorHora, inss, horasExtras, valorExtras;
    int opcao;

    printf("Digite o salario mensal do colaborador: ");
    scanf("%f", &salario);

    do {
        printf("\n===== MENU RH =====\n");
        printf("1) Calcular INSS (8%% do salario)\n");
        printf("2) Calcular valor das horas extras\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            inss = salario * 0.08;
            printf("INSS a descontar: R$ %.2f\n", inss);
        }
        else if (opcao == 2) {
            printf("Informe a quantidade de horas extras: ");
            scanf("%f", &horasExtras);

            valorHora = salario / 220.0;
            valorExtras = horasExtras * valorHora * 1.5;

            printf("Valor das horas extras: R$ %.2f\n", valorExtras);
        }
        else if (opcao != 0) {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");

    return 0;
}
