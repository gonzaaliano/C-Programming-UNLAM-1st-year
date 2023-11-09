/*7.2.2 Ingresar una matriz de 5x4 por teclado. Realizar una función que genere un vector con la suma por fila de
dicha matriz y otro vector vector con la suma por columna de dicha matriz.
*/

#include <stdio.h>
#include <stdlib.h>
void CargaMatriz(int[][4], int, int);

int main()
{
    int matriz[5][4];

    system("pause");
    return 0;
}

void CargaMatriz(int matriz[][4], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese numeros a la matriz\n");
            scanf("%d", matriz[filas][columnas]);
        }
    }
}
