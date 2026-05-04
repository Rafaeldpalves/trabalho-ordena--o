#include<stdio.h>
	int main(){
	
	int lotes[6] = {101, 102, 103, 104, 105, 99};
	int i, j, aux, num;
	int cont = 0;
	
	
	for(i = 1; i<6; i++){
		num = lotes[i];
		j = i-1;
		
		while(j>=0){
			cont++;
			if(lotes[j]>num){
				lotes[j+1]=lotes[j];
				j--;
			}else{
				break;
				}	
			}
			
			lotes[j + 1] = num;
		}
		
	for(i=0; i<6; i++){
		printf("%d ",lotes[i]);
		
	
	}
		printf("\ncontador de comparacoes:%d\n",cont);
	return 0;
}