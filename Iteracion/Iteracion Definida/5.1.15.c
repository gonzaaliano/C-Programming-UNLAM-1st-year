/*5.1.15 Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 3 disparos,
registrándose las coordenadas X-Y de cada disparo. Determinar:
a. Cuantos disparos se efectuaron en cada cuadrante por cada participante
b. Cuantos disparos se efectuaron en total en el centro.
NOTA: no considere disparos sobre los ejes.*/
//RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int participantes = 5, disparos = 3, coordenadaX, coordenadaY, cantDisparosCentro = 0, cantDisparosCuad1 = 0, cantDisparosCuad2 = 0, cantDisparosCuad3 = 0, cantDisparosCuad4 = 0;

    for (int i = 1; i <= participantes; i++)
    {
        printf("INGRESE LOS DISPAROS EFECTUADOS POR EL PARTICIPANTE: %d\n", i);
        for (int j = 1; j <= disparos; j++)
        {
            printf("Disparo %d\n", j);

            printf("Ingrese la coordenada X del disparo\n");
            scanf("%d", &coordenadaX);

            printf("Ingrese la coordenada Y del disparo\n");
            scanf("%d", &coordenadaY);

            if ((coordenadaX == 0) && (coordenadaY == 0))
            {
                cantDisparosCentro++;
            }
            if ((coordenadaX > 0) && (coordenadaY > 0))
            {
                cantDisparosCuad1++; // CUADRANTE 1
            }
            if ((coordenadaX < 0) && (coordenadaY > 0))
            {
                cantDisparosCuad2++; // CUADRANTE 2
            }
            if ((coordenadaX < 0) && (coordenadaY < 0))
            {
                cantDisparosCuad3++; // CUADRANTE 3
            }
            if ((coordenadaX > 0) && (coordenadaY < 0))
            {
                cantDisparosCuad4++; // CUADRANTE 4
            }
        }

        printf("El participante %d efectuo:\n", i);
        printf("Disparos 1er cuadrante: %d\n", cantDisparosCuad1);
        printf("Disparos 2ndo cuadrante: %d\n", cantDisparosCuad2);
        printf("Disparos 3er cuadrante: %d\n", cantDisparosCuad3);
        printf("Disparos 4to cuadrante: %d\n", cantDisparosCuad4);

        cantDisparosCuad1 = 0;
        cantDisparosCuad2 = 0;
        cantDisparosCuad3 = 0;
        cantDisparosCuad4 = 0;
    }

    printf("La cantidad total de disparos en el centro fue de %d\n", cantDisparosCentro);

    system("pause");
    return 0;
}