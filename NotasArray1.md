# Arreglos
Un arreglo (array, vector o matriz) es una
estructura de datos que almacena una colección ordenada de elementos, generalmente del mismo tipo, 
en posiciones contiguas de memoria. Sirven para gestionar múltiples valores relacionados bajo un solo nombre,
permitiendo un acceso rápido y directo a cualquier dato mediante un índice numérico.
El arreglo marca el inicio de la dirección de memoria en la que se van empezar a guardar los datos.
------------ Como inicializar un flotante --------------------
temp[0]=20.5; es ineficiente hacerlo de esta manera.
Es mas facil usar un for, de la siguiente manera:
 for (i = 0; i < N; i++)
    {
        printf("Ingresa la temperatura %d:\n", i+1);
        scanf("%f", &temp[i]);
    }
    for (i = 0; i < N; i++)
    {
        printf("Temperatura %d: %.2f\n", i+1, temp[i]);
    }
