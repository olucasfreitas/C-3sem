#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

struct Filme
{
    int codigo;
    int ano;
    char nome[30];
    char genero[30];
    struct Filme *proximo;
    struct Filme *anterior;
};

struct Lista
{
    struct Filme *primeiro;
    struct Filme *ultimo;
    int tamanho;
};

struct Lista *criarLista()
{
    struct Lista *lista;
    lista = malloc(sizeof(struct Lista));
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    lista->tamanho = 0;
    return lista;
};

void insereNaLista(struct Lista *lista, int codInicial)
{
    struct Filme *novoFilme = malloc(sizeof(struct Filme));

    if (lista->primeiro == NULL)
    {
        novoFilme->codigo = codInicial;
        lista->primeiro = novoFilme;
        lista->ultimo = novoFilme;
    }
    else
    {
        novoFilme->codigo = codInicial;
    }

    printf("nome: ");
    scanf("%s", novoFilme->nome);
    printf("genero: ");
    scanf("%s", novoFilme->genero);
    printf("ano: ");
    scanf("%d", &novoFilme->ano);
    novoFilme->proximo = NULL;
    novoFilme->anterior = lista->ultimo;
    lista->ultimo->proximo = novoFilme;
    lista->ultimo = novoFilme;
    lista->tamanho++;
};

void removeFilme(struct Lista *lista, struct Filme *filme)
{
    if (lista->tamanho == 1)
    {
        free(lista->primeiro);
        lista->primeiro = NULL;
        lista->ultimo = NULL;
        lista->tamanho = 0;
    }
    else
    {
        lista->ultimo = filme->anterior;
        filme->anterior->proximo = NULL;
        lista->tamanho--;
    }
};

void AtualizaFilme(struct Filme *filme)
{
    int verifica = 0;
    int codigo;

    printf("Qual o codigo do filme que vc deseja atualizar?");
    scanf("%d", &codigo);

    while (filme != NULL)
    {
        if (filme->codigo == codigo)
        {
            printf("Novo nome:");
            scanf("%s", filme->nome);
            printf("Novo genero:");
            scanf("%s", filme->genero);
            printf("Novo ano:");
            scanf("%d", &filme->ano);
            verifica = 1;
            break;
        }
        else
        {
            filme = filme->proximo;
        }
    }
    if (verifica == 0)
    {
        printf("\nFilme não encontrado\n");
    }
};

void exibeTotalLista(struct Lista *lista)
{
    printf("%d\n", lista->tamanho);
}

void exibeTotalPorGenero(struct Filme *filme)
{
    char genero[30];
    int cont = 0;

    printf("Qual o genero que voce deseja saber o total? ");
    scanf("%s", genero);

    while (filme != NULL)
    {
        if (strcmp(filme->genero, genero) == 0)
        {
            cont++;
        }
        filme = filme->proximo;
    }
    printf("O total de filmes com esse genero e: %d\n", cont);
};

void imprimePorCodigo(struct Filme *filme)
{
    int cod;
    int validacao = 0;

    printf("Codigo: ");
    scanf("%d", &cod);
    while (filme != NULL)
    {
        if (filme->codigo == cod)
        {
            printf("\n");
            printf("Codigo: %d\n", filme->codigo);
            printf("Ano: %d\n", filme->ano);
            printf("Nome: %s\n", filme->nome);
            printf("Genero: %s\n", filme->genero);
            printf("\n");
            validacao = 1;
            break;
        }
        else
        {
            filme = filme->proximo;
        }
    }
    if (validacao == 0)
    {
        printf("Filme não encontrado\n");
    }
}

void imprimePorGenero(struct Filme *filme)
{
    char genero[30];
    int validacao = 0;

    printf("Genero: ");
    scanf("%s", genero);

    while (filme != NULL)
    {

        if (strcmp(filme->genero, genero) == 0)
        {
            printf("\nCodigo: %d\n", filme->codigo);
            printf("Nome: %s\n", filme->nome);
            printf("Genero: %s\n", filme->genero);
            printf("Ano: %d\n", filme->ano);
            validacao++;
        }
        filme = filme->proximo;
    }

    if (validacao == 0)
    {
        printf("\nNao foram encontrados filmes com esse genero\n");
    }
};

void exibeFilmeMaisAntigo(struct Filme *filme)
{
    int ano = filme->ano;
    struct Filme *filmeMaisAntigo = malloc(sizeof(struct Filme));
    filmeMaisAntigo = filme;

    while (filme != NULL)
    {
        if (ano > filme->ano)
        {
            ano = filme->ano;
            filmeMaisAntigo = filme;
        }
        filme = filme->proximo;
    }

    printf("O filme mais antigo e %s de %d com codigo %d\n", filmeMaisAntigo->nome, filmeMaisAntigo->ano, filmeMaisAntigo->codigo);
}


int main(void)
{
    int opcao;
    int codInicial;
    int finish = 0;

    struct Lista *lista = criarLista();
    srand(time(NULL));

    codInicial = (rand() % 1000000) - 1;

    printf("1) Adicionar novo filme\n");
    printf("2) Remover filme\n");
    printf("3) Atualizar filme\n");
    printf("4) Exibir total de filmes cadastrados\n");
    printf("5) Exibir total de filmes de determinado genero\n");
    printf("6) Buscar informacoes de filme pelo codigo\n");
    printf("7) Buscar informacoes de filme pelo genero\n");
    printf("8) Exibir filme mais antigo\n");
    printf("9) Encerrar o programa \n");

    while (finish == 0)
    {

        printf("\nO que voce deseja fazer?");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            insereNaLista(lista, codInicial);
            codInicial = codInicial + 1;
            break;
        case 2:
            removeFilme(lista, lista->ultimo);
            break;
        case 3:
            AtualizaFilme(lista->primeiro);
            break;
        case 4:
            exibeTotalLista(lista);
            break;
        case 5:
            exibeTotalPorGenero(lista->primeiro);
            break;
        case 6:
            imprimePorCodigo(lista->primeiro);
            break;
        case 7:
            imprimePorGenero(lista->primeiro);
            break;
        case 8:
            exibeFilmeMaisAntigo(lista->primeiro);
            break;
        case 9:
            finish = 1;
            printf("Programa encerrado");
            break;
        }
    }
}