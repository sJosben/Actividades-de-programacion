#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Nombre[4][20], ArregloC[5];

    printf("%d %d %d %d %d\n", &ArregloC[0], &ArregloC[1], &ArregloC[2], &ArregloC[3], &ArregloC[4]);
    printf("%d\n", ArregloC);

    for(int i; i<4; i++){
    printf("\nCual es tu nombre completo?: ");
    scanf("%s", Nombre[i]);
    }


    printf("\n\n--------------------------------\n");
    printf("\n Tu nombre completo es: %s %s %s %s", Nombre[0], Nombre[1], Nombre[2], Nombre[3]);
     printf("\n Direcciones de memoria: %d %d %d %d", &Nombre[0], &Nombre[1], &Nombre[2], &Nombre[3]);
    printf("\n Direccion de memoria (Nombre): %d\n\n", &Nombre);

    return 0;
}
