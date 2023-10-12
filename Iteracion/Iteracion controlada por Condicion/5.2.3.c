/*5.2.3 Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se digite un *. Se
desea obtener e informar cuantos caracteres ingresados son numéricos y cuantos alfabéticos. Estos últimos
tienen que mostrarse separados por mayúsculas y minúsculas. También informar la cantidad de otros
símbolos que no sean ni letras ni números.*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contadorNumeros = 0, contadorLetrasMayus = 0, contadorLetrasMinus = 0, contadorSimbolos = 0;
    char caracter;

    do
    {
        printf("Ingrese un caracter:\t");
        scanf("%c", &caracter);
        getchar();

        if (caracter >= '0' && caracter <= '9')
        {
            contadorNumeros++;
        }
        else if (caracter >= 'a' && caracter <= 'z')
        {
            contadorLetrasMinus++;
        }
        else if (caracter >= 'A' && caracter <= 'Z')
        {
            contadorLetrasMayus++;
        }
        else
            contadorSimbolos++;

    } while (caracter != '*');

    printf("La cantidad de caracteres numericos es: %d\n", contadorNumeros);
    printf("La cantidad de letras mayus es: %d\n", contadorLetrasMayus);
    printf("La cantidad de letras minus es: %d\n", contadorLetrasMinus);
    printf("La cantidad de simbolos es: %d\n", contadorSimbolos);

    system("pause");
    return 0;
}