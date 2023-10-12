// Un instituto de idiomas dicta 24 cursos semestrales de 4 idiomas diferentes (1-Inglés, 2-portugués, 3-italiano, 4-frances) en 6 niveles diferentes. Cada curso tiene un cupo máximo de 15 personas.

// El programa debe realizar una estadistica de las inscripciones realizadas en los cursos que el instituto dictara durante el segundo semestre del ano. Las inscripciones se realizaron del 19 al 23 de junio.

// Por cada inscripcion se ingresa:
// 	Día de inscripcion (Int, 19 a 23)
// 	Código de idioma (Int, 1 a 4)
// 	Código de nivel (Int, 1 a 6)
// El Ingreso de datos finaliza con día de Inscripción 0.
// Por cada Inscripción verificar que haya cupo.

// Se pide hacer un programa en lenguaje C para informar:

// 	1) Por cada idioma, la cantidad de Inscripciones por cada nivel.
// 	2) Cantidad total de inscripciones rechazadas por falta de cupo.
// 	3) Código de idioma con mayor cantidad total de inscripciones (sin discriminar por nivel).
// 	4) Cantidad de inscripciones realizadas en cada dia (solo mostrar si hubo inscripciones en el dia).

// Validar, con funciones, el ingreso de todos los datos.

// Se pueden desarrollar todas las funciones que consideres necesarias. Como minimo se requieren las siguientes funciones:

// Validacion del ingreso de datos.
// Informe del punto 1.
#include <stdio.h>

// Función para validar el ingreso de un entero en un rango específico
int validarEnteroEnRango(int min, int max)
{
    int num;
    do
    {
        printf("Ingrese un número entre %d y %d: ", min, max);
        scanf("%d", &num);
        if (num < min || num > max)
        {
            printf("Número inválido. Intente nuevamente.\n");
        }
    } while (num < min || num > max);
    return num;
}

// Función para validar el ingreso del día de inscripción (19 a 23)
int validarDiaInscripcion()
{
    return validarEnteroEnRango(19, 23);
}

// Función para validar el ingreso del código de idioma (1 a 4)
int validarCodigoIdioma()
{
    return validarEnteroEnRango(1, 4);
}

// Función para validar el ingreso del código de nivel (1 a 6)
int validarCodigoNivel()
{
    return validarEnteroEnRango(1, 6);
}

// Función para calcular las estadísticas de inscripciones
void calcularEstadisticas()
{
    int inscripciones_por_idioma[4][6] = {0}; // Matriz para almacenar la cantidad de inscripciones por idioma y nivel
    int inscripciones_rechazadas = 0;         // Variable para contar las inscripciones rechazadas
    int dia_inscripcion, codigo_idioma, codigo_nivel;

    do
    {
        printf("\n-- Nueva Inscripción --\n");
        printf("Ingrese el día de inscripción (0 para finalizar): ");
        dia_inscripcion = validarDiaInscripcion();

        printf("Ingrese el código de idioma (1-Inglés, 2-Portugués, 3-Italiano, 4-Francés): ");
        codigo_idioma = validarCodigoIdioma();
        printf("Ingrese el código de nivel (1-6): ");
        codigo_nivel = validarCodigoNivel();

        if (inscripciones_por_idioma[codigo_idioma - 1][codigo_nivel - 1] < 15)
        {
            inscripciones_por_idioma[codigo_idioma - 1][codigo_nivel - 1]++;
        }
        else
        {
            printf("Cupo máximo alcanzado. Inscripción rechazada.\n");
            inscripciones_rechazadas++;
        }
    } while (dia_inscripcion != 0);

    // Informar la cantidad de inscripciones por cada idioma y nivel
    printf("\n-- Estadísticas de Inscripciones por Idioma y Nivel --\n");
    printf("Idioma\tNivel 1\tNivel 2\tNivel 3\tNivel 4\tNivel 5\tNivel 6\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", i + 1);
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t\t", inscripciones_por_idioma[i][j]);
        }
        printf("\n");
    }

    // Informar la cantidad total de inscripciones rechazadas
    printf("\nCantidad total de inscripciones rechazadas: %d\n", inscripciones_rechazadas);
}

int main()
{
    calcularEstadisticas();
    return 0;
}
