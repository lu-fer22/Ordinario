#ifndef BAJAS_H
#define BAJAS_h

#include <stdio.h>
#include "struct.h"
#include "menu.h"

static inline void bajas(struct persona **ptr){
    int op;
    char opc;
    struct persona *ptrAux;
    struct persona *ptrTemp;
    do{
        op=menuBajas();
        switch(op){
            case 1:
                if(*ptr==NULL)
                    printf("No hay datos guardados\n");
                else{
                    if((*ptr)->sig==NULL){
                        free((*ptr)->ptrAlum);
                        free((*ptr)->nombre); 
                        free(*ptr);
                        *ptr=NULL;
                        printf("Eliminado\n");
                    }else{
                        ptrAux=*ptr;
                        while(ptrAux->sig->sig != NULL){
                            ptrAux = ptrAux->sig;
                        }
                        free((ptrAux->sig)->ptrAlum);
                        free((ptrAux->sig)->nombre); 
                        free(ptrAux->sig);
                        ptrAux->sig = NULL;
                        printf("Eliminado\n");
                    }
                }
                break;
            case 2:
                do{
                    if(*ptr==NULL)
                        printf("No hay datos guardados\n");
                    else{
                        if((*ptr)->sig==NULL){
                            free((*ptr)->ptrAlum);
                            free((*ptr)->nombre); 
                            free(*ptr);
                            *ptr=NULL;
                            printf("Eliminado\n");
                        }else{
                            ptrAux=*ptr;
                            while(ptrAux->sig->sig != NULL){
                                ptrAux = ptrAux->sig;
                            }
                            free((ptrAux->sig)->ptrAlum);
                            free((ptrAux->sig)->nombre); 
                            free(ptrAux->sig);
                            ptrAux->sig = NULL;
                            printf("Eliminado\n");
                        }
                    }
                    printf("Desea dar de baja a otra persona (s/n)?");
                    scanf(" %c", &opc);
                }while(opc == 's' || opc == 'S');
                break;
            case 3:
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
