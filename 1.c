#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void media_vetor(float *p, int k);

int main (){
	int n;
	printf("Quantos?\n");
	scanf("%d", &n);
	float *v = malloc(sizeof(float)*n); //4 * n, n = tamanho do vetor
	media_vetor(v, n);
	
free(v);
return 0;
}


void media_vetor(float *p, int k){
	int i;
	float soma=0, media=0;
	for (i=0; i<k; i++){
		printf("V[%d] = \n", i);
		scanf("%f", &p[i]);
		soma=soma+p[i];
	}
	media=soma/k;
	printf("\nMedia = %.2f", media);
	printf("\nSoma = %.2f", soma);
}






