#ifndef STRUCTS_H
#define STRUCTS_H

#include<stdio.h>

struct alumno{
    char matricula[10];
    char carrera[5];
    int semestre;
    char correo [23];
    float calif[5][5];
};

struct persona{
    char *nombre;
    int edad;
    char genero;
    char fn[8];
    struct alumno *ptrAlum;
    struct persona *sig;
};

#endif
