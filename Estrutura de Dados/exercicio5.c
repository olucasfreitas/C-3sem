#include <stdio.h>
#include <stdlib.h>

struct pilha
{
  int capacidade;
  float *data;
  int primeiro;
  int ultimo;
  int its;
};

int tamanho;

void criarpilha(struct pilha *f, int c)
{

  f->capacidade = c;
  f->data = (float *)malloc(f->capacidade * sizeof(float));
  f->primeiro = 0;
  f->ultimo = -1;
  f->its = 0;
}

void inserir(struct pilha *f, int v)
{

  if (f->ultimo == f->capacidade - 1)
    f->ultimo = -1;

  f->ultimo++;
  f->data[f->ultimo] = v;
  f->its++;
  tamanho++;
}

int remover(struct pilha *f)
{

  int temp = f->data[f->ultimo++];

  if (f->ultimo == f->capacidade)
    f->ultimo = 0;

  f->its--;
  return temp;
}

int vazia(struct pilha *f)
{
  return (f->its == 0);
}

int cheia(struct pilha *f)
{
  return (f->its == f->capacidade);
}

void mostrar(struct pilha *f)
{
  int contador, i;
  for (contador = 0, i = f->primeiro; contador < f->its; contador++)
  {
    printf("%1.f ", f->data[i++]);
    if (i == f->capacidade)
      i = 0;
  }
  printf("\n\n");
}
void main()
{
  int opcao, cap;
  float valor;
  struct pilha pilha;

  printf("\nCapacidade da pilha? ");
  scanf("%d", &cap);
  criarpilha(&pilha, cap);

  while (1)
  {
    printf("\n1 - Inserir elemento na pilha");
    printf("\n2 - Remover ultimo elemento inserido na pilha");
    printf("\n3 - Mostrar tamanho da pilha");
    printf("\n4 - Mostrar pilha completa");
    printf("\n0 - Sair");
    printf("\n\nOpcao? ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 0:
      exit(0);
    case 1:
      if (cheia(&pilha))
      {
        printf("\npilha Cheia!!!\n\n");
      }
      else
      {
        printf("\nElemento a ser inserido na pilha? ");
        scanf("%f", &valor);
        inserir(&pilha, valor);
      }
      break;
    case 2:
      if (vazia(&pilha))
      {
        printf("\npilha vazia!!!\n\n");
      }
      else
      {
        valor = remover(&pilha);
        printf("\n%1.f removido\n\n", valor);
      }
      break;
    case 3:
      printf("\n\n%d", tamanho);
      break;
    case 4:
      if (vazia(&pilha))
      {
        printf("\npilha vazia!!!\n\n");
      }
      else
      {
        printf("\n\n");
        mostrar(&pilha);
      }
      break;
    }
  }
}