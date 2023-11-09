#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][3], cont =1;

    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            mat[2][3] = cont;

            cont++;
        }
    }

    printf("La matriz correspondiente es: %d\n", mat[2][3]);
}