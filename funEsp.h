#ifndef FUNESP_H
#define FUNESP_H

#include <stdio.h>
#include "struct.h"
#include "menu.h"
#include "modificar.h"
#include "calificaciones.h"

static inline void funEsp(struct persona **ptr){
    int op;

    do{
        op=menuFe();
        switch(op){
            case 1:
                modificar(*ptr);
                break;
            case 2:
                calificaciones(*ptr);
                break;
            case 0:
                printf("Hasta luego.\n");
                break;
            default:
                printf("Opcion no valida\n");
        }

    }while(op!=0);
}

#endif
