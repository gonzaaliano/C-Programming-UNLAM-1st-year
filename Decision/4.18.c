/*4.18. Confeccionar un programa que permita ingresar la fecha actual (día, mes y año) y la fecha de nacimiento
de una persona (día, mes y año). Con ambos datos debe calcular la edad de dicha persona.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int diaNac, mesNac, anoNac, diaAct, mesAct, anoAct, edadAnos, edadMeses, edadDias;
    printf("Ingrese la fecha actual:\n");
    scanf("%d%d%d", &anoAct, &mesAct, &diaAct);

    printf("Ingrese la fecha de nacimiento\n");
    scanf("%d%d%d", &anoNac, &mesNac, &diaNac);

    edadAnos = anoAct - anoNac;
    edadMeses = mesAct - mesNac;
    edadDias = diaAct - diaNac;

    printf("La edad de la persona es: %d anos, %d meses, %d dias\n", edadAnos, edadMeses, edadDias);

    system("pause");
    return 0;
}
