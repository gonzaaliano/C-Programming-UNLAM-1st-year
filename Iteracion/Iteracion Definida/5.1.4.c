// 5.1.4 Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas.
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vocal;
    int i, contadorVocales;

    contadorVocales = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese una vocal(a,e,i,o,u): \n");
        scanf(" %c", &vocal);

        switch (vocal)
        {
        case 'a':
            contadorVocales++;
            break;
        case 'e':
            contadorVocales++;
            break;
        case 'i':
            contadorVocales++;
            break;
        case 'o':
            contadorVocales++;
            break;
        case 'u':
            contadorVocales++;
            break;
        default:
            printf("Error codigo incorrecto");
        }
    }

    if (contadorVocales > 0)
    {
        printf("La cantidad de vocales ingresadas es: %d\n", contadorVocales);
    }

    system("pause");
    return 0;
}