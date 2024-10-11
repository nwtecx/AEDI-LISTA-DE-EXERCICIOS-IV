#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

int buscaBinaria(int arr[], int n, int valor) {
    int esquerda = 0, direita = n - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (arr[meio] == valor) {
            return meio;
        }
        if (arr[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;
}

int main() {
    int n;

    printf("Oi! Quantos números inteiros você quer inserir? ");
    scanf("%d", &n);

    int numeros[n];
    printf("Digite os números:\n");
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    insertionSort(numeros, n);

    int valor;
    printf("Digite o valor que você deseja pesquisar: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(numeros, n, valor);
    if (resultado != -1) {
        printf("O valor %d foi encontrado na posição %d.\n", valor, resultado + 1);
    } else {
        printf("O valor %d não foi encontrado na lista.\n", valor);
    }

    return 0;
}
