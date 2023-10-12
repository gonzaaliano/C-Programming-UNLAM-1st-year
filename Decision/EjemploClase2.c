#include <stdio.h>

int main()
{
    int edad;
    char nacionalidad;

    printf("Ingrese la edad de la persona\n");
    scanf("%d", &edad);

    if (edad >= 18)
    {

        printf("Ingrese la nacionalidad: A=Argentina, E=Extranjero\n");
        fflush(stdin); // PARA LIMPIAR BUFFER, Cuando apretas enter despues de la edad, interpreta que el enter es un caracter
        // OTRA OPCION GETCHAR()
        scanf("%c", &nacionalidad);

        if (nacionalidad == 'A' || nacionalidad == 'a')
        {
            printf("Persona de nacionalidad Argentina mayor de edad\n");
        }
        else
        {
            printf("Persona de nacionalidad extranjera mayor de edad\n");
        }
    }

    return 0;
}
