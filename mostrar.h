#ifndef ALTAS_H
#define ALTAS_H

#include <stdio.h>
#include "struct.h"
#include "menu.h"

static inline void mostrar(struct persona **ptr){
    struct persona *ptrAux = *ptr;
    int op;

    do{
        op=menuMostrar();

        switch(op){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
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

#endif
