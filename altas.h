#include <stdio.h>
#include <stdlib.h>
#include "STRUCTS_H"

void altas(struct persona **ptr);
struct persona *nuevaPersona(void);


struct persona *nuevaPersona(void){
    struct persona *ptrTemp=NULL;
    ptrTemp = (struct persona *) malloc(sizeof(struct persona));

    if(ptrTemp==NULL){
        printf("No se reservo memoria\n");
        return NULL;
    }else{
        printf("Ingrese el nombre: ");
        scanf("%s", &persona.nombre);
        printf("Ingrese la edad: ");
        scanf("%d", &persona);
        printf("Ingrese el genero: ");
        scanf("%s", &persona.genero);
        printf("Ingrese la fecha de nacimiento: ");
        scanf("%s", &persona.fn);

        ptrtemp->edad=persona;
        ptrtemp->sig=NULL;
        
        return ptrTemp;
    }
}

void altas(struct persona **ptr){
    struct persona *ptrAux;
     ptrtemp=crear();
        if(ptrtemp==NULL)
            printf("No se creo el nuevo dato");
        else{
            if(ptr==NULL)
                ptr=ptrtemp;
            else{
                ptraux=ptr;
                    while(ptraux->sig!=NULL){
                        ptraux=ptraux->sig;
                        }
                        ptraux->sig=ptrtemp;
                }
            }

}
