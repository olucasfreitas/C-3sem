#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

struct livro
{
  int codigo;
  char nome[30];
  char genero[30];
  struct livro *proximo;
  struct livro *anterior;
};

struct Lista
{
  struct livro *primeiro;
  struct livro *ultimo;
  int tamanho;
};

struct Lista *criarLista()
{
  struct Lista *lista;
  lista = (struct Lista *)malloc(sizeof(struct Lista));
  lista->primeiro = NULL;
  lista->ultimo = NULL;
  lista->tamanho = 0;
  return lista;
};

void criaLivro(struct Lista *lista, char *biblioteca[])
{
  int contador = lista->tamanho + 1;
  int l;
  struct livro *novolivro = (struct livro *)malloc(sizeof(struct livro));

  if (lista->primeiro == NULL)
  {
    lista->primeiro = novolivro;
    lista->ultimo = novolivro;
  }

  novolivro->codigo = contador;
  printf("nome: ");
  scanf("%s", novolivro->nome);
  printf("genero: ");
  scanf("%s", novolivro->genero);
  printf("codigo: %d\n", novolivro->codigo);

  FILE *livro;
  char inicial[] = "livro";
  char extensao[] = ".txt";
  char concatena[100];
  snprintf(concatena, 100, "%s%d%s", inicial, contador, extensao);
  livro = fopen(concatena, "w");
  fprintf(livro, "Titulo: %s \n", novolivro->nome);
  fprintf(livro, "Genero: %s \n", novolivro->genero);
  fprintf(livro, "Codigo: %d \n", novolivro->codigo);
  fclose(livro);

  l = strlen(concatena) + 1;
  biblioteca[lista->tamanho] = (char *)malloc(l * sizeof(char));
  strcpy(biblioteca[lista->tamanho], concatena);

  novolivro->proximo = NULL;
  novolivro->anterior = lista->ultimo;
  lista->ultimo->proximo = novolivro;
  lista->ultimo = novolivro;
  lista->tamanho++;
};

void atualizaLivro(struct Lista *lista, char *biblioteca[])
{
  int verifica = 0;
  int codigo;
  struct livro *livroatualizado = (struct livro *)malloc(sizeof(struct livro));
  int cont = lista->tamanho - 1;
  FILE *livro;

  printf("Qual o codigo do livro que vc deseja atualizar?\n");
  scanf("%d", &codigo);

  for (int i = 0; i <= cont; i++)
  {
    if (i == (codigo - 1))
    {
      livro = fopen(biblioteca[i], "w");
      printf("nome: ");
      scanf("%s", livroatualizado->nome);
      printf("genero: ");
      scanf("%s", livroatualizado->genero);
      livroatualizado->codigo = codigo;
      fprintf(livro, "Titulo: %s \n", livroatualizado->nome);
      fprintf(livro, "Genero: %s \n", livroatualizado->genero);
      fprintf(livro, "Codigo: %d \n", livroatualizado->codigo);
      fclose(livro);
      verifica++;
      break;
    }
  }
  if (verifica == 0)
  {
    printf("Livro nao encontrado.\n");
  }
};

void exibeTotalDeLivros(struct Lista *lista)
{
  printf("O total de livros cadastrados e : %d\n", lista->tamanho);
}

void imprimePorCodigo(struct Lista *lista, char *biblioteca[])
{
  int verifica = 0;
  int codigo;
  int cont = lista->tamanho - 1;
  FILE *livro;

  printf("Qual o codigo do livro que voce deseja buscar?\n");
  scanf("%d", &codigo);

  for (int i = 0; i <= cont; i++)
  {
    if (i == (codigo - 1))
    {
      livro = fopen(biblioteca[i], "r");
      char temp[100];
      while (fgets(temp, 100, livro) != NULL)
      {
        printf("%s", temp);
      }
      verifica++;
      break;
    }
  }
  if (verifica == 0)
  {
    printf("Livro nao encontrado.\n");
  }
};


int main(void)
{
  int opcao;

  int finish = 0;

  struct Lista *lista = criarLista();
  char *biblioteca[10];

  printf("1) Adicionar novo livro\n");
  printf("2) Atualizar dados de um livro\n");
  printf("3) Exibir total de livros cadastrados\n");
  printf("4) Buscar informacoes de um livro pelo codigo\n");
  printf("5) Encerrar o programa \n");

  while (finish == 0)
  {

    printf("\nO que voce deseja fazer?\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      criaLivro(lista, biblioteca);
      break;
    case 2:
      atualizaLivro(lista, biblioteca);
      break;
    case 3:
      exibeTotalDeLivros(lista);
      break;
    case 4:
      imprimePorCodigo(lista, biblioteca);
      break;
    case 5:
      finish = 1;
      printf("Programa encerrado\n");
      break;
    }
  }
}