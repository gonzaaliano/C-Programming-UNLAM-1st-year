/*5.1.10 Confeccionar un programa que solicite el ingreso de un valor entero N < 12 y luego una lista de N números
reales sobre la cual debe calcular:
a. el promedio de los positivos.
b. el promedio de los negativos.
c. la cantidad de ceros.

Si el valor ingresado N es mayor que 12 informar 'VALOR EXCEDIDO” y si es menor o igual a 0 informar
“CANTIDAD INVALIDA”
*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, cantCeros = 0, cantPositivos = 0, cantNegativos = 0, num, sumaPositivos = 0, sumaNegativos = 0;
    float promedioPositivos = 0, promedioNegativos = 0;

    printf("Ingrese la cantidad de veces a iterar:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Ingrese numeros\n");
        scanf("%d", &num);

        if (num > 0)
        {
            cantPositivos++;
            sumaPositivos += num;
        }
        if (num < 0)
            {
                cantNegativos++;
                sumaNegativos += num;
            }
        
        else cantCeros++;
    }

    if (cantPositivos != 0)
        promedioPositivos = (float)sumaPositivos / cantPositivos;

    if (cantNegativos != 0)
        promedioNegativos = (float)sumaNegativos / cantNegativos;

    printf("La cantidad de 0s es: %d\n", cantCeros);
    printf("El promedio de los positivos es: %.2f\n", promedioPositivos);
    printf("El promedio de los negativos es: %.2f\n", promedioNegativos);

    system("pause");
    return 0;
}