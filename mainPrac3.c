#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0, valor = 1, N;

    printf("ingrese cuantas veces se va a repetir la suma (+1 cada iteracion):\n");
    scanf("%d", &N);
    for (int i=1; i<=N; i++)
    {
        suma+=valor;
        printf("Resultado: %d\n", suma);
    }
    return 0;
}
