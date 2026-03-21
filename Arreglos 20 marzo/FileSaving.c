#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Necesaria para usar strcspn()

int main()
{
    char tablero [5][5];
    char Nombre[50]; // Aumentamos el tamaño para nombres completos
    FILE *archivo;

    // Generamos el tablero (igual que tu código original)
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            tablero[i][j]= '~';
        }
    }
    tablero[1][2]= 'B';
    tablero[3][4]= 'X';
    tablero[2][1]= '0';

    // Imprimimos el tablero en consola
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
             printf("%c", tablero[i][j]);
        }
        printf("\n");
    }

    // 1. LEER NOMBRE COMPLETO CON ESPACIOS
    printf("Ingresa tu Nombre completo: ");
    // Usamos fgets en lugar de scanf. "stdin" significa que lee del teclado.
    fgets(Nombre, sizeof(Nombre), stdin);

    // fgets captura el "Enter" (\n) que presionas al final.
    // Esta línea busca ese "Enter" y lo borra para que tu archivo quede limpio.
    Nombre[strcspn(Nombre, "\n")] = 0;

    // Escribimos en el archivo
    archivo = fopen("tablero.txt", "w");
    fprintf(archivo, "Sergio Josben Chavez Lupercio\n");
    fprintf(archivo, "%s\n", Nombre); // Tu nombre completo se guarda aquí

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fprintf(archivo, "%c", tablero[i][j]);
        }
        fprintf(archivo, "\n");
    }

    fprintf(archivo, "Sergio Josben Chavez Lupercio\n");
    fprintf(archivo, "%s\n", Nombre);
    fclose(archivo);
    printf("archivo cerrado\n");
    // 2. EXTRAER LO QUE TÚ QUIERAS DEL ARCHIVO
    archivo = fopen("tablero.txt", "r");
    printf("archivo abierto\n");

    char lineaExtraida[100];
    int lineaActual = 1;

    // AQUÍ ELIGES QUÉ LÍNEA QUIERES EXTRAER.
    int lineaDeseada = 2;

    // Leemos el archivo línea por línea hasta que se acabe
    while (fgets(lineaExtraida, sizeof(lineaExtraida), archivo) != NULL) {

        // Si la línea que estamos leyendo es la que buscamos
        if (lineaActual == lineaDeseada) {
            printf("Dato extraido de la linea %d: %s", lineaDeseada, lineaExtraida);
            break; // Como ya encontramos lo que queríamos, detenemos la búsqueda
        }
        lineaActual++; // Sumamos 1 para pasar a la siguiente línea
    }

    fclose(archivo);

    return 0;
}
