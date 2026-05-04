#include <stdio.h>

	int particao(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio;
    int j, aux;

    for(j = inicio; j < fim; j++) {
        if(vetor[j] < pivo) {
            aux = vetor[j];
            vetor[j] = vetor[i];
            vetor[i] = aux;
            i++;
        }
    }

   
    aux = vetor[i];
    vetor[i] = vetor[fim];
    vetor[fim] = aux;

    return i;
}


	void quickSort(int vetor[], int inicio, int fim) {
    if(inicio < fim) {
        int p = particao(vetor, inicio, fim);

        quickSort(vetor, inicio, p - 1);
        quickSort(vetor, p + 1, fim);
    }
}

	int main() {
    int vetor[7] = {4321, 1111, 9999, 3333, 7777, 2222, 5555};

    quickSort(vetor, 0, 6);

    printf("Vetor ordenado:\n");
    for(int i = 0; i < 7; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}