#include <stdio.h>


void insertion(int v[], int n) {
    int i, j, chave;

    for(i = 1; i < n; i++) {
        chave = v[i];
        j = i - 1;

        while(j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }

    printf("Usou Insertion Sort\n");
}


	int particao(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio, aux;

    for(int j = inicio; j < fim; j++) {
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
    if(inicio < fim) {
        int p = particao(v, inicio, fim);
        quickSort(v, inicio, p - 1);
        quickSort(v, p + 1, fim);
    }
}

	void super_sort(int v[], int tamanho) {
    if(tamanho < 10) {
        insertion(v, tamanho);
    } else {
        printf("Usou Quick Sort\n");
        quickSort(v, 0, tamanho - 1);
    }
}


	int main() {

    int v1[8]  = {44, 21, 98, 12, 55, 73, 31, 8};
    int v2[15] = {15, 3, 9, 8, 2, 7, 5, 1, 6, 4, 14, 13, 12, 11, 10};

    //Insertion
    super_sort(v1, 8);
    printf("Resultado v1:\n");
    for(int i = 0; i < 8; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n\n");

    //Quick
    super_sort(v2, 15);
    printf("Resultado v2:\n");
    for(int i = 0; i < 15; i++) {
        printf("%d ", v2[i]);
    }

    return 0;
}