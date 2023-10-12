/*5.1.19 Ingresar un número entero mayor a 0. Debe dibujar un triángulo rectángulo con * con tantas filas como
el número indicado. En cada fila se va incrementando la cantidad de asteriscos. Por ejemplo, si se ingresa el
número 6 debe mostrar en pantalla:
*
**
***
****
*****
******
*/

// printf("*");
// printf("\n");

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filas;

    printf("Ingrese la cantidad de filas\n");
    scanf("%d", &filas);

    if (filas > 0)
    {
        for (int i = 1; i <= filas; i++)
        {
            for (int j = 1; j <= filas; j++)
            {
                printf("*");
                printf("\n");
            }
        }
    }
    else
        printf("Ingreso un numero incorrecto");

    return 0;
    system("pause");
}