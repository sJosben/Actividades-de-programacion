#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp1, temp2;
    float temp [24];
    int dummy;

    temp[0] = 20.5;
    temp[1] = 19.2;


    printf("temperatura 0:%f\n", temp[0]);
    printf("temperatura 1:%f\n", temp[1]);
    printf("direccion de mem de 2 flotantes: &temp1:%i, &temp2:%i!\n", &temp1, &temp2);
    printf("direccion de memoria de temp[24]%i,\n", temp);
    printf("direccion de memoria de &temp[24]%i,\n", &temp);
    printf("direccion de memoria de &dummy%i,\n", &dummy);
    printf("%f\n", temp[0]);


    return 0;
}
