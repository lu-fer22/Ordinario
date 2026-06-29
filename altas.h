#ifndef ALTAS_H
#define ALTAS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "struct.h"
#include "menu.h"

static inline struct persona *nuevaPersona(void){
    struct persona *ptrTemp=NULL;
    ptrTemp = (struct persona *) malloc(sizeof(struct persona));

    if(ptrTemp==NULL){
        printf("No se reservo memoria\n");
        return NULL;
    }else{
        ptrTemp->nombre = malloc(50 * sizeof(char));
        printf("Nombre: ");
        scanf("%49s", ptrTemp->nombre);
        printf("Edad: ");
        scanf("%d", &ptrTemp->edad);
        printf("Genero(f/m): ");
        scanf(" %c", &ptrTemp->genero);
        printf("Fecha de nacimiento: ");
        scanf("%7s", ptrTemp->fn);
        ptrTemp->sig=NULL;
        
        return ptrTemp;
    }
}

static inline struct alumno *nuevaAlumno(void){
    struct alumno *ptrTemp=NULL;
    ptrTemp = (struct alumno *) malloc(sizeof(struct alumno));

    if(ptrTemp==NULL){
        printf("No se reservo memoria\n");
        return NULL;
    }else{
        printf("Matricula: ");
        scanf("%9s", ptrTemp->matricula);
        printf("Carrera: \n");
        printf("D.S, I.F, L.B, C.A, L.A.T:\n");
        scanf("%4s", ptrTemp->carrera);
        printf("Semestre: ");
        scanf("%d", &ptrTemp->semestre);
        printf("Correo: ");
        scanf("%22s", ptrTemp->correo);
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                ptrTemp->calif[i][j] = (rand() % 101) / 10.0;
            }
        }
        
        return ptrTemp;
    }
}

static inline void altas(struct persona **ptr){
    struct persona *ptrTemp;
    struct persona *ptrAux;
    struct alumno *ptrTempA;
    int op;

    do{
        op=menuAltas();

        switch(op){
            case 1: 
                ptrTemp = nuevaPersona();
                ptrTempA = nuevaAlumno();
                if(ptrTemp == NULL){        
                    printf("No se creo el nuevo dato\n");
                }
                else{
                    if(ptrTempA == NULL){
                        printf("No se creo el alumno\n");
                        free(ptrTemp->nombre);
                        free(ptrTemp);
                    }
                    else{
                        ptrTemp->ptrAlum = ptrTempA;

                        ptrTemp->sig = NULL;

                        if(*ptr == NULL)
                            *ptr = ptrTemp;
                        else{
                            ptrAux = *ptr;
                            while(ptrAux->sig != NULL){
                                ptrAux = ptrAux->sig;
                            }
                            ptrAux->sig = ptrTemp;
                        }
                    }
                }
                break;
            case 2:
                char opc;
                do{
                    ptrTemp = nuevaPersona();
                    ptrTempA = nuevaAlumno();

                    if(ptrTemp == NULL){
                        printf("No se creo el nuevo dato\n");
                    }
                    else{
                        if(ptrTempA == NULL){
                            printf("No se creo el alumno\n");
                            free(ptrTemp->nombre);
                            free(ptrTemp);
                        }
                        else{
                            ptrTemp->ptrAlum = ptrTempA;

                            ptrTemp->sig = NULL;

                            if(*ptr == NULL)
                                *ptr = ptrTemp;
                            else{
                                ptrAux = *ptr;
                                while(ptrAux->sig != NULL){
                                    ptrAux = ptrAux->sig;
                                }
                                ptrAux->sig = ptrTemp;
                            }
                        }
                    }
                    printf("Desea agregar a otra persona (s/n)?");
                    scanf(" %c", &opc);
                }while(opc == 's' || opc == 'S');
                break;
            default: 
                printf("Opcion no valida\n");
                break;
        }

    }while(op!=0);

}

#endif
