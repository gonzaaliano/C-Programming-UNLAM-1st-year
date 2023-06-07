/*2.5. Conociendo la cantidad de tarros de pintura que existe en un depósito de una pinturería y sabiendo que el
50% son tarros de 1Lt, el 30% tarros de 4Lts. y el resto tarros de 20Lts. Determinar la cantidad de tarros de
1Lt., 4Lts. Y 20 Lts.*/
// RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cantTarrosPintura, tarros1lt, tarros4lt, tarros20lt;

    printf("Bienvenidos al programa stock de pinturas\n");

    printf("Ingrese la cantidad total de tarros de pintura\n");
    scanf("%d", &cantTarrosPintura);

    tarros1lt = (50 * cantTarrosPintura) / 100;
    tarros4lt = (30 * cantTarrosPintura) / 100;
    tarros20lt = (20 * cantTarrosPintura) / 100;

    printf("La cantidad de tarros de pintura de 1 litros son: %d\n", tarros1lt);
    printf("La cantidad de tarros de pintura de 4 litros son: %d\n", tarros4lt);
    printf("La cantidad de tarros de pintura de 20 litros son: %d\n", tarros20lt);

    printf("Programa Terminado");

    system("pause");

    return 0;
}