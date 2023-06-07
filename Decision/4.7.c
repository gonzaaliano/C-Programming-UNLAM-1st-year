/*4.7. Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y determine
e informe si forman o no triángulo. Para ello utilizar el teorema de la desigualdad del triángulo que establece
que la suma de las longitudes de cualesquiera de dos lados de un triángulo es mayor que la longitud del
tercer lado. RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3;
    printf("Ingrese 3 valores positivos y mayores a 0\n");
    scanf("%d%d%d", &lado1, &lado2, &lado3);

    if (lado1 && lado2 && lado3 > 0)
    {
        if ((lado1 + lado2) > lado3)
        {
            printf("Por el teorema de la desigualdad triangular, se forma un triangulo");
        }
        else if ((lado2 + lado3) > lado1)
        {
            printf("Por el teorema de la desigualdad triangular, se forma un triangulo");
        }
        else if ((lado1 + lado3) > lado2)
        {
            printf("Por el teorema de la desigualdad triangular, se forma un triangulo");
        }
        else
            printf("Las medidas no son correctas por lo tanto no se formo ningun triangulo");
    }

    system("pause");
    return 0;
}