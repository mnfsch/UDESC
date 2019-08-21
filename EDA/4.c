#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[30];
	char curso[20];
	int fase;
	float media;
}Aluno;

int main (){ //Aluno *v[10]. Vetor de ponteiro de estruturas
	int n, i;
	printf("Digite a qtdade de alunos:\n");
	scanf("%d", &n);
	Aluno **v = malloc(sizeof(Aluno*)*n); //alocado para um ponteiro, nao para a struct toda, por isso **	
	for (i=0; i<n; i++){
		fflush(stdin); //limpa o teclado
		v[i]=malloc(sizeof(Aluno));
		printf("Digite o nome do aluno %d:\n", i+1);
		fgets(v[i]->nome, 30, stdin); //30=tamanho vetor, stdin=entrada do teclado
		printf("Digite o curso:\n");
		fgets(v[i]->curso, 20, stdin);
		printf("Digite a fase:\n");
		scanf("%d", &v[i]->fase);
		printf("Digite a media:\n");
		scanf("%f", &v[i]->media);
	}
	
	printf("\nAlunos em exame:\n");
	for (i=0; i<n; i++){
		if(v[i]->media < 7)
		printf("%s\n", v[i]->nome);
	}
	
	for (i=0; i<n;i++)
		free(v[i]);

free(v);
	
}

	
