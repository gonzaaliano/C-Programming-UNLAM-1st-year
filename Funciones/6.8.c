/*6.8. Realizar una función que, dado un mes y un año, calcule la cantidad de días de dicho mes. El año se utilizará
en el caso de que el mes sea febrero ya que los años bisiestos tienen 29 días en lugar de 28.
Un año es bisiesto cuando: (el año es divisible por 4 y NO por 100) o (el año es divisible por 400).
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>
int Dias(int, int);

int main()
{
    int mes, anio, dias;

    printf("Ingrese un ano\n");
    scanf("%d", &anio);

    do
    {
        printf("Ingrese el mes\n");
        scanf("%d", &mes);

        if ((mes < 1) && (mes > 12))
        {
            printf("ERROR, ha ingresado un mes incorrecto\n");
        }

    } while ((mes < 1) && (mes > 12));

    dias = Dias(mes, anio);

    printf("La cantidad de dias es de %d\n", dias);

    system("pause");
    return 0;
}

int Dias(int mes, int ano)
{
    int dias;

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias = 30;
    }
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10)
    {
        dias = 31;
    }
    if (mes == 2)
    {
        dias = 28;
        if (ano % 4 == 0 && ano % 100 != 0)
        {
            dias = dias + 1;
        }
    }

    return dias;
}