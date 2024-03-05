#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

// Função para comparar dois números inteiros (para usar com qsort)
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int numerosInteiros[TAMANHO];
    int i;

    // Entrada de 5 números aleatórios e positivos
    printf("Digite 5 numeros aleatorios e positivos:\n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &numerosInteiros[i]);
    }

    // Ordenando os números em ordem crescente
    qsort(numerosInteiros, TAMANHO, sizeof(int), comparar);

    // Mostrando os números em ordem crescente
    printf("Numeros em ordem crescente:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", numerosInteiros[i]);
    }
    printf("\n");

    return 0;
}
