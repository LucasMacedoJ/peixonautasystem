#ifndef TIPOS_H
#define TIPOS_H

#include <stdbool.h>
#include <stdint.h>

#define T_STR 100

typedef char string[T_STR];
    
//fish

typedef struct peixe{
    uint8_t id;
    string especie;
    float qtd_estq; //kg
    float val_unit; //kg
} peixe_t;

//client

typedef struct cliente{
    uint8_t id;
    string nome;
    string telefone;
    bool status;
} cliente_t;

//sales

typedef struct venda{
    uint8_t id;
    uint8_t id_cliente;
    float qtd;
    float custo;
} venda_t;

//node fish

typedef struct node_peixe{
    peixe_t peixe;
    struct no_peixe *prox;

} no_peixe_t;

//node client

typedef struct no_cliente{
    cliente_t cliente;
    struct no_cliente *prox;
} no_cliente_t;

//node sale

typedef struct no_venda{
    venda_t venda;
    struct no_venda *prox;
} no_venda_t;

//control of fish list
typedef struct controle_lista_peixes{
    no_peixe_t *primeiro;
    no_peixe_t *ultimo;
} controle_lista_peixes_t;

//control of client list
typedef struct controle_lista_clientes{
    no_cliente_t *primeiro;
    no_cliente_t *ultimo;
} controle_lista_clientes_t;

//control of sales list
typedef struct controle_lista_vendas{
    no_venda_t *primeiro;
    no_venda_t *ultimo;
} controle_lista_vendas_t;
#endif