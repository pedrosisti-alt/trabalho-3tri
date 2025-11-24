#include <stdio.h>

int main() {
    int Numero, contador, r;

    printf("Digite um Numero: ");
    scanf("%d", &Numero);

    for (contador = 1; contador <= 10; contador++) {
        r = Numero * contador;
        printf("%d x %d = %d\n", Numero, contador, r);
    }

    return 0;
}
