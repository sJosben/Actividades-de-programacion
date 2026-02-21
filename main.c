#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion, Ncalif, reprobados = 0, aprobados = 0;
    float calif, suma = 0, promedio, porcentajeR, porcentajeA;


    //Menu principal
    do
    {

        printf("1. Calcular promedio\n");

        printf("0. Salir\n");

        scanf("%d", &opcion);

        while (opcion == 1)
        {
            printf("Cuantas calificaciones se van a ingresar?\n");
            scanf("%d", &Ncalif);

            if (Ncalif <= 0)
            {
                printf("Cantidad no valida.\n");
                return 1;
            }

            // 2. Ciclo principal
            for (int i = 1; i <= Ncalif; i++)
            {

                // 3. Validación de rango
                do
                {
                    printf("Ingresa la calificacion %d (0-100): ", i);
                    scanf("%f", &calif);

                    if (calif < 0 || calif > 100)
                    {
                        printf("Error: La calificacion debe estar entre 0 y 100.\n");
                    }
                }
                while (calif < 0 || calif > 100);

                // 4. Acumulador (suma de las calificaciones)
                suma += calif;

                 if (calif < 60){
                reprobados += 1;
                } else {
                    aprobados += 1;
                }

            }

            // 5. Calculo del promedio y porcentaje de materias aprobadas y reprobadas
            promedio = suma / Ncalif;
            porcentajeA = (aprobados*100)/Ncalif;
            porcentajeR = (reprobados*100)/Ncalif;

            // Resultados
            printf("\n-- Resultados --\n");
            printf("Suma total: %.2f\n", suma);
            printf("Promedio: %.2f\n", promedio);
            printf("Materias aprobadas: %d\n", aprobados);
            printf("Materias reprobadas: %d\n", reprobados);
            printf("Porcentaje de aprobadas:%.2f%%\n", porcentajeA);
            printf("Porcentaje de reprobadas:%.2f%%\n", porcentajeR);

            printf("Ingresa 0 para salir o 1 para continuar\n");
            scanf("%d", &opcion);

        }
    }
    while (opcion != 0);
    return 0;
}
