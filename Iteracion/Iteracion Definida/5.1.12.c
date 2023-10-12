/*5.1.12 Calcular el factorial de un número ingresado por teclado. El factorial se calcula como el producto de todos
los enteros positivos desde 1 hasta el número. En matemática el factorial se expresa con el símbolo. Por
ejemplo, el factorial de 5 es 120 ya que 5! = 1 x 2 x 3 x 4 x 5 =120*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, sumaTotal = 1;

    printf("Ingrese el numero para calcular el factorial\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sumaTotal *= i;

        printf("%d * %d\n", i * i + 1);
    }

    printf("El factorial de %d es: %d\n", num, sumaTotal);

    system("pause");
    return 0;
}