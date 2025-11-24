#include <stdio.h>

int main() {
    float vendas[2][2];
    int i, j, opcao;

    printf("Digite os valores de vendas (R$):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Filial %d, Mes %d: ", i + 1, j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    do {
        printf("\n===== MENU VENDAS =====\n");
        printf("1) Total por filial (linha)\n");
        printf("2) Total por mes (coluna)\n");
        printf("3) Total geral\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
           
            for (i = 0; i < 2; i++) {
                float total = 0;
                for (j = 0; j < 2; j++) {
                    total += vendas[i][j];
                }
                printf("Total da Filial %d: R$ %.2f\n", i + 1, total);
            }
        }
        else if (opcao == 2) {
          
            for (j = 0; j < 2; j++) {
                float total = 0;
                for (i = 0; i < 2; i++) {
                    total += vendas[i][j];
                }
                printf("Total do Mes %d: R$ %.2f\n", j + 1, total);
            }
        }
        else if (opcao == 3) {
         
            float total = 0;
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    total += vendas[i][j];
                }
            }
            printf("Total geral: R$ %.2f\n", total);
        }
        else if (opcao != 0) {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");

    return 0;
}
