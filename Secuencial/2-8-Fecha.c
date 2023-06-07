/*2.8. Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un
número con formato (aammdd).*/
//RESUELTO

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int date, day, month, year;

    printf("Bienvenido al programa fecha\n");
    printf("Ingrese un numero entero que represente una fecha en formato dd/mm/aa\n");
    scanf("%d", &date);

    year = date % 100;
    month = (date / 100) % 100;
    day = date / 10000;

    printf("Su fecha en formato aa/mm/dd es: %d\n", year);
    printf("%d\t", month);
    printf("%d\t", day);

    system("pause");
    return 0;
}