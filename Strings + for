#include <stdio.h>

int main() {
    char texto[101];
    int i, vogais = 0;

    printf("Digite uma frase (até 100 chars): ");
    fgets(texto, 101, stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            vogais++;
        }
    }

    printf("\nQuantidade de vogais: %d\n", vogais);

    return 0;
}
