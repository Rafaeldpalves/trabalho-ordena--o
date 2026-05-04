#include<stdio.h>

int main(){
	int vetor[6] = {500, 130, 880, 195, 290, 880};
	int i, j, aux, menor;
	int cont=0;
	
	

	for(i = 0; i < 6; i++)
	{
		menor = i;
		
		for(j = i + 1; j < 6; j++){
			if(vetor[j]<vetor[menor]){
					menor = j;
			}
			
		}
		if(menor !=i ){
		
		aux = vetor[i];
		vetor[i] = vetor[menor];;
		vetor[menor] = aux;
		cont++;
	}
		
	}
	for(i=0;i<6;i++){
		printf("%d,",vetor[i]);
	}
	printf("\ntotal de trocas:%d",cont);
	return 0;
}