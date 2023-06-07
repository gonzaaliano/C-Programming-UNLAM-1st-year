/*2.6. El precio para un vuelo es de $8800 en clase turista y se aplica un incremento del 30% en primera clase.
Se ingresan la cantidad de pasajes vendidos de clase turista y de primera clase.
Obtener la recaudación total del vuelo.*/
//RESUELTO


#include <stdio.h>
#include <stdlib.h>

// VARIABLES PRECIO DEL VUELO Y CANTIDAD DE TICKETS

int main()
{
    int cantPasajesTurista, cantPasajesPrimera, recaudacionVuelo;
    float precioTurista = 8800, precioPrimeraClase = precioTurista * 1.3;

    printf("Bienvenido al programa Recaudacion del vuelo\n");

    printf("Ingrese la cantidad de pasajes en clase Turista:\n");
    scanf("%d", &cantPasajesTurista);
    printf("Ingrese la cantidad de pasajes en Primera clase:\n");
    scanf("%d", &cantPasajesPrimera);

    recaudacionVuelo = cantPasajesTurista * precioTurista + cantPasajesPrimera * precioPrimeraClase;

    printf("La recaudacion total del vuelo es: $%d\n", recaudacionVuelo);

    printf("Programa Finalizado\n");
    system("pause");

    return 0;
}