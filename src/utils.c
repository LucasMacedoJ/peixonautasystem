#include "../include/utils.h"
#include <string.h>
#include <ctype.h>

void limpar_tela(){
    system("clear");
}

void formatar_maiuscula(char *str){
    for(int i = 0; i < strlen(str); i++){
        *(str+i) = toupper(*(str+i));
    }
}

void retirar_enter(char *str){
    *(str+(strlen(str))-1) = '\0';
}