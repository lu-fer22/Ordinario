#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "altas.h"
#include "struct.h"
#include "bajas.h"
#include "mostrar.h"

int main(void){
    int op;
    struct persona *ptr=NULL;
    srand(time(NULL));

    do{
        op=menuPrincipal();

        switch(op){
            case 1: 
                altas(&ptr);
                break;
            case 2:
                bajas(&ptr);
                break;
            case 3:
                break;
            case 0:
                printf("Hasta luego.\n");
                break;
            default: 
                printf("Opcion no valida\n");
                break;
        }
    }while(op!=0);
}
