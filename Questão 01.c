#include <stdio.h>

int main() {
    int idade;
    printf("Olá! Digite sua idade:");
    scanf("%d", &idade);
    switch (idade < 18 ? 0 : (idade <= 65 ? 1 : 2)) {
        case 0:
            printf("Você é menor de idade. Aproveite sua juventude!\n");
            break;
        case 1:
            printf("Você é maior de idade. Tenha responsabilidade e aproveite sua liberdade!\n");
            break;
        case 2:
            printf("Você é considerado idoso. Compartilhe da sua sabedoria!\n");
            break;
        default:
            printf("Você digitou uma idade inválida. Tente novamente!\n");
            break;
    }

    return 0;
}
