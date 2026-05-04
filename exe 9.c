#include <stdio.h>

	int comparacoes = 0;
	int chamadas = 0;
	int particao(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio, aux;

    for(int j = inicio; j < fim; j++) {
        comparacoes++; 

        if(v[j] < pivo) {
            aux = v[j];
            v[j] = v[i];
            v[i] = aux;
            i++;
        }
    }

    aux = v[i];
    v[i] = v[fim];
    v[fim] = aux;

    return i;
}

	void quickSort(int v[], int inicio, int fim) {
    chamadas++; 

    if(inicio < fim) {
        int p = particao(v, inicio, fim);

        quickSort(v, inicio, p - 1);
        quickSort(v, p + 1, fim);
    }
}

	int main() {
    int v[10] = {1,2,3,4,5,6,7,8,9,10};

    quickSort(v, 0, 9);

    printf("Comparacoes: %d\n", comparacoes);
    printf("Chamadas recursivas: %d\n", chamadas);

    return 0;
}

