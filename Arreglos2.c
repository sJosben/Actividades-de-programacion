#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int N = 6;
    float temp[N];
    // for para pedir datos
    for (i = 0; i < N; i++)
    {
        printf("Ingresa la temperatura %d:\n", i+1);
        scanf("%f", &temp[i]);
    }

    // for para imprimir datos
    for (i = 0; i < N; i++)
    {
        printf("Temperatura %d: %.2f\n", i+1, temp[i]);
    }
    return 0;
}
