#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int qtdtotalprodutos = 0;
int qtdtotal = 0;
float precototal = 0;
float precototalcompra = 0;
int produtoadicionado;
int qtdcompra = 0;
int qtdalcool = 0;
int qtdverdeleg = 0;
int contador = 0;
int final = 0;
int escolha;

float **criaCarrinho()
{
    float **Carrinho;
    Carrinho = (float **)malloc(3 * sizeof(float));
    Carrinho[0] = (float *)malloc(45 * sizeof(float));
    Carrinho[1] = (float *)malloc(45 * sizeof(float));
    Carrinho[2] = (float *)malloc(45 * sizeof(float));
    return Carrinho;
}

char **criaListadeCompras()
{
    char **ListaDeCompras;
    ListaDeCompras = (char **)malloc(45 * sizeof(char));
    for (int i = 0; i < 1; i++)
    {
        ListaDeCompras[i] = (char *)malloc(45 * sizeof(char));
    }
    return ListaDeCompras;
}

void adicionar_produto(float **Carrinho, char **ListaDeCompras)
{
    switch (produtoadicionado)
    {
    case 1:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Banana";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 4;
            if (qtdcompra > 10)
            {
                precototalcompra = (qtdcompra * 4) * 0.95;
                printf("Voce comprou mais de 10 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 4;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 2:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Maca";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 1;
            if (qtdcompra > 10)
            {
                precototalcompra = (qtdcompra * 1) * 0.95;
                printf("Voce comprou mais de 10 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 1;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 3:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Uva";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 2;
            if (qtdcompra > 10)
            {
                precototalcompra = (qtdcompra * 2) * 0.95;
                printf("Voce comprou mais de 10 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 2;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 4:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Alface";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 1;
            if (qtdcompra > 8)
            {
                precototalcompra = (qtdcompra * 1) * 0.93;
                printf("Voce comprou mais de 8 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 1;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 5:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Couve";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 3;
            if (qtdcompra > 8)
            {
                precototalcompra = (qtdcompra * 3) * 0.93;
                printf("Voce comprou mais de 8 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 3;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 6:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Brocolis";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 4;
            if (qtdcompra > 8)
            {
                precototalcompra = (qtdcompra * 4) * 0.93;
                printf("Voce comprou mais de 8 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 4;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 7:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Espinafre";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 7;
            if (qtdcompra > 8)
            {
                precototalcompra = (qtdcompra * 7) * 0.93;
                printf("Voce comprou mais de 8 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 7;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 8:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Pepino";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 9;
            if (qtdcompra > 8)
            {
                precototalcompra = (qtdcompra * 9) * 0.93;
                printf("Voce comprou mais de 8 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 9;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 9:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Acelga";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 3;
            if (qtdcompra > 8)
            {
                precototalcompra = (qtdcompra * 3) * 0.93;
                printf("Voce comprou mais de 8 itens, promocao aplicada\n");
            }
            else
            {
                precototalcompra = qtdcompra * 3;
            }
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        break;
    case 10:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Sardinha";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 10;
            precototalcompra = (qtdcompra * 10) * 0.90;
            printf("Dia do peixe, promocao aplicada\n");
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 11:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Salmao";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 80;
            precototalcompra = (qtdcompra * 80) * 0.90;
            printf("Dia do peixe, promocao aplicada\n");
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 12:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Bacalhau";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 55;
            precototalcompra = (qtdcompra * 55) * 0.90;
            printf("Dia do peixe, promocao aplicada\n");
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 13:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Picanha";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 40;
            precototalcompra = qtdcompra * 40;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 14:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Fraldinha";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 20;
            precototalcompra = qtdcompra * 20;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 15:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Maminha";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 30;
            precototalcompra = qtdcompra * 30;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 16:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Asinhas de Frango";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 15;
            precototalcompra = qtdcompra * 15;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 17:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Coxas de Frango";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 20;
            precototalcompra = qtdcompra * 20;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 18:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Frango inteiro";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 35;
            precototalcompra = qtdcompra * 35;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 19:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Sorvete";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 20;
            precototalcompra = qtdcompra * 20;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 20:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Nuggets";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 15;
            precototalcompra = qtdcompra * 15;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 21:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Polpa de Suco";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 8;
            precototalcompra = qtdcompra * 8;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 22:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Guarana";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 6;
            precototalcompra = qtdcompra * 6;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 23:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Coca-Cola";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 9;
            precototalcompra = qtdcompra * 9;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 24:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Bare";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 5;
            precototalcompra = qtdcompra * 5;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 25:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Heineken";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 5;

            int divisao = floor(qtdcompra / 6);
            qtdcompra = qtdcompra - divisao;
            if (divisao > 0)
            {
                printf("Promocao aplicada!");
            }
            precototalcompra = qtdcompra * 5;

            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 26:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Absolute";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 50;

            int divisao = floor(qtdcompra / 6);
            qtdcompra = qtdcompra - divisao;
            if (divisao > 0)
            {
                printf("Promocao aplicada!");
            }
            precototalcompra = qtdcompra * 50;

            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 27:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Buchudinha";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 1;

            int divisao = floor(qtdcompra / 6);
            qtdcompra = qtdcompra - divisao;
            if (divisao > 0)
            {
                printf("Promocao aplicada!");
            }
            precototalcompra = qtdcompra * 1;

            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 28:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Sonho";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 4;
            precototalcompra = qtdcompra * 4;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 29:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Coxinha";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 4;
            precototalcompra = qtdcompra * 4;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    case 30:
        if (qtdtotalprodutos + qtdcompra <= 45)
        {
            ListaDeCompras[contador] = "Pastel de Flango";
            qtdtotalprodutos += qtdcompra;
            Carrinho[0][contador] = qtdcompra;
            Carrinho[1][contador] = 8;
            precototalcompra = qtdcompra * 8;
            precototal += precototalcompra;
            Carrinho[2][contador] = precototalcompra;
            printf("Compra realizada!\n");
            contador += 1;
        }
        else
        {
            printf("Compra acima do limite do carrinho\n");
        }
        break;
    }
}

void listafinal(float **Carrinho, char **ListaDeCompras)
{
    for (int i = 0; i < contador; i++)
    {
        printf("\nItem:%s\nQuantidade:%.2fValor unitario:%.2fValor da compra:%.2f\n", ListaDeCompras[i], Carrinho[0][i], Carrinho[1][i], Carrinho[2][i]);
    }

    if (precototal < 75)
    {
        precototal += 7;
    }
    else
    {
        printf("Compra acima de 75 reais, frete gratis");
    }

    printf("\nPreco final: %.2f\n", precototal);
    printf("Obrigado pela compra!");
}

int main(void)
{
    int frete = 7;
    float **carrinho = criaCarrinho();
    char **lista = criaListadeCompras();
    printf("\nSeja bem vindo ao supermercado!\n");
    while (final == 0)
    {
        printf("1 - adicionar item\n");
        printf("2 - listar produtos\n");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            printf("Vamos dividir o menu nas seguintes secoes:\n");
            printf("Frutas\n");
            printf("  1. Banana R$4\n");
            printf("  2. Maca R$1\n");
            printf("  3. Uva R$2\n");
            printf("\n");

            printf("Verduras\n");
            printf("  4. Alface R$1\n");
            printf("  5. Couve R$3\n");
            printf("  6. Brócolis R$4\n");
            printf("\n");

            printf("Legumes\n");
            printf("  7. Espinafre R$7\n");
            printf("  8. Pepino R$9\n");
            printf("  9. Acelga R$3\n");
            printf("\n");

            printf("Proteinas\n");
            printf("  Peixe\n");
            printf("     10. Sardinha R$10\n");
            printf("     11. Salmão R$80\n");
            printf("     12. Bacalhau R$55\n");
            printf("  Carne\n");
            printf("     13. Picanha R$40\n");
            printf("     14. Fraldinha R$20\n");
            printf("     15. Maminha R$30\n");
            printf("  Frango\n");
            printf("     16. Asinhas de Frango R$15\n");
            printf("     17. Coxas de Frango R$20\n");
            printf("     18. Frango inteiro R$35\n");
            printf("\n");

            printf("Congelados\n");
            printf("  19. Sorvete R20\n");
            printf("  20. Nuggets R$15\n");
            printf("  21. Polpa de Suco R$8\n");
            printf("\n");

            printf("Bebidas\n");
            printf("  22. Guarana R$6\n");
            printf("  23. Coca-Cola R$9\n");
            printf("  24. Baré R$5 \n");
            printf("\n");

            printf("Bebidas alcoolicas\n");
            printf("  25. Heineken R$5\n");
            printf("  26. Absolute R$50\n");
            printf("  27. Buchudinha R$1\n");
            printf("\n");

            printf("Panificadora\n");
            printf("  28. Sonho R$4\n");
            printf("  29. Coxinha R$4\n");
            printf("  30. Pastel de Flango R$8\n");

            printf("\n");

            printf("\nItens no carrinho: %d\n", qtdtotalprodutos);
            printf("Qual produto você deseja adicionar ao seu carrinho?\n");
            scanf("%d", &produtoadicionado);
            printf("Qual a quantidade?\n");
            scanf("%d", &qtdcompra);
            adicionar_produto(carrinho, lista);
            break;
        case 2:
            listafinal(carrinho, lista);
            final = 1;
            break;
        }
    }
}