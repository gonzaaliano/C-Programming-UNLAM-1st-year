/*2.10. Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule
la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera.
𝑆𝑢𝑝𝑒𝑟𝑓𝑖𝑐𝑖𝑒 = 𝜋𝑟
2
𝑃𝑒𝑟í𝑚𝑒𝑡𝑟𝑜 = 2𝜋𝑟
𝑉𝑜𝑙ú𝑚𝑒𝑛 =
4
3
𝜋�*/
// RESUELTO

#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main()
{

    int radio;
    float superficie, perimetro, volumen;

    printf("Bienvenidos al programa valores del circulo\n");
    printf("Ingrese el radio del circulo\n");
    scanf("%d", &radio);

    superficie = pi * radio * radio;
    perimetro = 2 * pi * radio;
    volumen = 1.33 * pi * radio * radio * radio;

    printf("La superficie del circulo es: %f\n", superficie);
    printf("La perimetro del circulo es: %f\n", perimetro);
    printf("La volumen del circulo es: %f\n", volumen);

    system("pause");
    return 0;
}