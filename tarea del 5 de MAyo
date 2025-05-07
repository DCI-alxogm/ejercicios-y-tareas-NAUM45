#include <stdio.h>
 
int main() {
    FILE *archivoEntrada, *archivoSalida;
    int n;                 
    float limInf, limSup;   
 
    archivoEntrada = fopen("datos.txt", "r");
    if (archivoEntrada == NULL) {
        printf("No se pudo abrir el archivo de entrada.\n");
        return 1;
    }
 
    fscanf(archivoEntrada, "%d %f %f", &n, &limInf, &limSup);
    fclose(archivoEntrada);
 
    if (n < 2) {
        printf("El número de evaluaciones debe ser al menos 2.\n");
        return 1;
    }
 
    float x[n]; 
    float y[n]; 
    float paso = (limSup - limInf) / (n - 1); 
 
    for (int i = 0; i < n; i++) {
        x[i] = limInf + i * paso;
        y[i] = x[i] * x[i] + 1;
    }
 
    archivoSalida = fopen("parabola.txt", "w");
    if (archivoSalida == NULL) {
        printf("No se pudo abrir el archivo de salida.\n");
        return 1;
    }
 
    for (int i = 0; i < n; i++) {
        fprintf(archivoSalida, "x = %.2f, f(x) = %.2f\n", x[i], y[i]);
    }
 
    fclose(archivoSalida);
    printf("Evaluaciones guardadas en parabola.txt\n");
 
    return 0;
}
