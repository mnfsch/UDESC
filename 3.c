#include <stdio.h>
#include <stdlib.h>


struct Aluno{
	char nome[20];
	char curso[20];
	int fase;
	float media;
};


int main (){
	int i, q=0;
	struct Aluno aluno[20];
	
	printf("Digite a qtdade de alunos:\n");
	scanf("%d", &q);
	
	for (i=1; i<=q; i++){
		printf("Digite o nome do aluno %d:\n", i);
		scanf("%s", &aluno[i].nome);
		printf("Digite o curso:\n");
		scanf("%s", &aluno[i].curso);
		printf("Digite a fase:\n");
		scanf("%d", &aluno[i].fase);
		printf("Digite a media:\n");
		scanf("%f", &aluno[i].media);
	}
	
	printf("\nAlunos em exame:\n\n");
	for (i=1; i<=q; i++){
		if (aluno[i].media < 7){
			printf("Aluno %d = %s", i, aluno[i].nome);
		}
	}

	
}
