#include <stdio.h>
#include <stdlib.h>

struct No{
  int valor;
  struct No *proximo;
  int indice;
};

void insereOrdenado(struct No * cabeca, int novoValor){
  
  struct No * novoNo = (struct No *) malloc(sizeof(struct No));
  novoNo->valor = novoValor;

  if(cabeca->proximo == NULL){
    cabeca->proximo = novoNo;
  }
  else{
    struct No * noAuxiliar = cabeca->proximo;
    if(noAuxiliar->valor > novoValor){
      novoNo->proximo = noAuxiliar;
      cabeca->proximo = novoNo;
      return;
    }
    while(noAuxiliar->proximo != NULL){
       if(noAuxiliar->proximo->valor > novoValor){
         novoNo->proximo = noAuxiliar->proximo;
         noAuxiliar->proximo = novoNo;
         return;
       }
       noAuxiliar = noAuxiliar->proximo;
    }
    noAuxiliar->proximo = novoNo;
  }
}

int getElemento(struct No * cabeca){
  struct No *noAuxiliar = cabeca->proximo;
  int cont1;
  printf("Qual o indice?\n");
  scanf("%d", &cont1);
  while (noAuxiliar != NULL)
  {
    if (cont1 == noAuxiliar->indice)
    {
      printf("Valor Recuperado: %d \n", noAuxiliar->valor);
    }
    noAuxiliar = noAuxiliar->proximo;
  }
  return 0;
}

void imprimeLista(struct No * cabeca){
  struct No *noAuxiliar = cabeca->proximo;
  int cont = 0;
  while(noAuxiliar != NULL){
    noAuxiliar->indice = cont++;
    printf("Valor: %d Indice: %d\n", noAuxiliar->valor, noAuxiliar->indice);
    noAuxiliar = noAuxiliar->proximo;
  }
}

int main(void) {
  struct No * cabeca = (struct No *) malloc(sizeof(struct No));
  insereOrdenado(cabeca, 5);
  insereOrdenado(cabeca, 3);
  insereOrdenado(cabeca, 6);
  insereOrdenado(cabeca, 1);
  insereOrdenado(cabeca, 9);
  insereOrdenado(cabeca, 4);
  insereOrdenado(cabeca, 2);
  imprimeLista(cabeca);
  getElemento(cabeca);
  return 0;
}