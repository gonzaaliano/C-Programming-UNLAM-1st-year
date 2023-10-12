#include<stdio.h>

int main() 
{
    int num1, num2;
    char operacion;

    printf("Ingrese el primer numero.\n");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero.\n");
    scanf("%d", &num2);

    printf("Ingrese el caracter: S(SUMA), R(RESTA), P(PRODUCTO), C(COCIENTE)");
    fflush(stdin);
    scanf("%c", &operacion);

    switch (operacion)
    {
    case 'S':
        printf(num1 + num2);
        break;
    case 'R':
        printf(num1 - num2);
        break;
    case 'P':
        printf(num1 * num2);
        break;
    case 'C':
        printf(num1 / num2);//IF PARA CHEQUEAR DIVISION POR 0
        break;
    default:
        break;
    }

    return 0;
}