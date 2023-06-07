/*4.17. Confeccionar un programa que pueda determinar el importe a pagar por una prestación médica según su
código. Los importes se cobran según la siguiente tabla:
Código Importe
A 20
D 40
F 60
M 150
T 150
Se debe ingresar el número de historia del paciente y el código de la prestación. Se debe emitir un ticket
con el número de la historia, el código y el importe a pagar. RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paciente, montoPrestacion;
    char codPrestacion;

    printf("Ingrese el codigo de prestacion del paciente en mayusculas:\n");
    scanf("%c", &codPrestacion);

    printf("Ingrese el numero de historia del paciente:\n");
    scanf("%d", &paciente);

    switch (codPrestacion)
    {
    case 'A':
        montoPrestacion = 20;
        printf("Ticket:\n Nro Paciente: %d\n Codigo Prestacion: %c \n Monto Prestacion: %d\n ", paciente, codPrestacion, montoPrestacion);
        break;
    case 'D':
        montoPrestacion = 40;
        printf("Ticket:\n Nro Paciente: %d\n Codigo Prestacion: %c \n Monto Prestacion: %d\n ", paciente, codPrestacion, montoPrestacion);
        break;
    case 'F':
        montoPrestacion = 60;
        printf("Ticket:\n Nro Paciente: %d\n Codigo Prestacion: %c \n Monto Prestacion: %d\n ", paciente, codPrestacion, montoPrestacion);
        break;
    case 'M':
        montoPrestacion = 150;
        printf("Ticket:\n Nro Paciente: %d\n Codigo Prestacion: %c \n Monto Prestacion: %d\n ", paciente, codPrestacion, montoPrestacion);
        break;
    case 'T':
        montoPrestacion = 150;
        printf("Ticket:\n Nro Paciente: %d\n Codigo Prestacion: %c \n Monto Prestacion: %d\n ", paciente, codPrestacion, montoPrestacion);
        break;
    default:
        printf("Error en los datos proporcionados, vuelva a ingresar nuevamente.\n");
        break;
    }

    return 0;
}