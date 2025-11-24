#include <stdio.h>

int main() {
    int n, divisor;
    printf("Digite um numero (>= 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O numero deve ser >= 2.\n");
        return 0;
    }

    int ehPrimo = 1;  
    int menorDivisor = 0;

    for (divisor = 2; divisor <= n / 2; divisor++) {
        if (n % divisor == 0) {
            ehPrimo = 0;
            menorDivisor = divisor;
            break;  
        }
    }

    if (ehPrimo) {
        printf("%d eh primo.\n", n);
    } else {
        printf("%d nao eh primo. Menor divisor: %d\n", n, menorDivisor);
    }

    return 0;
}

