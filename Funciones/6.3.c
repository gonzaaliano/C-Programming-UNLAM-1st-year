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

int cuadrante(int, int);
int puntaje(int, int, int, int, int);

int main()
{
    int participantes, id, disparos = 5, coordx, coordy;

    printf("Ingrese la cantidad de participantes\n");
    scanf("%d", &participantes);

    for (int i = 1; i <= participantes; i++)
    {
        printf("Ingrese el numero de identificacion del participante\n");
        scanf("%d", &id);

        for (int j = 1; j <= disparos; i++)
        {
            printf("Ingrese las coordenadas del disparo\n");
            scanf("%d%d", &coordx, &coordy);

            cuadrante(coordx, coordy);

            
        }
        
    }
    

}

int cuadrante(coordenadaX, coordenadaY)
{
    int x, y, cuadrante, centro = 0;

    if (x > 0 && y > 0)
    {
        cuadrante = 1;
    }
    if (x < 0 && y > 0)
    {
        cuadrante = 2;
    }
    if (x < 0 && y < 0)
    {
        cuadrante = 3;
    }
    if (x > 0 && y < 0)
    {
        cuadrante = 4;
    }
    if (x == 0 && y == 0)
    {
        centro = 1;
    }

    return cuadrante;
}

int puntaje(disparos1, disparos2, disparos3, disparos4, disparoCentro)
{

    int puntajeTotal;

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