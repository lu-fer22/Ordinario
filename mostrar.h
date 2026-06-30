#ifndef MOSTRAR_H
#define MOSTRAR_H

#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "menu.h"

static inline void mostrar(struct persona **ptr){
    struct persona *ptrTemp = *ptr;
    int op;

    do{
        op=menuMostrar();

        switch(op){
            case 1:
                if(*ptr == NULL){
                    printf("No hay datos guardados\n");
                }else{

                    printf("\nLista de datos:\n");

                    ptrTemp = *ptr;

                    while(ptrTemp != NULL){

                        printf("PERSONA\n");
                        printf("Nombre: %s\n", ptrTemp->nombre);
                        printf("Edad: %d\n", ptrTemp->edad);
                        printf("Genero: %c\n", ptrTemp->genero);
                        printf("Fecha de nacimiento: %s\n", ptrTemp->fn);

                        printf("\nALUMNO\n");
                        printf("Matricula: %s\n", ptrTemp->ptrAlum->matricula);
                        printf("Carrera: %s\n", ptrTemp->ptrAlum->carrera);
                        printf("Semestre: %d\n", ptrTemp->ptrAlum->semestre);
                        printf("Correo: %s\n", ptrTemp->ptrAlum->correo);

                        printf("Calificaciones:\n");

                        for(int i = 0; i < 5; i++){
                            printf("Materia %d\n", i + 1);

                            for(int j = 0; j < 5; j++){
                                printf("  Parcial %d: %.2f\n",
                                    j + 1,
                                    ptrTemp->ptrAlum->calif[i][j]);
                            }
                        }

                        printf("\n");

                        ptrTemp = ptrTemp->sig;
                    }
                }
                break;
            case 2:
                if(*ptr == NULL){
                    printf("No hay datos guardados.\n");
                }
                else{
                    char carreraBuscada[5];
                    int encontrado = 0;

                    printf("Ingrese la carrera: ");
                    scanf("%s", carreraBuscada);

                    ptrTemp = *ptr;

                    while(ptrTemp != NULL){

                        if(strcmp(ptrTemp->ptrAlum->carrera, carreraBuscada) == 0){
                            encontrado = 1;

                            printf("Nombre: %s\n", ptrTemp->nombre);
                            printf("Edad: %d\n", ptrTemp->edad);
                            printf("Genero: %c\n", ptrTemp->genero);
                            printf("Matricula: %s\n", ptrTemp->ptrAlum->matricula);
                            printf("Carrera: %s\n", ptrTemp->ptrAlum->carrera);
                            printf("Semestre: %d\n", ptrTemp->ptrAlum->semestre);
                            printf("Correo: %s\n", ptrTemp->ptrAlum->correo);

                            printf("\n");
                        }

                        ptrTemp = ptrTemp->sig;
                    }
                    if(!encontrado){
                        printf("No hay alumnos de esa carrera.\n");
                    }
                }
                break;
            case 3:
                if(*ptr == NULL){
                    printf("No hay datos guardados.\n");
                }
                else{
                    int semestreBuscado;
                    printf("Ingrese el semestre: ");
                    scanf("%d", &semestreBuscado);

                    ptrTemp = *ptr;

                    while(ptrTemp != NULL){

                        if(ptrTemp->ptrAlum->semestre == semestreBuscado){

                            printf("Nombre: %s\n", ptrTemp->nombre);
                            printf("Edad: %d\n", ptrTemp->edad);
                            printf("Genero: %c\n", ptrTemp->genero);
                            printf("Matricula: %s\n", ptrTemp->ptrAlum->matricula);
                            printf("Carrera: %s\n", ptrTemp->ptrAlum->carrera);
                            printf("Semestre: %d\n", ptrTemp->ptrAlum->semestre);
                            printf("Correo: %s\n", ptrTemp->ptrAlum->correo);

                            printf("\n");
                        }

                        ptrTemp = ptrTemp->sig;
                    }
                }
                break;
            case 4:
                if(*ptr == NULL){
                    printf("No hay datos guardados.\n");
                }
                else{
                    char carreraBuscada[5];
                    int encontrado = 0;
                    printf("Ingrese la carrera: ");
                    scanf("%s", carreraBuscada);

                    int semestreBuscado;
                    printf("Ingrese el semestre: ");
                    scanf("%d", &semestreBuscado);

                    ptrTemp = *ptr;

                    while(ptrTemp != NULL){

                        if(ptrTemp->ptrAlum->semestre == semestreBuscado && strcmp(ptrTemp->ptrAlum->carrera, carreraBuscada) == 0){
                            encontrado = 1;

                            printf("Nombre: %s\n", ptrTemp->nombre);
                            printf("Edad: %d\n", ptrTemp->edad);
                            printf("Genero: %c\n", ptrTemp->genero);
                            printf("Matricula: %s\n", ptrTemp->ptrAlum->matricula);
                            printf("Carrera: %s\n", ptrTemp->ptrAlum->carrera);
                            printf("Semestre: %d\n", ptrTemp->ptrAlum->semestre);
                            printf("Correo: %s\n", ptrTemp->ptrAlum->correo);

                            printf("\n");
                        }

                        ptrTemp = ptrTemp->sig;
                    }
                    if(!encontrado){
                        printf("No hay alumnos de esa carrera y semestre.\n");
                    }

                }
                break;
            case 5:
                if(*ptr == NULL){
                    printf("No hay datos guardados.\n");
                }
                else{
                    char nombreBuscada[50];
                    int encontrado = 0;

                    printf("Ingrese el nombre: ");
                    scanf("%s", nombreBuscada);

                    ptrTemp = *ptr;

                    while(ptrTemp != NULL){

                        if(strcmp(ptrTemp->nombre, nombreBuscada) == 0){
                            encontrado = 1;

                            printf("Nombre: %s\n", ptrTemp->nombre);
                            printf("Edad: %d\n", ptrTemp->edad);
                            printf("Genero: %c\n", ptrTemp->genero);
                            printf("Matricula: %s\n", ptrTemp->ptrAlum->matricula);
                            printf("Carrera: %s\n", ptrTemp->ptrAlum->carrera);
                            printf("Semestre: %d\n", ptrTemp->ptrAlum->semestre);
                            printf("Correo: %s\n", ptrTemp->ptrAlum->correo);

                            printf("\n");
                        }

                        ptrTemp = ptrTemp->sig;
                    }
                    if(!encontrado){
                        printf("No se encontro ninguna persona con ese nombre.\n");
                    }
                }
                break;
            case 6:
                if(*ptr == NULL){
                    printf("No hay datos guardados.\n");
                }
                else{
                    char matriculaBuscada[10];
                    int encontrado = 0;

                    printf("Ingrese la matricula: ");
                    scanf("%s", matriculaBuscada);

                    ptrTemp = *ptr;

                    while(ptrTemp != NULL){

                        if(strcmp(ptrTemp->ptrAlum->matricula, matriculaBuscada) == 0){
                            encontrado = 1;

                            printf("Nombre: %s\n", ptrTemp->nombre);
                            printf("Edad: %d\n", ptrTemp->edad);
                            printf("Genero: %c\n", ptrTemp->genero);
                            printf("Matricula: %s\n", ptrTemp->ptrAlum->matricula);
                            printf("Carrera: %s\n", ptrTemp->ptrAlum->carrera);
                            printf("Semestre: %d\n", ptrTemp->ptrAlum->semestre);
                            printf("Correo: %s\n", ptrTemp->ptrAlum->correo);

                            printf("\n");
                        }

                        ptrTemp = ptrTemp->sig;
                    }
                    if(!encontrado){
                        printf("No hay alumno con esa matricula.\n");
                    }
                }
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
