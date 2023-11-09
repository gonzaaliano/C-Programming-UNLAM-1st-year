/*5.1.17 Ingresar N artículos (códigos) y sus correspondientes precios. Indicar el código del artículo más caro y el
precio del más barato. NOTA: todos los artículos tienen precios distintos
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int articulos, codigo, precio, codigoMasCaro = 0, precioMasCaro = 0, precioMasBarato;

    printf("Ingrese la cantidad de articulos\n");
    scanf("%d", &articulos);

    for (int i = 1; i <= articulos; i++)
    {
        printf("Ingrese el codigo del articulo %d\n", i);
        scanf("%d", &codigo);

        printf("Ingrese el precio del articulo %d\n", i);
        scanf("%d", &precio);

        if (precio > precioMasCaro)
        {
            precioMasCaro = precio;
            codigoMasCaro = codigo;
        }
        if (precio < precioMasBarato)
        {
            precioMasBarato = precio;
        }
    }

    printf("EL CODIGO DEL ARTICULO MAS CARO ES: %d\n", codigoMasCaro);
    printf("EL PRECIO DEL ARTICULO MAS BARATO ES DE: %d\n", precioMasBarato);

    system("pause");
    return 0;
}