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

static inline int menuBajas(){
    int op;
    printf("\nBAJAS\n");
    printf("1.- Una persona\n");
    printf("2.- Varias personas\n");
    printf("3.- Todos\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuMostrar(){
    int op;
    printf("\nMOSTRAR\n");
    printf("1.- Todos\n");
    printf("2.- Carrera\n");
    printf("3.- Semestre\n");
    printf("4.- Carrera y Semestre\n");
    printf("5.- Nombre\n");
    printf("6.- Matricula\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuFe(){
    int op;
    printf("\nFUNCIONES ESPECIALES\n");
    printf("1.- Modificar\n");
    printf("2.- Calificaciones\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuModificar(){
    int op;
    printf("\nMODIFICAR\n");
    printf("1.- calificaciones\n");
    printf("2.- Datos\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuModical(){
    int op;
    printf("\nMODIFICAR CALIFICACIONES\n");
    printf("1.- Parcial\n");
    printf("2.- Materia\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuDatos(){
    int op;
    printf("\nMODIFICAR DATOS\n");
    printf("1.- Persona\n");
    printf("2.- Alumno\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuCalif(){
    int op;
    printf("\nCALIFICACIONES\n");
    printf("1.- Semestre\n");
    printf("2.- Carrera\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuSemestre(){
    int op;
    printf("\nCALIFICACIONES SEMESTRE\n");
    printf("1.- Materia\n");
    printf("2.- Parcial\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuMateria(){
    int op;
    printf("\nCALIFICACIONES SEMESTRE MATERIA\n");
    printf("1.- Aprovados y No aprobados\n");
    printf("2.- Aprobaron parcial\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}

static inline int menuCarrera(){
    int op;
    printf("\nCALIFICACIONES CARRERA\n");
    printf("1.- Aprobados\n");
    printf("2.- De 1 a 3 adeudos\n");
    printf("3.- Mas de 4 adeudos\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}
#endif
