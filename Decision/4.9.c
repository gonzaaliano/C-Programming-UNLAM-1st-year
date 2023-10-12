/*4.9. Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo
ingresado corresponde a una vocal, con el mensaje “VOCAL”. y su correspondiente valor numérico en ASCII. 
RESUELTO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter\n");
    scanf("%c", &caracter);

    switch (caracter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("El caracter ingresado es una vocal. Su valor en ASCII es %d", caracter);
        break;
    default:
        printf("El caracter ingresado no es una vocal.");
        break;
    }

    system("pause");
    return 0;
}

