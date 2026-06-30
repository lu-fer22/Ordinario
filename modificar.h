#ifndef MODIFICAR_H
#define MODIFICAR_H

#include <stdio.h>
#include "struct.h"
#include "menu.h"

static inline void modificar(struct persona **ptr){
    int op;
    struct persona *ptrTemp;

    do{
        op = menuModificar();

        switch(op){

        case 1: {  // CALIFICACIONES

            char matriculaBuscada[10];
            int encontrado = 0;

            printf("Ingrese matricula del alumno: ");
            scanf("%9s", matriculaBuscada);

            ptrTemp = *ptr;

            while(ptrTemp != NULL){

                if(ptrTemp->ptrAlum != NULL &&
                   strcmp(ptrTemp->ptrAlum->matricula, matriculaBuscada) == 0){

                    encontrado = 1;

                    int opCal = menuModical();
                    int materia, parcial;
                    float nuevaCalif;

                    switch(opCal){

                    case 1:  // PARCIAL
                        printf("Parcial a modificar: ");
                        scanf("%d", &parcial);

                        for(int i = 0; i < 5; i++){
                            printf("Materia %d nueva calificacion: ", i+1);
                            scanf("%f", &nuevaCalif);

                            ptrTemp->ptrAlum->calif[i][parcial] = nuevaCalif;
                        }

                        printf("Parcial actualizado correctamente.\n");
                        break;

                    case 2:  // MATERIA
                        printf("Materia: ");
                        scanf("%d", &materia);

                        for(int j = 0; j < 5; j++){
                            printf("Parcial %d: ", j+1);
                            scanf("%f", &nuevaCalif);

                            ptrTemp->ptrAlum->calif[materia][j] = nuevaCalif;
                        }

                        printf("Materia actualizada.\n");
                        break;
                    }

                    break;
                }

                ptrTemp = ptrTemp->sig;
            }

            if(!encontrado){
                printf("No se encontro la matricula.\n");
            }

            break;
        }

        case 2: {  // DATOS

            char matriculaBuscada[10];
            int encontrado = 0;

            printf("Ingrese matricula del alumno: ");
            scanf("%9s", matriculaBuscada);

            ptrTemp = *ptr;

            while(ptrTemp != NULL){

                if(ptrTemp->ptrAlum != NULL &&
                   strcmp(ptrTemp->ptrAlum->matricula, matriculaBuscada) == 0){

                    encontrado = 1;

                    int opDa = menuDatos();

                    switch(opDa){

                    case 1:
                        printf("MODIFICAR PERSONA\n");

                        printf("Nuevo nombre: ");
                        scanf("%49s", ptrTemp->nombre);

                        printf("Nueva edad: ");
                        scanf("%d", &ptrTemp->edad);

                        printf("Nuevo genero: ");
                        scanf(" %c", &ptrTemp->genero);

                        printf("Nueva fecha de nacimiento: ");
                        scanf("%s", ptrTemp->fn);
                        break;

                    case 2:
                        printf("MODIFICAR ALUMNO\n");

                        printf("Nueva matricula: ");
                        scanf("%9s", ptrTemp->ptrAlum->matricula);

                        printf("Nueva carrera: ");
                        scanf("%4s", ptrTemp->ptrAlum->carrera);

                        printf("Nuevo semestre: ");
                        scanf("%d", &ptrTemp->ptrAlum->semestre);

                        printf("Nuevo correo: ");
                        scanf("%22s", ptrTemp->ptrAlum->correo);
                        break;
                    }

                    break;
                }

                ptrTemp = ptrTemp->sig;
            }

            if(!encontrado){
                printf("No se encontro la matricula.\n");
            }

            break;
        }

        case 0:
            printf("Hasta luego.\n");
            break;

        default:
            printf("Opcion no valida\n");
        }

    }while(op != 0);
}

#endif
