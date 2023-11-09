/*7.1.6 Se ingresan DNI, código de sector (1 a 5) y sueldo de los empleados de una empresa. Se sabe que como
máximo la empresa tiene 100 empleados. Se desea:
a. Cargar los datos de los empleados mediante la función CargaEmpleados. La carga finaliza con un
empleado con DNI 99.(carga parcial del vector)
b. Generar un vector con la cantidad de empleados en cada sector mediante la función
CuentaPorSector y mostrarlo en forma de listado.
c. Determinar el importe total a pagar de sueldos mediante la función TotalAPagar.
d. Mostrar los 3 vectores.
*/

#include <stdio.h>
#include <stdlib.h>
int CargaEmpleados(int[], int[], float[], int);
void CuentaPorSector(int[], int[], int);
float TotalAPagar(float[], int);
void Mostrar(int[], int[], float[], int);

int main()
{
    int DNIs[100], sectores[100], cantEmpleados = 0, cantXSector[5] = {0}, numSectores[5], {1, 2, 3, 4, 5};
    float Sueldos[100];

    cantEmpleados = CargaEmpleados(DNIs, sectores, Sueldos, cantEmpleados);

    if (cantEmpleados > 0)
    {
        Mostrar(DNIs, sectores, Sueldos, cantEmpleados);
        CuentaPorSector(sectores, cantXSector, cantEmpleados);
        printf("El total de sueldos a pagar es de %.2f", TotalAPagar(Sueldos, cantEmpleados));
    }
    else
        printf("No se ingresaron datos.\n");

    system("pause");
    return 0;
}

void Mostrar(int vDNIs[], int vSectores[], float vSueldos[], int ce)
{
    printf(" DNI | SECTOR | SUELDO\n");
    for (int i = 0; i < ce; i++)
    {
        printf("%8d %6d %10.2f", vDNIs[i], vSectores[i], vSueldos[i]);
    }
}

int CargaEmpleados(int vDNIs[], int vSectores[], float vSueldos[], int ce)
{

    int i = 0, pos;
    do
    {
        printf("Ingrese el DNI del empleado (99 para terminar)\n");
        scanf("%d", &vDNIs[i]);
    } while (vDNIs[i] < 0);

    while (i < ce && vDNIs[i] != 99)
    {
        do
        {
            printf("Ingrese el sector en el que trabaja el empleado (1 a 5):\n");
            scanf("%d", vSectores[i]);
        } while ((vSectores[i] < 1) || (vSectores[i] > 5));

        do
        {
            printf("Ingrese el sueldo del empleado:\n");
            scanf("%f", &vSueldos[i]);
        } while (vSueldos[i] <= 0);

        i++;
        if (i < ce)
        {
            do
            {
                printf("Ingrese un DNI (99) para terminar:\n");
                scanf("%d", &vDNIs[i]);
            } while (vDNIs[i] < 0);
        }
    }

    return i;
}

void CuentaPorSector(int vSectores[], int vCantSec[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        vCantSec[vSectores[i] - 1]++;
    }

    printf("\nSector Cantidad");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%6d%9d", i + 1, vCantSec[i]);
    }
}

float TotalAPagar(float vSueldo[], int ce)
{
    float totalSueldos = 0;

    for (int i = 0; i < ce; i++)
    {
        totalSueldos += vSueldo[i];
    }

    return totalSueldos;
}