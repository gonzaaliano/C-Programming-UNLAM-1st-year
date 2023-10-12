//RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int participantes = 3, tiros = 5, contNulos = 0, disparoLejano = 0, disparo;

    for (int i = 1; i <= participantes; i++)
    {
        printf("Ingrese los tiros del participante %d\n", i);

        for (int j = 1; j <= tiros; j++)
        {
            do
            {
                printf("Ingrese la distancia en metros del disparo: %d\n", j);
                scanf("%d", &disparo);
            } while (disparo < 0);

            if (disparo == 0)
            {
                contNulos++;
            }
            else
            {
                if (disparo > disparoLejano)
                {
                    disparoLejano = disparo;
                }
            }
        }
        printf("El lanzamiento mas lejano del participante %d fue de %d metros\n", i, disparoLejano);

        disparoLejano = 0;
    }

    printf("La cantidad de disparos nulos entre todos los participantes es de %d\n", contNulos);

    system("pause");
    return 0;
}