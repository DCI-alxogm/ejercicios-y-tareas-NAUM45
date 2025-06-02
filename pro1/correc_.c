#include <stdio.h>    // Para funciones de entrada/salida como printf y fopen
#include <stdlib.h>   // Para funciones de manejo de memoria dinámica como malloc y free
#include <math.h>     // Para funciones matemáticas como fabs:contentReference[oaicite:6]{index=6}

int main() {
    // Definición de constantes
    const int n = 5;              // Número de filas de la placa
    const int m = 5;              // Número de columnas de la placa
    const int max_iter = 100;     // Número máximo de iteraciones permitidas
    const double epsilon = 0.1;   // Tolerancia para determinar el equilibrio térmico

    // Declaración de matrices para la placa actual y la nueva
    double placa[n][m];
    double nuevaPlaca[n][m];

    // Apertura del archivo de entrada que contiene las temperaturas iniciales
    FILE *archivo = fopen("entrada.txt", "r");
    if (!archivo) {
        printf("Error al abrir el archivo de entrada.\n");
        return 1; // Finaliza el programa si no se puede abrir el archivo
    }

    // Lectura de las temperaturas iniciales desde el archivo
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            fscanf(archivo, "%lf", &placa[i][j]);

    fclose(archivo); // Cierre del archivo después de la lectura

    int iteracion = 0;   // Contador de iteraciones
    int equilibrio = 0;  // Bandera para indicar si se ha alcanzado el equilibrio

    // Bucle principal que se ejecuta hasta alcanzar el equilibrio o el número máximo de iteraciones
    while (iteracion < max_iter && !equilibrio) {
        equilibrio = 1; // Se asume que se alcanzará el equilibrio en esta iteración

        // Cálculo de nuevas temperaturas para los puntos internos de la placa
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < m - 1; j++) {
                // Promedio de las temperaturas de los vecinos (arriba, abajo, izquierda, derecha)
                nuevaPlaca[i][j] = (placa[i+1][j] + placa[i-1][j] +
                                    placa[i][j+1] + placa[i][j-1]) / 4.0;
                // Cálculo del error relativo entre la nueva y la antigua temperatura
                double error = fabs(nuevaPlaca[i][j] - placa[i][j]);
                if (error >= epsilon)
                    equilibrio = 0; // Si el error es mayor que epsilon, no se ha alcanzado el equilibrio
            }
        }

        // Mantenimiento de los valores de los bordes sin cambios
        for (int i = 0; i < n; i++) {
            nuevaPlaca[i][0] = placa[i][0];         // Borde izquierdo
            nuevaPlaca[i][m - 1] = placa[i][m - 1]; // Borde derecho
        }
        for (int j = 0; j < m; j++) {
            nuevaPlaca[0][j] = placa[0][j];         // Borde superior
            nuevaPlaca[n - 1][j] = placa[n - 1][j]; // Borde inferior
        }

        // Creación del nombre del archivo de salida para esta iteración
        char nombreArchivo[100];
        sprintf(nombreArchivo, "salida_%d.txt", iteracion);

        // Apertura del archivo de salida para escribir las nuevas temperaturas
        archivo = fopen(nombreArchivo, "w");
        if (!archivo) {
            printf("Error al crear el archivo de salida: %s\n", nombreArchivo);
            return 1; // Finaliza el programa si no se puede crear el archivo
        }

        // Escritura de las nuevas temperaturas en el archivo de salida
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                fprintf(archivo, "%.2f ", nuevaPlaca[i][j]);
            fprintf(archivo, "\n"); // Nueva línea después de cada fila
        }
        fclose(archivo); // Cierre del archivo de salida

        // Preparación para la siguiente iteración: copia de nuevaPlaca a placa
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                placa[i][j] = nuevaPlaca[i][j];

        iteracion++; // Incremento del contador de iteraciones
    }

    // Mensaje final indicando si se alcanzó el equilibrio o no
    if (equilibrio)
        printf("Equilibrio alcanzado en %d iteraciones.\n", iteracion);
    else
        printf("No se alcanzó el equilibrio después de %d iteraciones.\n", max_iter);

    return 0; // Fin del programa
}

