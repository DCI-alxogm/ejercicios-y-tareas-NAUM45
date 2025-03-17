#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int opcion, numero;
    float decimal;
    char letra1, letra2, letra3;
    int contador = 0;
    double resultado; // Cambiado a double para usar pow correctamente
   
    printf("Seleccione una opcion:\n");
    printf("1. Calcular el cuadrado de un numero\n");
    printf("2. Verificar si un numero es par o impar\n");
    printf("3. Calcular la raiz cuadrada de un numero decimal\n");
    printf("4. Contar cuantas vocales hay en tres letras ingresadas\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese un numero: ");
            scanf("%d", &numero);
            resultado = pow(numero, 2.0);
            printf("El cuadrado de %d es %.2f\n", numero, resultado);
            break;
        case 2:
            printf("Ingrese un numero: ");
            scanf("%d", &numero);
            if (numero % 2 == 0) {
                printf("El numero es par.\n");
            } else
            {
                printf("El numero es impar.\n");
            }
            break;
        case 3:
            printf("Ingrese un numero decimal: ");
            scanf("%f", &decimal);
            if (decimal >= 0) {
                decimal = sqrt(decimal);
                printf("La raiz cuadrada es: %.2f\n", decimal);
            } else
            {
                printf("No se puede calcular la raiz cuadrada de un numero negativo.\n");
            }
            break;
        case 4:
            printf("Ingrese tres letras separadas por espacios: ");
            scanf(" %c %c %c", &letra1, &letra2, &letra3);
            if (strchr("aeiouAEIOU", letra1)) contador++;
            if (strchr("aeiouAEIOU", letra2)) contador++;
            if (strchr("aeiouAEIOU", letra3)) contador++;
            printf("Se ingresaron %d vocales.\n", contador);
            break;
        default:
            printf("Opcion no valida error\n");
    }
    return 0;
}

