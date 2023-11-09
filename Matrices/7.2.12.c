/*Una empresa de peajes, en una determinada zona tiene 5 cabinas para el cobro de peajes.
Desea obtener una estadistica diaria de la recaudacion de cada cabina entre las 0 y 6 horas. Ademas de la cantidad de peajes cobrados por cabina:
Se ingresa:
Nro cabina(1 a 5)
Hora (0 a 6)
Importe del peaje

Finaliza la informacion con Nro cabina cero. Validar los ingresos y reutilizar las funciones construidas para la validacion.
*/
#include <stdio.h>
#include <stdlib.h>
int LeerYValidar(int, int);
float LeerYValidarMayor(float);
void MostrarEstadistica(float[][7], int, int);

int main()
{

    int Cabinas[5] = {0};
    float CabinaXHora[5][7] = {{0}};
    int cabinaPeaje, hora;
    float monto;

    printf("Ingrese numero de cabina\n");
    scanf("%d", &cabinaPeaje);

    cabinaPeaje = LeerYValidar(0, 5);

    while (cabinaPeaje != 0)
    {

        
        printf("Ingrese la hora:\n");
        hora = LeerYValidar(0, 6);

        printf("Ingrese el monto abonado:\n");
        monto = LeerYValidarMayor(0);


        CabinaXHora[cabinaPeaje - 1][hora] += monto;
        cabinaPeaje[cabinaPeaje - 1]++;

        cabinaPeaje = LeerYValidar(0, 5);
    }

    system("pause");
    return 0;
}

int LeerYValidar(int liminf, int limsup)
{
    int n;
    do
    {
        printf("Ingrese un numero dentro del rango\n");
        scanf("%d", &n);

        if ((n < liminf) || (n > limsup))
        {
            printf("Error, ha ingresado un numero por fuera del rango\n");
            printf("Vuelva a intentarlo\n");
        }

    } while (n < liminf || n > limsup);

    return n;
}

float LeerYValidarMayor(float monto)
{
    do
    {
        printf("Ingrese un valor mayor a 0\n");
        scanf("%f", &monto);

        if (monto <= 0)
        {
            printf("Error, ha ingresado un numero de monto menor o igual a 0\n");
            printf("Vuelva a intentarlo\n");
        }

    } while (monto <= 0);
}

void MostrarEstadistica(float matriz[][7], int cabinas, int horas)
{
    int i, j;

    printf("\n****ESTADISTICA****\n")
    
}