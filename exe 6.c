#include <stdio.h>

	void merge(int v[], int inicio, int meio, int fim) {
    int i=inicio, j = meio + 1, k = 0;
    int temp[100];

    while(i <= meio && j <= fim) {
        if(v[i]<v[j]) {
            temp[k++] = v[i++];
        } else {
            temp[k++] = v[j++];
        }
    }

    while(i<=meio) {
        temp[k++] = v[i++];
    }

    while(j<=fim) {
        temp[k++] = v[j++];
    }

    for(i = inicio, k = 0; i <= fim; i++, k++) {
        v[i] = temp[k];
    }
}


	void mergeSort(int v[], int inicio, int fim) {
    printf("Dividindo...\n");

    if(inicio < fim) {
        int meio = (inicio + fim) / 2;

        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);

        merge(v, inicio, meio, fim);
    }
}

int main() {
    int vetor[8] = {44, 21, 98, 12, 55, 73, 31, 8};

    mergeSort(vetor, 0, 7);

    printf("\nVetor ordenado:\n");
    for(int i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}