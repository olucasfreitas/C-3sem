#include <stdio.h>
#include <stdlib.h>
#define NUMERO_MAX 10

void quick_sort(int *a, int esquerda, int direita) {
    int i, j, x, y;
     
    i = esquerda;
    j = direita;
    x = a[(esquerda + direita) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < direita) {
            i++;
        }
        while(a[j] > x && j > esquerda) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esquerda) {
        quick_sort(a, esquerda, j);
    }
    if(i < direita) {
        quick_sort(a, i, direita);
    }
}

int main(int argc, char** argv)
{
 int contador, vetor[NUMERO_MAX];
 for(contador = 0; contador < NUMERO_MAX; contador++)
 {
  printf("Digite o valor: ");
  scanf("%d", &vetor[contador]);
 }
 quick_sort(vetor, 0, NUMERO_MAX - 1);
 printf("Valores na ordem\n");
 for(contador = 0; contador < NUMERO_MAX; contador++)
 {
  printf("%d\n", vetor[contador]);
 }
 return 0;
}
