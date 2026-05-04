#include <stdio.h>

int main() {
    int vetor[6] = {300, 150, 800, 200, 900, 500};
    int i, j, aux;
    int pivo = vetor[5]; 
    int pos=0;

    for(i = 0; i < 5; i++) {
        if(vetor[i] < pivo) {
            aux = vetor[i];
            vetor[i] = vetor[pos];
            vetor[pos] = aux;
            pos++;
        }
    }

    aux = vetor[pos];
    vetor[pos] = vetor[5];
    vetor[5] = aux;

    printf("Vetor apos particao:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}