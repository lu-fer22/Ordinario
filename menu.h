#include <stdio.h>

int menuPrincipal(void);

int menuPrincipal(void) {
    int op;

    printf("Seleccione una opcion: \n");
    printf("1.- Insertar\n");
    printf("2.- Mostrar\n");
    printf("3.- Liberar\n");
    printf("4.- Funciones Especiales\n");
    printf("0.- Salir\n");
    scanf("%d", &op);
    return op;
}
