/*7.1.2 Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere
un vector de 10 posiciones con el contenido de ambos vectores intercalados. Mostrar el vector generado.
*/

#include <stdio.h>
#include <stdlib.h>
void Cargar(int[], int);
void IntercalarVectores(int[], int[]);

int main()
{
    int vec1[5];
    int vec2[5];
    int vec3[10];

    Cargar(vec1, 5);
    Cargar(vec2, 5);

    for (int i = 0; i < 10; i++)
    {
        vec3[i] = 
    }
    

    system("pause");
    return 0;
}

void Cargar(int vector[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        printf("Ingrese un numero\n");
        scanf("%d", vector[i]);
    }
}
