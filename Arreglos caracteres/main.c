#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nombre_temporal[20];
    char jugador[4][20];
    char nombre_equipo[150];
    int longitud1, longitud2, longitud3, longitud4;

    // --- Jugador 1 ---
    printf("Ingresa el nombre del jugador 1: ");
    fgets(nombre_temporal, sizeof(nombre_temporal), stdin);
    longitud1 = strlen(nombre_temporal);
    // cambiamos el enter por \0 si realmente hay un enter al final
    if (nombre_temporal[longitud1 - 1] == '\n') {
        nombre_temporal[longitud1 - 1] = '\0';
        longitud1--; // Ajustamos la longitud para que no cuente el enter
    }
    strcpy(jugador[0], nombre_temporal);

    // --- Jugador 2 ---
    printf("Ingresa el nombre del Jugador 2: ");
    fgets(nombre_temporal, sizeof(nombre_temporal), stdin);
    longitud2 = strlen(nombre_temporal);
    if (nombre_temporal[longitud2 - 1] == '\n') {
        nombre_temporal[longitud2 - 1] = '\0';
        longitud2--;
    }
    strcpy(jugador[1], nombre_temporal);

    // --- Jugador 3 ---
    printf("Ingresa el nombre del jugador 3: ");
    fgets(nombre_temporal, sizeof(nombre_temporal), stdin);
    longitud3 = strlen(nombre_temporal);
    if (nombre_temporal[longitud3 - 1] == '\n') {
        nombre_temporal[longitud3 - 1] = '\0';
        longitud3--;
    }
    strcpy(jugador[2], nombre_temporal);

    // --- Jugador 4 ---
    printf("Ingresa el nombre del jugador 4: ");
    fgets(nombre_temporal, sizeof(nombre_temporal), stdin);
    longitud4 = strlen(nombre_temporal);
    if (nombre_temporal[longitud4 - 1] == '\n') {
        nombre_temporal[longitud4 - 1] = '\0';
        longitud4--;
    }
    strcpy(jugador[3], nombre_temporal);

    // Comparación básica
    if (strcmp(jugador[0], jugador[1]) == 0) {
        printf("\n El jugador 1 y 2 se llaman igual.\n");
    } else {
        printf("\n Nombres registrados con exito.\n");
    }

    // --- Concatenación Segura ---
    strcpy(nombre_equipo, "Equipo Linux: ");
    strcat(nombre_equipo, jugador[0]);
    strcat(nombre_equipo, ", ");
    strcat(nombre_equipo, jugador[1]);
    strcat(nombre_equipo, ", ");
    strcat(nombre_equipo, jugador[2]);
    strcat(nombre_equipo, " y ");
    strcat(nombre_equipo, jugador[3]);

    // --- Salida ---
    printf("\n-- RESUMEN --\n");
    printf("Jugador 1 es: %s\n", jugador[0]);
    printf("Longitud del nombre de %s es: %d\n", jugador[0], longitud1);
    printf("Jugador 2 es: %s\n", jugador[1]);
    printf("Longitud del nombre de %s es: %d\n", jugador[1], longitud2);
    printf("Jugador 3 es: %s\n", jugador[2]);
    printf("Longitud del nombre de %s es: %d\n", jugador[2], longitud3);
    printf("Jugador 4 es: %s\n", jugador[3]);
    printf("Longitud del nombre de %s es: %d\n", jugador[3], longitud4);
    printf("\n%s\n", nombre_equipo);

    return 0;
}
