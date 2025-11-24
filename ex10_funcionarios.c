#include <stdio.h>

int main() {
    int ids[10], N, i, opcao;
    double salarios[10];

    do {
        printf("Quantos funcionarios deseja cadastrar (1..10)? ");
        scanf("%d", &N);
    } while (N < 1 || N > 10);

    for (i = 0; i < N; i++) {
        printf("Funcionario %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &ids[i]);
        printf("Salario: ");
        scanf("%lf", &salarios[i]);
    }

    do {
        printf("\n===== MENU RH =====\n");
        printf("1) Listar todos (id e salario)\n");
        printf("2) Mostrar maior salario\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n--- Lista de funcionarios ---\n");
            for (i = 0; i < N; i++) {
                printf("Funcionario ID: %d, Salario: R$ %.2lf\n", ids[i], salarios[i]);
            }
        }
        else if (opcao == 2) {
            double maior = salarios[0];
            int idx = 0;
            for (i = 1; i < N; i++) {
                if (salarios[i] > maior) {
                    maior = salarios[i];
                    idx = i;
                }
            }
            printf("Maior salario: R$ %.2lf (Funcionario ID: %d)\n", maior, ids[idx]);
        }
        else if (opcao != 0) {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");

    return 0;
}
