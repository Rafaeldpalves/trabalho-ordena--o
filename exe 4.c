#include<stdio.h>

	void bubble(int vetor[], int n){
	int i, j, aux;
	int comp = 0, trocas=0;
	
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - i - 1; j++){
			comp++;
			if(vetor[j]>vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
				trocas++;
			}
		}
	}
	printf("\nbubble sort:");
	printf("\ncomparacoes:%d", comp);
	printf("\ntrocas:%d\n",trocas);
}
	void selection(int vetor[], int n){	
	int i,j, menor, aux;
	int comp = 0, trocas = 0;
	
		for(i = 0; i < n; i++)
	{
		menor = i;
		
		for(j = i + 1; j < n; j++){
			comp++;
			if(vetor[j]<vetor[menor]){
					menor = j;
			}
			
		}
		if(menor !=i ){
		
		aux = vetor[i];
		vetor[i] = vetor[menor];;
		vetor[menor] = aux;
		trocas++;
	}
	
	
	}
	printf("\nselection sort:");
	printf("\ncomparacoes:%d", comp);
	printf("\ntrocas:%d",trocas);
}

int main(){
	int original[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int v1[9],v2[9];
	int i;
	
	for(i = 0;i < 9; i++){
		v1[i] = original[i];
		v2[i] = original[i];
	}	
	bubble(v1, 9);
	selection(v2, 9);
	
	return 0;
}


