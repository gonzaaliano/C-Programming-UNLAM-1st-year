/*4.12. Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado. Calcular su sueldo tomando
en cuenta que recibe un premio de $500 si trabajo más de 50 horas y, además, si trabajó más de 150 horas
se le otorgan $1000 adicionales. RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, valorXHora, sueldo;

    printf("Ingrese el valor por hora trabajada\n");
    scanf("%d", &valorXHora);

    printf("Ingrese la cantidad de horas trabajadas\n");
    scanf("%d", &horas);

    sueldo = valorXHora * horas;

    if (horas > 50)
    {
        sueldo += 500;
        printf("Por haber trabajado mas de 50 horas recibe un bono de 500. Su sueldo quedaria %d\n", sueldo);
        if (horas > 150)
        {
            sueldo += 1500;
            printf("Por haber trabajado mas de 150 horas recibe un bono de 1500. Su sueldo quedaria %d\n", sueldo);
        }
    }
    else
    {
        printf("No completo las horas necesarias para recibir el bono\n");
    }

    system("pause");
    return 0;
}