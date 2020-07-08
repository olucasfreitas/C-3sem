#include <stdio.h>
#include <stdlib.h>

struct ponto {
  int x,y;
};

int main(void) {
  struct ponto *posicao = malloc(sizeof(struct ponto));
  struct ponto *posicao2 = malloc(sizeof(struct ponto));
  int matriz[10][10];
  
  printf("Qual a primeira posição?\n");
  scanf("%d", &posicao->x);
  printf("Qual a segunda posição?\n");
  scanf("%d", &posicao->y);
  printf("Qual a terceira posição?\n");
  scanf("%d", &posicao2->x);
  printf("Qual a quarta posição?\n");
  scanf("%d", &posicao2->y);

  int posicaofinal1 = abs(posicao->x - posicao2->x);
  int posicaofinal2 = abs(posicao->y - posicao2->y);
  int distancia = posicaofinal1 + posicaofinal2;

  printf("%d", distancia);


}