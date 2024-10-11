#include <stdio.h>

int main() {
    int numero;
    printf("Oi! Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    printf("Números pares entre 1 e %d:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

