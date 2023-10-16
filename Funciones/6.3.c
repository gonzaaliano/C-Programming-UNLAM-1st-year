/*6.3. Se realizó un concurso de tiro al blanco. Por cada participante se ingresa un número que lo identifica y el
resultado de los disparos efectuados. El ingreso finaliza con un número de participante negativo.
Cada participante efectúa 5 disparos, registrándose las coordenadas X-Y de cada disparo.
 No considere disparos sobre los ejes, pero sí en el centro (si es sobre los ejes las coordenadas
deberán volver a ingresarse).
 Para determinar el cuadrante utilizar la función CUADRANTE que reciba las dos coordenadas y
retorne el cuadrante al cual pertenece (1 a 4) y 0 para indicar un tiro en el centro.
Para calcular el puntaje utilizar la función PUNTAJE que reciba 5 parámetros que representan la cantidad
disparos en cada cuadrante y en el centro. La función debe retornar el puntaje obtenido según la siguiente
escala:
 Cuadrantes 1 y 2: 50 puntos
 Cuadrantes 3 y 4: 40 puntos
 Centro: 100 puntos
Determinar:
a. El puntaje obtenido por cada participante, detallando cuantos disparos realizó en cada cuadrante.
b. Mostrar el número del participante ganador y el puntaje obtenido.
c. Calcular y mostrar la cantidad total de disparos en el centro (de todos los participantes)
*/

#include <stdio.h>
#include <stdlib.h>

int Cuadrante(int, int);
int Puntaje(int, int, int, int, int);

int main()
{
    int nroParticipante, disparos = 5, coordx, coordy, cantDisparosCentro = 0, cuadrante, cantDisparos1 = 0, cantDisparos2 = 0, cantDisparos3 = 0, cantDisparos4 = 0;
    int puntajeTotal, puntajeMax = 0;

    printf("Ingrese el numero de participante\n");
    scanf("%d", &nroParticipante);

    while (nroParticipante >= 0)
    {
        printf("Ingrese los disparos del participante numero: %d\n", nroParticipante);
        for (int i = 1; i <= disparos; i++)
        {
            printf("Ingrese las coordenadas del disparo\n");
            scanf("%d%d", &coordx, &coordy);

            cuadrante = Cuadrante(coordx, coordy);

            switch (cuadrante)
            {
            case 0:
                cantDisparosCentro++;
                break;
            case 1:
                cantDisparos1++;
                break;
            case 2:
                cantDisparos2++;
                break;
            case 3:
                cantDisparos3++;
                break;
            case 4:
                cantDisparos4++;
                break;
            default:
                break;
            }
        }

        puntajeTotal = Puntaje(cantDisparos1, cantDisparos2, cantDisparos3, cantDisparos4, cantDisparosCentro);

        printf("El puntaje total alcanzado por el participante numero: %d fue de %d puntos\n", nroParticipante, puntajeTotal);
        printf("El participante %d realizo:\n", nroParticipante);
        printf("Disparos Cuadrante 1: %d\n", cantDisparos1);
        printf("Disparos Cuadrante 2: %d\n", cantDisparos2);
        printf("Disparos Cuadrante 3: %d\n", cantDisparos3);
        printf("Disparos Cuadrante 4: %d\n", cantDisparos4);
        printf("Disparos en el centro: %d\n", cantDisparosCentro);

        cantDisparos1 = 0;
        cantDisparos2 = 0;
        cantDisparos3 = 0;
        cantDisparos4 = 0;

        if (puntajeTotal > puntajeMax)
        {
            puntajeMax = puntajeTotal;
        }

        printf("Ingrese el numero de participante\n");
        scanf("%d", &nroParticipante);
    }

    printf("EL PARTICIPANTE NRO: %d fue el ganador con %d puntos\n", nroParticipante, puntajeMax);

    printf("La cantidad total de disparos en el centro de todos los participantes fue de %d disparos\n", cantDisparosCentro);

    system("pause");
    return 0;
}

int Cuadrante(int coordenadaX, int coordenadaY)
{
    int cuadrante;

    if (coordenadaX > 0 && coordenadaY > 0)
    {
        cuadrante = 1;
    }
    if (coordenadaX < 0 && coordenadaY > 0)
    {
        cuadrante = 2;
    }
    if (coordenadaX < 0 && coordenadaY < 0)
    {
        cuadrante = 3;
    }
    if (coordenadaX > 0 && coordenadaY < 0)
    {
        cuadrante = 4;
    }
    if (coordenadaX == 0 && coordenadaY == 0)
    {
        cuadrante = 0;
    }

    return cuadrante;
}

int Puntaje(int disparos1, int disparos2, int disparos3, int disparos4, int disparoCentro)
{

    int puntajeTotal = 0;

    if (disparos1 > 0 || disparos2 > 0)
    {
        puntajeTotal += 50;
    }
    if (disparos3 > 0 || disparos4 > 0)
    {
        puntajeTotal += 40;
    }
    if (disparoCentro > 0)
    {
        puntajeTotal += 100;
    }

    return puntajeTotal;
}