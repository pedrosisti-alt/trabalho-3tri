#include <stdio.h>

int main() {
    int numeros = 0, soma = 0, cont = 0;
    float media;

    while (1) {
        printf("Escreva um numero (-1 para sair): ");
        scanf("%d", &numeros);

        if (numeros == -1)
            break;

        soma += numeros;
        cont++;
    }

    if (cont > 0)
        media = (float)soma / cont;
    else
        media = 0;

    printf("Soma dos numeros: %d\n", soma);
    printf("Media dos numeros: %.2f\n", media);

    return 0;
}
