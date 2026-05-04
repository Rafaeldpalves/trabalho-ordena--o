#include<stdio.h>

int main(){
	int vetor[5] = {82, 45, 12, 78, 23};
	int i, j, aux; 
	int cont=0;
	
	for(i=0; i<5; i++){
		for(j=0; j<5 - i -1; j++){
		if(vetor[j]>vetor[j+1])	{
		aux = vetor[j];
			vetor[j] = vetor[j+1];
			vetor[j+1] = aux;
			cont++;
			}
		}
		 printf("\nPassada %d: ", i + 1);
        for(int k = 0; k < 5; k++) {
            printf("%d ", vetor[k]);
	}
	
	}
	printf("\natualizado %d vezes\n", cont);
	return 0;

}

