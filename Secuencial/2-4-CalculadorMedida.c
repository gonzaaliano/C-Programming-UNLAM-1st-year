/*2.4. Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int medidaPies, medidaYardas, medidaPulgadas, medidaCms, medidaMts; // INGRESO DE VARIABLE

    printf("Bienvenido al programa Cambio a Yardas\n");

    printf("Ingrese la medida en Pies\n");
    scanf("%d", &medidaPies);

    medidaYardas = medidaPies * 3;
    medidaPulgadas = medidaPies * 12;
    medidaCms = medidaPulgadas * 2.54;
    medidaMts = medidaCms * 100;

    printf("La medida en yardas es: %d\n", medidaYardas);
    printf("La medida en pulgadas es: %d\n", medidaPulgadas);
    printf("La medida en centimetros es: %d\n", medidaCms);
    printf("La medida en metros es: %d\n", medidaMts);

    printf("Programa Terminado\n");

    system("pause");

    return 0;
}