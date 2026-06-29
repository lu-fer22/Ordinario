#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include "struct.h"

static inline int menuPrincipal() {
    int op;
    printf("Seleccione una opcion: \n");
    printf("1.- Altas\n");
    printf("2.- Bajas\n");
    printf("3.- Mostrar\n");
    printf("4.- Funciones Especiales\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuAltas(){
    int op;
    printf("\nALTAS\n");
    printf("1.- Una persona\n");
    printf("2.- Varias personas\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}



#endif
