#include <stdio.h>
#include <stdlib.h>

char vet1[10][20];
char vet2[10][20];
int pos1;
int pos2;

void iniciodev()
{
    int conthash = 0;
    while (conthash < 50)
    {
        int aleatorio1 = rand() % 10;
        int aleatorio2 = rand() % 20;
        if ((aleatorio1 != pos1 && aleatorio2 != pos2) && vet1[aleatorio1][aleatorio2] != '#')
        {
            vet1[aleatorio1][aleatorio2] = '#';
            conthash++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (i == pos1 && j == pos2)
            {
                vet1[i][j] = 'X';
            }
            else if (vet1[i][j] != '#')
            {
                vet1[i][j] = '1';
            }
        }
    }
}

void inicio()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (i == pos1 && j == pos2)
            {
                vet2[i][j] = 'X';
            }
            else
            {
                vet2[i][j] = '0';
            }
        }
    }
}

void movimentN(qtd)
{
    int err = 0;
    int suc = 0;
    while (qtd > 0)
    {
        if (pos1 != 0)
        {
            if (vet1[pos1 - 1][pos2] != '#')
            {
                vet2[pos1][pos2] = '1';
                vet2[pos1 - 1][pos2] = 'X';
                if (qtd == 1)
                {
                    suc = 1;
                }
                pos1 -= 1;
            }
            else
            {
                vet2[pos1][pos2] = 'X';
                vet2[pos1 - 1][pos2] = '#';
                err = 1;
                break;
            }
        }
        else
        {
            vet2[pos1][pos2] = 'X';
            err = 1;
            break;
        }
        qtd--;
    }

    if (err == 1)
    {
        printf("Failed!\n");
    }
    if (suc == 1)
    {
        printf("Success!\n");
    }
}

void movimentS(qtd)
{
    int err = 0;
    int suc = 0;
    while (qtd > 0)
    {
        if (pos1 != 9)
        {
            if (vet1[pos1 + 1][pos2] != '#')
            {
                vet2[pos1][pos2] = '1';
                vet2[pos1 + 1][pos2] = 'X';
                if (qtd == 1)
                {
                    suc = 1;
                }
                pos1 += 1;
            }
            else
            {
                vet2[pos1][pos2] = 'X';
                vet2[pos1 + 1][pos2] = '#';
                err = 1;
                break;
            }
        }
        else
        {
            vet2[pos1][pos2] = 'X';
            err = 1;
            break;
        }
        qtd--;
    }

    if (err == 1)
    {
        printf("Failed!\n");
    }
    if (suc == 1)
    {
        printf("Success!\n");
    }
}

void movimentO(qtd)
{
    int err = 0;
    int suc = 0;
    while (qtd > 0)
    {
        if (pos2 != 0)
        {
            if (vet1[pos1][pos2 - 1] != '#')
            {
                vet2[pos1][pos2] = '1';
                vet2[pos1][pos2 - 1] = 'X';
                if (qtd == 1)
                {
                    suc = 1;
                }
                pos2 -= 1;
            }
            else
            {
                vet2[pos1][pos2] = 'X';
                vet2[pos1][pos2 - 1] = '#';
                err = 1;
                break;
            }
        }
        else
        {
            vet2[pos1][pos2] = 'X';
            err = 1;
            break;
        }
        qtd--;
    }

    if (err == 1)
    {
        printf("Failed!\n");
    }
    if (suc == 1)
    {
        printf("Success!\n");
    }
}

void movimentL(qtd)
{
    int err = 0;
    int suc = 0;
    while (qtd > 0)
    {
        if (pos2 != 19)
        {
            if (vet1[pos1][pos2 + 1] != '#')
            {
                vet2[pos1][pos2] = '1';
                vet2[pos1][pos2 + 1] = 'X';
                if (qtd == 1)
                {
                    suc = 1;
                }
                pos2 += 1;
            }
            else
            {
                vet2[pos1][pos2] = 'X';
                vet2[pos1][pos2 + 1] = '#';
                err = 1;
                break;
            }
        }
        else
        {
            vet2[pos1][pos2] = 'X';
            err = 1;
            break;
        }
        qtd--;
    }

    if (err == 1)
    {
        printf("Failed!\n");
    }
    if (suc == 1)
    {
        printf("Success!\n");
    }
}

void imprime()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            printf("%c", vet2[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    char mov;
    int qtd;
    srand(time(NULL));
    pos1 = rand() % 10;
    pos2 = rand() % 20;
    printf("Bem vindo a sonda espacial!\n\n");
    iniciodev();
    inicio();

    for (;;)
    {
        printf("Escolha um comando: \n");
        scanf("%s %d", &mov, &qtd);

        switch (mov)
        {
        case 'N':
            movimentN(qtd);
            break;
        case 'S':
            movimentS(qtd);
            break;
        case 'O':
            movimentO(qtd);
            break;
        case 'L':
            movimentL(qtd);
            break;
        case '0':
            imprime();
        }
        printf("\n");
    }
}