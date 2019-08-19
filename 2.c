#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int n, i, cont_par=0, cont_impar=0, j=0, k=0;
	printf("Quantos?\n");
	scanf("%d", &n);
	float *v = malloc(sizeof(float)*n); //4 * n, n = tamanho do vetor
	//lê o vetor:	
	for (i=0; i<n; i++){
		printf("V[%d] = \n", i);
		scanf("%f", &v[i]); //&v[i] = v+1		
	}
	
	//digita o vetor lido e adiciona contadores de par e impar:
	printf("\nVetor digitado:\n\n");
	for (i=0; i<n; i++){
		printf("V[%d] = %f\n", i, *(v+i)); //*(v+i) = v[i]
		if (fmod(v[i], 2) == 0){
			cont_par++;
		}
		else{
			cont_impar++;
		} 
}

//vetor par:
	float *p = malloc(sizeof(float)*cont_par);
	printf("\nVetor par:\n");
	for (i=0;i<n;i++){
		if ((fmod(v[i], 2) == 0) && (v[i] != 0)){
			p[i] = v[i];
			printf("Par[%d] = %f\n", j, p[i]);
			j++;
		}
	}
//vetor ímpar:
	float *imp = malloc(sizeof(float)*cont_impar);
	printf("\nVetor impar:\n");
	for (i=0; i<n; i++){
		if((fmod(v[i], 2) != 0) && (v[i] != 0)){
			imp[i] = v[i];
			printf("Impar[%d] = %f\n", k, imp[i]);
			k++;
		}
	}
	
	free(v);
	free(p);
	free(imp);

return 0;

}


