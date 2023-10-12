#include <stdio.h>

int main()
{
    int num;
    printf("Ingrese un numero\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Es par\n");
    }
    else
    {
        printf("Es impar");
    }

    return 0;
}