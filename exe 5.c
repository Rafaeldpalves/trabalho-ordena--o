#include <stdio.h>

	void merge(int v1[], int n1, int v2[], int n2, int v3[]) {
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2) {
        if(v1[i] < v2[j]) {
            v3[k] = v1[i];
            i++;
        } else {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }

   
    while(i < n1) {
        v3[k] = v1[i];
        i++;
        k++;
    }

  
    while(j < n2) {
        v3[k] = v2[j];
        j++;
        k++;
    }
}

	int main(){
	int norte[3] = {20, 40, 60};
	int sul[4] = {10, 30, 50, 70};
	int resultado[7];
	
	merge(norte, 3, sul, 4, resultado);
	for(int i=0; i<7;i++){
		printf("%d ",resultado[i]);
	}
	return 0;
}