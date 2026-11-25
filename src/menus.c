#include "../include/menus.h"
#include <stdio.h>

int menu_principal(){
    int opc;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPeixonautaSystem Versao 00.113b0\n");
    printf("----------------------------------\n\n");
    printf("1.Estoque\n");
    printf("2.Clientes\n");
    printf("3.Vendas\n");
    printf("0.Sair\n");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("? ");

    scanf("%i", &opc);
    getchar();
    return opc;
}

int menu_estoque(){
    int opc;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEstoque\n");
    printf("----------------------------------\n\n");
    printf("1.Incluir item\n");
    printf("2.Excluir item\n");
    printf("3.Consultar item por especie\n");
    printf("4.Listar itens em estoque\n");
    printf("5.Listar itens com estoque abaixo de um valor\n");
    printf("0.Sair para o menu principal\n");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("? ");

    scanf("%i", &opc);
    getchar();
    return opc;
}

int menu_clientes(){
    int opc;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nClientes\n");
    printf("----------------------------------\n\n");
    printf("1.Incluir novo cliente\n");
    printf("2.Exluir cliente\n");
    printf("3.Listar clientes cadastrados\n");
    printf("4.Colsultar clientes por nome\n");
    printf("5.Listar clientes ativos\n");
    printf("0.Sair para o menu principal\n");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("? ");

    scanf("%i", &opc);
    getchar();
    return opc;
}

int menu_vendas(){
    int opc;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nVendas\n");
    printf("----------------------------------\n\n");
    printf("1.Incluir nova venda\n");
    printf("2.Listar vendas por cliente\n");
    printf("3.Listar todas as vendas\n");
    printf("4.Consultar vendas por especie\n");
    printf("0.Sair para o menu principal\n");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("? ");

    scanf("%i", &opc);
    getchar();
    return opc;
}