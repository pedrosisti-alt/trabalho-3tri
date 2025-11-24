#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    int maior, menor;
    float soma = 0, media;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < 10; i++) {
        soma += vetor[i];

        if (vetor[i] > maior)
            maior = vetor[i];

        if (vetor[i] < menor)
            menor = vetor[i];
    }

    media = soma / 10;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", media);

    return 0;
}
