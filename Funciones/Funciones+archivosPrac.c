#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

// Funciones

// Funcion para capturar los datos en el arreglo
void capturar(int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("Ingresa 6 numeros enteros (no. %d):\n", i+1);
        scanf("%d", &v[i]);
    }
}

// Funcion para mostrar los datos del arreglo
void mostrar(int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// Funcion para filtrar numeros impares
int filtrar(int origen[], int destino[], int n)
{
    int i, j = 0;

    // Encontrar y copiar los impares
    for(i = 0; i < n; i++)
    {
        if(origen[i] % 2 != 0)
        {
            destino[j] = origen[i];
            j++; // 'j' lleva la cuenta de cuantos impares encontramos
        }
    }

    return j; // Regresa la cantidad exacta de impares
}

int main()
{
    // codigo
    int numeros[6], impares[6];
    int totalImpares;

    capturar(numeros, 6);
    printf("\n");

    printf("arreglo original\n");
    mostrar(numeros, 6);
    printf("\n");

    totalImpares = filtrar(numeros, impares, 6);

    printf("arreglo filtrado\n");
    mostrar(impares, totalImpares);

    // Guardar en archivo
    FILE *f;
    f = fopen("resultado.txt", "w");

    for(int i = 0; i < totalImpares; i++)
    {
        fprintf(f, "%d ", impares[i]); // Imprime sin espacios como indica el documento
    }

    fclose(f);

    return 0;
}
