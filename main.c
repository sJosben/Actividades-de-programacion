#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int suma = 0;
    printf("\n");
    printf("Escribe un numero para sumar\n");
    scanf("%d", &x);

    while (x != 0)
    {
        suma += x;
        printf(" resultado: %d\n", suma);
        printf("Escribe un numero para sumar\n");
        scanf("%d", &x);

    }
}
