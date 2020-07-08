#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
  int matricula, idade;
  char curso[30], nome[30];
};

int main(void) {
  int terminar = 1;
  int opcao;
  int contador = 0;
  struct aluno criaaluno[10];
  int matricula;
  int idade = 18;
  char curso[30];


 while(terminar){
   printf("1 - Inserir Alunos\n");
   printf("2 - Buscar matricula\n");
   printf("3 - Listar menores de 18\n");
   printf("4 - Listar pro curso\n");
   scanf("%d", &opcao);

   switch(opcao){
     case 1:
      printf("Qual o nome do aluno?\n");
      scanf("%s", criaaluno[contador].nome);
      printf("Qual a matricula do aluno?\n");
      scanf("%d", &criaaluno[contador].matricula);
      printf("Qual a idade aluno?\n");
      scanf("%d", &criaaluno[contador].idade);
      printf("Qual o curso do aluno?\n");
      scanf("%s", criaaluno[contador].curso);
      contador++;
      break;
     case 2:
      printf("Qual a matricula do aluno?\n");
      scanf("%d", &matricula);
      for(int i = 0; i < 10 ; i++){
        if (matricula == criaaluno[i].matricula){
          printf("Nome: %s\n", criaaluno[i].nome);
          printf("Matricula: %d\n", criaaluno[i].matricula);
          printf("Data de Nascimento: %d\n", criaaluno[i].idade);
          printf("Curso: %s\n", criaaluno[i].curso);
        } else {
          break;
        }
      }
      break;
     case 3:
        for(int i = 0; i < 10; i++ ){
          if(criaaluno[i].idade < 18){
            printf("Nome: %s\n", criaaluno[i].nome);
          }
        }
      break;
     case 4:
        printf("Qual o curso?");
        scanf("%s", curso);

        for(int i = 0; i < 10; i++){
          if(strcmp(curso, criaaluno[i].curso) == 0){
            printf("Nome: %s\n", criaaluno[i].nome);
          }
          
        }
      break;
   }

 }

}