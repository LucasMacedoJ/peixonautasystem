#include "../include/menus.h"
#include "../include/listas.h"

int main(){
    controle_lista_peixes_t lista_peixes;
    controle_lista_clientes_t lista_clientes;
    controle_lista_vendas_t lista_vendas;

    inicializar_lista_peixes(&lista_peixes);
    inicializar_lista_clientes(&lista_clientes);
    inicializar_lista_vendas(&lista_vendas);

    int opc_principal, opc_cliente, opc_vendas, opc_estoque;

    do {
        opc_principal = menu_principal();

        switch (opc_principal){
            case 1: opc_estoque = menu_estoque();
                    do{ 
                        switch (opc_estoque){
                            case 1:break;
                            case 2:break;
                            case 3:break;
                            case 4:break;
                            case 5:break;
                        }
                    }while(opc_estoque != 0);
                    break;

            case 2: opc_cliente = menu_clientes();
                    do{
                        switch (opc_cliente){
                            case 1:break;
                            case 2:break;
                            case 3:break;
                            case 4:break;
                            case 5:break;
                        }
                    }while(opc_cliente != 0);
                    break;
            case 3: opc_vendas = menu_vendas();
                    do{
                        switch (opc_vendas){
                            case 1:break;
                            case 2:break;
                            case 3:break;
                            case 4:break;
                            case 5:break;
                        }
                    }while(opc_vendas != 0);
                    break;
        }

    }while(opc_principal != 0);
    return 0;
}