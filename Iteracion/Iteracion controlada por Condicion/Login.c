#include <stdio.h>

int main()
{
    int clave;
    do
    {
        printf("Ingrese la clave de acceso\n");
        scanf("%d", &clave);
    } while (clave != 12345 || clave!);

    printf("INGRESO CORRECTAMENTE\n");
    return 0;
}