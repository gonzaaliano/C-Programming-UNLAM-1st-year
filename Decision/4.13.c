/*4.13. Un fabricante de repuestos para tractores ha descubierto que ciertos artículos identificados por los
números de catálogo 12121 al 18081; 30012 al 45565 y 67000 al 68000 son defectuosos. Se desea
confeccionar un programa al que informándole el número de catálogo indique si el artículo es o no
defectuoso. Los artículos del catálogo van desde el 1200 al 90000. Si se ingresa otro número informar
“FUERA DE CATALOGO”. RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nroCatalogo;

    printf("Ingrese el numero de catalogo\n");
    scanf("%d", &nroCatalogo);

    if (nroCatalogo >= 1200 && nroCatalogo <= 90000)
    {
        if (((nroCatalogo >= 12121) && (nroCatalogo <= 18081)) || ((nroCatalogo >= 30012) && (nroCatalogo <= 45565)) || ((nroCatalogo >= 67000) && (nroCatalogo <= 68000)))
        {
            printf("Los articulos que se encuentran entre el 12121 y 18081, estan defectuosos %d\n", nroCatalogo);
        }
    }
    else
        printf("El articulo se encuentra FUERA DE CATALOGO\n");

    system("pause");
    return 0;
}
