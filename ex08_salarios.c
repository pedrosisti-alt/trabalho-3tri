#include <stdio.h>

int main() {
    float salarios[10], soma = 0;
    int N, i, opcao;

    do {
        printf("Quantos salarios deseja informar (1..10)? ");
        scanf("%d", &N);
    } while (N < 1 || N > 10);

    for (i = 0; i < N; i++) {
        printf("Salario %d: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1) Listar salarios\n");
        printf("2) Media dos salarios\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n--- Lista de salarios ---\n");
            for (i = 0; i < N; i++) {
                printf("Salario %d: R$ %.2f\n", i + 1, salarios[i]);
            }
        }
        else if (opcao == 2) {
            soma = 0;
            for (i = 0; i < N; i++) {
                soma += salarios[i];
            }
            printf("Media dos salarios: R$ %.2f\n", soma / N);
        }
        else if (opcao != 0) {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");

    return 0;
}


