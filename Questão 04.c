#include <stdio.h>

void selectionSort(float notas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maiorIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (notas[j] > notas[maiorIdx]) {
                maiorIdx = j;
            }
        }
        float temp = notas[i];
        notas[i] = notas[maiorIdx];
        notas[maiorIdx] = temp;
    }
}

int main() {
    int n;

    printf("Quantas notas você deseja inserir? ");
    scanf("%d", &n);
    float notas[n];
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    selectionSort(notas, n);

    printf("Essas são as notas organizadas em ordem decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    return 0;
}



