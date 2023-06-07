/*2.9. Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1
y lo informe expresado en:
TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB)*/
// RESUELTO.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorKib, valorMb, valorGb, valorTb;

    printf("Bienvenidos al programa tamano archivo\n");
    printf("Ingrese un valor expresado en Kibibytes(KiB)\n");
    scanf("%f", &valorKib);

    valorMb = valorKib / 1024;
    valorGb = valorMb / 1024;
    valorTb = valorGb / 1024;

    printf("El peso del archivo en MB es: %f \n", valorMb);
    printf("El peso del archivo en GB es: %f \n", valorGb);
    printf("El peso del archivo en TB es: %f \n", valorTb);

    system("pause");
    return 0;
}