#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int Num[5];
    for(int i = 0; i < 5; i++){
    scanf("%d", &Num[i]);

    }

    for(int i = 0; i < 5; i++){
    printf("Numero: %d Direccion de memoria: %d\n", Num[i], &Num[i]);

    }
return 0;
}
