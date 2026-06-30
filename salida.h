#ifndef SALIDA_H
#define SALIDA_h

#include <stdio.h>
#include "struct.h"

static inline void salida(struct persona **ptr){
    struct persona *ptrAux;
    struct persona *ptrTemp;
    if(*ptr == NULL){
        printf("No hay datos guardados\n");
    }
    ptrAux = *ptr;
    while(ptrAux != NULL){
        ptrTemp = ptrAux;
        ptrAux = ptrAux->sig;

        free(ptrTemp->ptrAlum);
        free(ptrTemp->nombre);
        free(ptrTemp);
    }
    *ptr= NULL;
    printf("Nodos eliminados\n");
}

#endif
