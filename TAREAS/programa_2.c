/* tarea 2*/
#include <stdio.h>
#include <math.h>
 
// Función para convertir grados a radianes
double grados_a_radianes(double grados) 
{
    return grados * M_PI / 180.0;
}
 
//Para convertir radianes a grados
double radianes_a_grados(double radianes)
 {
    return radianes * 180.0 / M_PI;
}
 
// Conversión de coordenadas cartesianas a esféricas
void cartesianas_a_esfericas(int en_grados) 
{
    double x, y, z, r, theta, phi;
    printf("Introduce x, y, z: ");
    scanf("%lf %lf %lf", &x, &y, &z);
 
    r = sqrt(x*x + y*y + z*z);
    theta = atan2(y, x);
    phi = acos(z / r);
 
    if (en_grados) {
        theta = radianes_a_grados(theta);
        phi = radianes_a_grados(phi);
    }
 
    printf("Coordenadas esféricas: r=%.2lf, theta=%.2lf, phi=%.2lf\n", r, theta, phi);
}
 
// Conversión de coordenadas esféricas a cartesianas
void esfericas_a_cartesianas(int en_grados) {
    double r, theta, phi, x, y, z;
    printf("Introduce r, theta, phi: ");
    scanf("%lf %lf %lf", &r, &theta, &phi);
 
    if (en_grados) {
        theta = grados_a_radianes(theta);
        phi = grados_a_radianes(phi);
    }
 
    x = r * sin(phi) * cos(theta);
    y = r * sin(phi) * sin(theta);
    z = r * cos(phi);
 
    printf("Coordenadas cartesianas: x=%.2lf, y=%.2lf, z=%.2lf\n", x, y, z);
}
 
// Conversión de coordenadas cartesianas a cilíndricas
void cartesianas_a_cilindricas() {
    double x, y, z, r, theta;
    printf("Introduce x, y, z: ");
    scanf("%lf %lf %lf", &x, &y, &z);
 
    r = sqrt(x*x + y*y);
    theta = atan2(y, x);
 
    printf("Coordenadas cilíndricas: r=%.2lf, theta=%.2lf rad, z=%.2lf\n", r, theta, z);
}
 
// Conversión de unidades del SI al sistema inglés
void conversion_unidades() {
    int opcion;
    double valor;
    printf("Selecciona la cantidad a transformar:\n");
    printf("1. Longitud (metros a pies)\n");
    printf("2. Masa (kilogramos a libras)\n");
    printf("3. Temperatura (Celsius a Fahrenheit)\n");
    printf("4. Velocidad (m/s a mph)\n");
    printf("Opción: ");
    scanf("%d", &opcion);
 
    printf("Introduce el valor a convertir: ");
    scanf("%lf", &valor);
 
    switch (opcion) {
        case 1: printf("Resultado: %.2lf pies\n", valor * 3.28084); break;
        case 2: printf("Resultado: %.2lf libras\n", valor * 2.20462); break;
        case 3: printf("Resultado: %.2lf °F\n", (valor * 9.0 / 5.0) + 32); break;
        case 4: printf("Resultado: %.2lf mph\n", valor * 2.23694); break;
        default: printf("Opción no válida.\n");
    }
}
 
// Función principal (main)
int main() {
    int opcion, coordenadas_opcion, en_grados;
    char respuesta;
 
    do {
        printf("\nSeleccione una opción:\n");
        printf("1. Transformación de coordenadas\n");
        printf("2. Conversión de unidades\n");
        printf("3. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);
 
        switch (opcion) {
            case 1:
                printf("¿Desea trabajar en grados? (s/n): ");
                scanf(" %c", &respuesta);
                en_grados = (respuesta == 's' || respuesta == 'S');
 
                printf("Seleccione el tipo de transformación:\n");
                printf("1. Cartesianas a esféricas\n");
                printf("2. Esféricas a cartesianas\n");
                printf("3. Cartesianas a cilíndricas\n");
                printf("Opción: ");
                scanf("%d", &coordenadas_opcion);
 
                if (coordenadas_opcion == 1)
                    cartesianas_a_esfericas(en_grados);
                else if (coordenadas_opcion == 2)
                    esfericas_a_cartesianas(en_grados);
                else if (coordenadas_opcion == 3)
                    cartesianas_a_cilindricas();
                else
                    printf("Opción no válida.\n");
                break;
 
            case 2:
                conversion_unidades();
                break;
 
            case 3:
                printf("Saliendo del programa.\n");
                break;
 
            default:
                printf("Opción no válida. Intenta de nuevo.\n");
        }
        }while(opcion=3);
   
 
    return (0);
}
