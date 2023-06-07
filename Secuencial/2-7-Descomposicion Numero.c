// 2.7. Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena
// RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, primerCifra, segundaCifra, tercerCifra, restoPrimerCifra;
    printf("Bienvenidos al programa Descomposicion de numeros\n");
    printf("Ingrese un numero de 3 cifras: ");
    scanf("%d", &num);

    primerCifra = num / 100;
    restoPrimerCifra = num % 100;
    segundaCifra = restoPrimerCifra / 10;
    tercerCifra = (num % 10);

    printf("El numero descompuesto en centena es: %d\n", primerCifra);
    printf("El numero descompuesto en decena es: %d\n", segundaCifra);
    printf("El numero descompuesto en unidad es: %d\n", tercerCifra);

    system("pause");
    return 0;
}